#include "util.h"
#include "memmgr.h"
#include "hello-c.h"

MFILE hello = 
{
  "hello.c",
  __hello_sz,
  __hello,
  0
};
MFILE *mhello = &hello;

long debug;
long assembly;

long token;

enum { LEA ,IMM ,JMP ,CALL,JZ  ,JNZ ,ENT ,ADJ ,LEV ,LI  ,LC  ,SI  ,SC  ,PUSH,
       OR  ,XOR ,AND ,EQ  ,NE  ,LT  ,GT  ,LE  ,GE  ,SHL ,SHR ,ADD ,SUB ,MUL ,DIV ,MOD ,
       OPEN,READ,CLOS,PRTF,MALC,MSET,MCMP,EXIT };

enum {
  Num = 128, Fun, Sys, Glo, Loc, Id,
  Char, Else, Enum, If, Int, Return, Sizeof, While,
  Assign, Cond, Lor, Lan, Or, Xor, And, Eq, Ne, Lt, Gt, Le, Ge, Shl, Shr, Add, Sub, Mul, Div, Mod, Inc, Dec, Brak
};

enum {Token, Hash, Name, Type, Class, Value, BType, BClass, BValue, IdSize};


enum { CHAR, INT, PTR };

enum {Global, Local};

long *text,
    *stack;
long * old_text;
char *data;
long *idmain;

char *src, *old_src;

long poolsize;
long *pc, *bp, *sp, ax, cycle;

long *current_id,
    *symbols,
    line,
    token_val;

long basetype;
long expr_type;

long index_of_bp;

void next() {
    char *last_pos;
    long hash;

    while ((token = *src) != 0) {
        ++src;

        if (token == '\n') {
            if (assembly) {
                Print("%d: %.*s",PRINTVARS(line, (int)(src-old_src), old_src));
                old_src = src;

                while (old_text < text) {
                    Print("%s",PRINTVARS(& "LEA ,IMM ,JMP ,CALL,JZ  ,JNZ ,ENT ,ADJ ,LEV ,LI  ,LC  ,SI  ,SC  ,PUSH,"
                                      "OR  ,XOR ,AND ,EQ  ,NE  ,LT  ,GT  ,LE  ,GE  ,SHL ,SHR ,ADD ,SUB ,MUL ,DIV ,MOD ,"
                                      "OPEN,READ,CLOS,PRTF,MALC,MSET,MCMP,EXIT"[*++old_text * 5]));

                    if (*old_text <= ADJ)
                        Print(" %d\n",PRINTVARS(*++old_text));
                    else
                        display_print(0,0,"\n");
                }
            }
            ++line;
        }
        else if (token == '#') {
            while (*src != 0 && *src != '\n') {
                src++;
            }
        }
        else if ((token >= 'a' && token <= 'z') || (token >= 'A' && token <= 'Z') || (token == '_')) {

            last_pos = src - 1;
            hash = token;

            while ((*src >= 'a' && *src <= 'z') || (*src >= 'A' && *src <= 'Z') || (*src >= '0' && *src <= '9') || (*src == '_')) {
                hash = hash * 147 + *src;
                src++;
            }

            current_id = symbols;
            while (current_id[Token]) {
                if (current_id[Hash] == hash && !memcmp((char *)current_id[Name], last_pos, src - last_pos)) {
                    token = current_id[Token];
                    return;
                }
                current_id = current_id + IdSize;
            }

            current_id[Name] = (long)last_pos;
            current_id[Hash] = hash;
            token = current_id[Token] = Id;
            return;
        }
        else if (token >= '0' && token <= '9') {
            token_val = token - '0';
            if (token_val > 0) {
                while (*src >= '0' && *src <= '9') {
                    token_val = token_val*10 + *src++ - '0';
                }
            } else {
                if (*src == 'x' || *src == 'X') {
                    token = *++src;
                    while ((token >= '0' && token <= '9') || (token >= 'a' && token <= 'f') || (token >= 'A' && token <= 'F')) {
                        token_val = token_val * 16 + (token & 15) + (token >= 'A' ? 9 : 0);
                        token = *++src;
                    }
                } else {
                    while (*src >= '0' && *src <= '7') {
                        token_val = token_val*8 + *src++ - '0';
                    }
                }
            }

            token = Num;
            return;
        }
        else if (token == '/') {
            if (*src == '/') {
                while (*src != 0 && *src != '\n') {
                    ++src;
                }
            } else {
                token = Div;
                return;
            }
        }
        else if (token == '"' || token == '\'') {
            last_pos = data;
            while (*src != 0 && *src != token) {
                token_val = *src++;
                if (token_val == '\\') {
                    token_val = *src++;
                    if (token_val == 'n') {
                        token_val = '\n';
                    }
                }

                if (token == '"') {
                    *data++ = token_val;
                }
            }

            src++;
            if (token == '"') {
                token_val = (long)last_pos;
            } else {
                token = Num;
            }

            return;
        }
        else if (token == '=') {
            if (*src == '=') {
                src ++;
                token = Eq;
            } else {
                token = Assign;
            }
            return;
        }
        else if (token == '+') {
            if (*src == '+') {
                src ++;
                token = Inc;
            } else {
                token = Add;
            }
            return;
        }
        else if (token == '-') {
            if (*src == '-') {
                src ++;
                token = Dec;
            } else {
                token = Sub;
            }
            return;
        }
        else if (token == '!') {
            if (*src == '=') {
                src++;
                token = Ne;
            }
            return;
        }
        else if (token == '<') {
            if (*src == '=') {
                src ++;
                token = Le;
            } else if (*src == '<') {
                src ++;
                token = Shl;
            } else {
                token = Lt;
            }
            return;
        }
        else if (token == '>') {
            if (*src == '=') {
                src ++;
                token = Ge;
            } else if (*src == '>') {
                src ++;
                token = Shr;
            } else {
                token = Gt;
            }
            return;
        }
        else if (token == '|') {
            if (*src == '|') {
                src ++;
                token = Lor;
            } else {
                token = Or;
            }
            return;
        }
        else if (token == '&') {
            if (*src == '&') {
                src ++;
                token = Lan;
            } else {
                token = And;
            }
            return;
        }
        else if (token == '^') {
            token = Xor;
            return;
        }
        else if (token == '%') {
            token = Mod;
            return;
        }
        else if (token == '*') {
            token = Mul;
            return;
        }
        else if (token == '[') {
            token = Brak;
            return;
        }
        else if (token == '?') {
            token = Cond;
            return;
        }
        else if (token == '~' || token == ';' || token == '{' || token == '}' || token == '(' || token == ')' || token == ']' || token == ',' || token == ':') {
            return;
        }
    }
}

void match(long tk) {
    if (token == tk) {
        next();
    } else {
        Print("%d: expected token: %d\n",PRINTVARS(line, tk));
    }
}


void expression(long level) {
    long *id;
    long tmp;
    long *addr;
    {
        if (!token) {
            Print("%d: unexpected token EOF of expression\n",PRINTVARS(line));
        }
        if (token == Num) {
            match(Num);

            *++text = IMM;
            *++text = token_val;
            expr_type = INT;
        }
        else if (token == '"') {
            *++text = IMM;
            *++text = token_val;

            match('"');
            while (token == '"') {
                match('"');
            }
            data = (char *)(((long)data + sizeof(long)) & (-sizeof(long)));
            expr_type = PTR;
        }
        else if (token == Sizeof) {
            match(Sizeof);
            match('(');
            expr_type = INT;

            if (token == Int) {
                match(Int);
            } else if (token == Char) {
                match(Char);
                expr_type = CHAR;
            }

            while (token == Mul) {
                match(Mul);
                expr_type = expr_type + PTR;
            }

            match(')');
            *++text = IMM;
            *++text = (expr_type == CHAR) ? sizeof(char) : sizeof(long);

            expr_type = INT;
        }
        else if (token == Id) {
            match(Id);

            id = current_id;

            if (token == '(') {
                match('(');
                tmp = 0;
                while (token != ')') {
                    expression(Assign);
                    *++text = PUSH;
                    tmp ++;

                    if (token == ',') {
                        match(',');
                    }

                }
                match(')');
                if (id[Class] == Sys) {
                    *++text = id[Value];
                }
                else if (id[Class] == Fun) {
                    *++text = CALL;
                    *++text = id[Value];
                }
                else {
                    Print("%d: bad function call\n",PRINTVARS(line));
                }
                if (tmp > 0) {
                    *++text = ADJ;
                    *++text = tmp;
                }
                expr_type = id[Type];
            }
            else if (id[Class] == Num) {
                *++text = IMM;
                *++text = id[Value];
                expr_type = INT;
            }
            else {
                if (id[Class] == Loc) {
                    *++text = LEA;
                    *++text = index_of_bp - id[Value];
                }
                else if (id[Class] == Glo) {
                    *++text = IMM;
                    *++text = id[Value];
                }
                else {
                    Print("%d: undefined variable\n",PRINTVARS(line));
                }
                expr_type = id[Type];
                *++text = (expr_type == CHAR) ? LC : LI;
            }
        }
        else if (token == '(') {
            match('(');
            if (token == Int || token == Char) {
                tmp = (token == Char) ? CHAR : INT;
                match(token);
                while (token == Mul) {
                    match(Mul);
                    tmp = tmp + PTR;
                }

                match(')');

                expression(Inc);

                expr_type  = tmp;
            } else {
                expression(Assign);
                match(')');
            }
        }
        else if (token == Mul) {
            match(Mul);
            expression(Inc);

            if (expr_type >= PTR) {
                expr_type = expr_type - PTR;
            } else {
                Print("%d: bad dereference\n",PRINTVARS(line));
            }

            *++text = (expr_type == CHAR) ? LC : LI;
        }
        else if (token == And) {
            match(And);
            expression(Inc);
            if (*text == LC || *text == LI) {
                text --;
            } else {
                Print("%d: bad address of\n",PRINTVARS(line));
            }

            expr_type = expr_type + PTR;
        }
        else if (token == '!') {
            match('!');
            expression(Inc);

            *++text = PUSH;
            *++text = IMM;
            *++text = 0;
            *++text = EQ;

            expr_type = INT;
        }
        else if (token == '~') {
            match('~');
            expression(Inc);

            *++text = PUSH;
            *++text = IMM;
            *++text = -1;
            *++text = XOR;

            expr_type = INT;
        }
        else if (token == Add) {
            match(Add);
            expression(Inc);

            expr_type = INT;
        }
        else if (token == Sub) {
            match(Sub);

            if (token == Num) {
                *++text = IMM;
                *++text = -token_val;
                match(Num);
            } else {

                *++text = IMM;
                *++text = -1;
                *++text = PUSH;
                expression(Inc);
                *++text = MUL;
            }

            expr_type = INT;
        }
        else if (token == Inc || token == Dec) {
            tmp = token;
            match(token);
            expression(Inc);
            if (*text == LC) {
                *text = PUSH;
                *++text = LC;
            } else if (*text == LI) {
                *text = PUSH;
                *++text = LI;
            } else {
                Print("%d: bad lvalue of pre-increment\n",PRINTVARS(line));
            }
            *++text = PUSH;
            *++text = IMM;
            *++text = (expr_type > PTR) ? sizeof(long) : sizeof(char);
            *++text = (tmp == Inc) ? ADD : SUB;
            *++text = (expr_type == CHAR) ? SC : SI;
        }
        else {
            Print("%d: bad expression\n",PRINTVARS(line));
        }
    }

    {
        while (token >= level) {
            tmp = expr_type;
            if (token == Assign) {
                match(Assign);
                if (*text == LC || *text == LI) {
                    *text = PUSH;
                } else {
                    Print("%d: bad lvalue in assignment\n",PRINTVARS(line));
                }
                expression(Assign);

                expr_type = tmp;
                *++text = (expr_type == CHAR) ? SC : SI;
            }
            else if (token == Cond) {
                match(Cond);
                *++text = JZ;
                addr = ++text;
                expression(Assign);
                if (token == ':') {
                    match(':');
                } else {
                    Print("%d: missing colon in conditional\n",PRINTVARS(line));
                }
                *addr = (long)(text + 3);
                *++text = JMP;
                addr = ++text;
                expression(Cond);
                *addr = (long)(text + 1);
            }
            else if (token == Lor) {
                match(Lor);
                *++text = JNZ;
                addr = ++text;
                expression(Lan);
                *addr = (long)(text + 1);
                expr_type = INT;
            }
            else if (token == Lan) {
                match(Lan);
                *++text = JZ;
                addr = ++text;
                expression(Or);
                *addr = (long)(text + 1);
                expr_type = INT;
            }
            else if (token == Or) {
                match(Or);
                *++text = PUSH;
                expression(Xor);
                *++text = OR;
                expr_type = INT;
            }
            else if (token == Xor) {
                match(Xor);
                *++text = PUSH;
                expression(And);
                *++text = XOR;
                expr_type = INT;
            }
            else if (token == And) {
                match(And);
                *++text = PUSH;
                expression(Eq);
                *++text = AND;
                expr_type = INT;
            }
            else if (token == Eq) {
                match(Eq);
                *++text = PUSH;
                expression(Ne);
                *++text = EQ;
                expr_type = INT;
            }
            else if (token == Ne) {
                match(Ne);
                *++text = PUSH;
                expression(Lt);
                *++text = NE;
                expr_type = INT;
            }
            else if (token == Lt) {
                match(Lt);
                *++text = PUSH;
                expression(Shl);
                *++text = LT;
                expr_type = INT;
            }
            else if (token == Gt) {
                match(Gt);
                *++text = PUSH;
                expression(Shl);
                *++text = GT;
                expr_type = INT;
            }
            else if (token == Le) {
                match(Le);
                *++text = PUSH;
                expression(Shl);
                *++text = LE;
                expr_type = INT;
            }
            else if (token == Ge) {
                match(Ge);
                *++text = PUSH;
                expression(Shl);
                *++text = GE;
                expr_type = INT;
            }
            else if (token == Shl) {
                match(Shl);
                *++text = PUSH;
                expression(Add);
                *++text = SHL;
                expr_type = INT;
            }
            else if (token == Shr) {
                match(Shr);
                *++text = PUSH;
                expression(Add);
                *++text = SHR;
                expr_type = INT;
            }
            else if (token == Add) {
                match(Add);
                *++text = PUSH;
                expression(Mul);

                expr_type = tmp;
                if (expr_type > PTR) {
                    *++text = PUSH;
                    *++text = IMM;
                    *++text = sizeof(long);
                    *++text = MUL;
                }
                *++text = ADD;
            }
            else if (token == Sub) {
                match(Sub);
                *++text = PUSH;
                expression(Mul);
                if (tmp > PTR && tmp == expr_type) {
                    *++text = SUB;
                    *++text = PUSH;
                    *++text = IMM;
                    *++text = sizeof(long);
                    *++text = DIV;
                    expr_type = INT;
                } else if (tmp > PTR) {
                    *++text = PUSH;
                    *++text = IMM;
                    *++text = sizeof(long);
                    *++text = MUL;
                    *++text = SUB;
                    expr_type = tmp;
                } else {
                    *++text = SUB;
                    expr_type = tmp;
                }
            }
            else if (token == Mul) {
                match(Mul);
                *++text = PUSH;
                expression(Inc);
                *++text = MUL;
                expr_type = tmp;
            }
            else if (token == Div) {
                match(Div);
                *++text = PUSH;
                expression(Inc);
                *++text = DIV;
                expr_type = tmp;
            }
            else if (token == Mod) {
                match(Mod);
                *++text = PUSH;
                expression(Inc);
                *++text = MOD;
                expr_type = tmp;
            }
            else if (token == Inc || token == Dec) {
                if (*text == LI) {
                    *text = PUSH;
                    *++text = LI;
                }
                else if (*text == LC) {
                    *text = PUSH;
                    *++text = LC;
                }
                else {
                    Print("%d: bad value in increment\n",PRINTVARS(line));
                }

                *++text = PUSH;
                *++text = IMM;
                *++text = (expr_type > PTR) ? sizeof(long) : sizeof(char);
                *++text = (token == Inc) ? ADD : SUB;
                *++text = (expr_type == CHAR) ? SC : SI;
                *++text = PUSH;
                *++text = IMM;
                *++text = (expr_type > PTR) ? sizeof(long) : sizeof(char);
                *++text = (token == Inc) ? SUB : ADD;
                match(token);
            }
            else if (token == Brak) {
                match(Brak);
                *++text = PUSH;
                expression(Assign);
                match(']');

                if (tmp > PTR) {
                    *++text = PUSH;
                    *++text = IMM;
                    *++text = sizeof(long);
                    *++text = MUL;
                }
                else if (tmp < PTR) {
                    Print("%d: pointer type expected\n",PRINTVARS(line));
                }
                expr_type = tmp - PTR;
                *++text = ADD;
                *++text = (expr_type == CHAR) ? LC : LI;
            }
            else {
                Print("%d: compiler error, token = %d\n",PRINTVARS(line, token));
            }
        }
    }
}

void statement() {
    long *a, *b;

    if (token == If) {
        match(If);
        match('(');
        expression(Assign);
        match(')');

        *++text = JZ;
        b = ++text;

        statement();
        if (token == Else) {
            match(Else);

            *b = (long)(text + 3);
            *++text = JMP;
            b = ++text;

            statement();
        }

        *b = (long)(text + 1);
    }
    else if (token == While) {

        match(While);

        a = text + 1;

        match('(');
        expression(Assign);
        match(')');

        *++text = JZ;
        b = ++text;

        statement();

        *++text = JMP;
        *++text = (long)a;
        *b = (long)(text + 1);
    }
    else if (token == '{') {
        match('{');

        while (token != '}') {
            statement();
        }

        match('}');
    }
    else if (token == Return) {
        match(Return);

        if (token != ';') {
            expression(Assign);
        }

        match(';');

        *++text = LEV;
    }
    else if (token == ';') {
        match(';');
    }
    else {
        expression(Assign);
        match(';');
    }
}

void enum_declaration() {
    long i;
    i = 0;
    while (token != '}') {
        if (token != Id) {
            Print("%d: bad enum identifier %d\n",PRINTVARS(line, token));
        }
        next();
        if (token == Assign) {
            next();
            if (token != Num) {
                Print("%d: bad enum initializer\n",PRINTVARS(line));
            }
            i = token_val;
            next();
        }

        current_id[Class] = Num;
        current_id[Type] = INT;
        current_id[Value] = i++;

        if (token == ',') {
            next();
        }
    }
}

void function_parameter() {
    long type;
    long params;
    params = 0;
    while (token != ')') {
        type = INT;
        if (token == Int) {
            match(Int);
        } else if (token == Char) {
            type = CHAR;
            match(Char);
        }

        while (token == Mul) {
            match(Mul);
            type = type + PTR;
        }

        if (token != Id) {
            Print("%d: bad parameter declaration\n",PRINTVARS(line));
        }
        if (current_id[Class] == Loc) {
            Print("%d: duplicate parameter declaration\n",PRINTVARS(line));
        }

        match(Id);
        current_id[BClass] = current_id[Class]; current_id[Class]  = Loc;
        current_id[BType]  = current_id[Type];  current_id[Type]   = type;
        current_id[BValue] = current_id[Value]; current_id[Value]  = params++;

        if (token == ',') {
            match(',');
        }
    }
    index_of_bp = params+1;
}

void function_body() {
    long pos_local;
    long type;
    pos_local = index_of_bp;

    while (token == Int || token == Char) {
        basetype = (token == Int) ? INT : CHAR;
        match(token);

        while (token != ';') {
            type = basetype;
            while (token == Mul) {
                match(Mul);
                type = type + PTR;
            }

            if (token != Id) {
                Print("%d: bad local declaration\n",PRINTVARS(line));
            }
            if (current_id[Class] == Loc) {
                Print("%d: duplicate local declaration\n",PRINTVARS(line));
            }
            match(Id);

            current_id[BClass] = current_id[Class]; current_id[Class]  = Loc;
            current_id[BType]  = current_id[Type];  current_id[Type]   = type;
            current_id[BValue] = current_id[Value]; current_id[Value]  = ++pos_local;

            if (token == ',') {
                match(',');
            }
        }
        match(';');
    }

    *++text = ENT;
    *++text = pos_local - index_of_bp;

    while (token != '}') {
        statement();
    }

    *++text = LEV;
}

void function_declaration() {

    match('(');
    function_parameter();
    match(')');
    match('{');
    function_body();
    
    current_id = symbols;
    while (current_id[Token]) {
        if (current_id[Class] == Loc) {
            current_id[Class] = current_id[BClass];
            current_id[Type]  = current_id[BType];
            current_id[Value] = current_id[BValue];
        }
        current_id = current_id + IdSize;
    }
}

void global_declaration() {
    long type;
    basetype = INT;
    if (token == Enum) {
        match(Enum);
        if (token != '{') {
            match(Id);
        }
        if (token == '{') {
            match('{');
            enum_declaration();
            match('}');
        }

        match(';');
        return;
    }
    if (token == Int) {
        match(Int);
    }
    else if (token == Char) {
        match(Char);
        basetype = CHAR;
    }
    while (token != ';' && token != '}') {
        type = basetype;
        while (token == Mul) {
            match(Mul);
            type = type + PTR;
        }

        if (token != Id) {
            Print("%d: bad global declaration\n",PRINTVARS(line));
        }
        if (current_id[Class]) {
            Print("%d: duplicate global declaration\n",PRINTVARS(line));
        }
        match(Id);
        current_id[Type] = type;

        if (token == '(') {
            current_id[Class] = Fun;
            current_id[Value] = (long)(text + 1);
            function_declaration();
        } else {
            current_id[Class] = Glo;
            current_id[Value] = (long)data;
            data = data + sizeof(long);
        }

        if (token == ',') {
            match(',');
        }
    }
    next();
}

void program() {
    next();
    while (token > 0) {
        global_declaration();
    }
}

long eval() {
    long op, *tmp;
    cycle = 0;
    while (1) {
        cycle ++;
        op = *pc++;

        if (debug) {
            Print("%d> %.4s",PRINTVARS(cycle,
                   & "LEA ,IMM ,JMP ,CALL,JZ  ,JNZ ,ENT ,ADJ ,LEV ,LI  ,LC  ,SI  ,SC  ,PUSH,"
                   "OR  ,XOR ,AND ,EQ  ,NE  ,LT  ,GT  ,LE  ,GE  ,SHL ,SHR ,ADD ,SUB ,MUL ,DIV ,MOD ,"
                   "OPEN,READ,CLOS,PRTF,MALC,MSET,MCMP,EXIT"[op * 5]));
            if (op <= ADJ)
                Print(" %d\n",PRINTVARS(*pc));
            else
                display_print(0,0,"\n");
        }
        if (op == IMM)       {ax = *pc++;}
        else if (op == LC)   {ax = *(char *)ax;}
        else if (op == LI)   {ax = *(long *)ax;}
        else if (op == SC)   {ax = *(char *)*sp++ = ax;}
        else if (op == SI)   {*(long *)*sp++ = ax;}
        else if (op == PUSH) {*--sp = ax;}
        else if (op == JMP)  {pc = (long *)*pc;}
        else if (op == JZ)   {pc = ax ? pc + 1 : (long *)*pc;}
        else if (op == JNZ)  {pc = ax ? (long *)*pc : pc + 1;}
        else if (op == CALL) {*--sp = (long)(pc+1); pc = (long *)*pc;}
        else if (op == ENT)  {*--sp = (long)bp; bp = sp; sp = sp - *pc++;}
        else if (op == ADJ)  {sp = sp + *pc++;}
        else if (op == LEV)  {sp = bp; bp = (long *)*sp++; pc = (long *)*sp++;}
        else if (op == LEA)  {ax = (long)(bp + *pc++);}
        
        else if (op == OR)  ax = *sp++ | ax;
        else if (op == XOR) ax = *sp++ ^ ax;
        else if (op == AND) ax = *sp++ & ax;
        else if (op == EQ)  ax = *sp++ == ax;
        else if (op == NE)  ax = *sp++ != ax;
        else if (op == LT)  ax = *sp++ < ax;
        else if (op == LE)  ax = *sp++ <= ax;
        else if (op == GT)  ax = *sp++ >  ax;
        else if (op == GE)  ax = *sp++ >= ax;
        else if (op == SHL) ax = *sp++ << ax;
        else if (op == SHR) ax = *sp++ >> ax;
        else if (op == ADD) ax = *sp++ + ax;
        else if (op == SUB) ax = *sp++ - ax;
        else if (op == MUL) ax = *sp++ * ax;
        else if (op == DIV) ax = *sp++ / ax;
        else if (op == MOD) ax = *sp++ % ax;

        else if (op == EXIT) { Print("exit(%d)",PRINTVARS(*sp)); return *sp;}
        // else if (op == OPEN) { ax = open((char *)sp[1], sp[0]); }
        // else if (op == CLOS) { ax = close(*sp);}
        // else if (op == READ) { ax = read(sp[2], (char *)sp[1], *sp); }
        else if (op == PRTF) {
            tmp = sp + pc[1];
            char x[5000];
            snPrint(x,5000,(char *)tmp[-1],PRINTVARS(tmp[-2], tmp[-3], tmp[-4], tmp[-5], tmp[-6]));
            ax = strlen(x);
        }
        // else if (op == MALC) { ax = (long)malloc(*sp);}
        else if (op == MSET) { ax = (long)Memset((char *)sp[2], sp[1], *sp);}
        else if (op == MCMP) { ax = memcmp((char *)sp[2], (char *)sp[1], *sp);}
        else {
            Print("unknown instruction:%d\n",PRINTVARS(op));
        }
    }
}

int argc;
char **argv;
void my_main()
{

    long i;
    long *tmp;

    argc--;
    argv++;

    if (argc > 0 && **argv == '-' && (*argv)[1] == 's') {
        assembly = 1;
        --argc;
        ++argv;
    }
    if (argc > 0 && **argv == '-' && (*argv)[1] == 'd') {
        debug = 1;
        --argc;
        ++argv;
    }
    if (argc < 1) {
        display_print(0,0,"usage: xc [-s] [-d] file ...\n");
    }

    mopen(mhello, "r");

    poolsize = 256 * 1024; // arbitrary size
    line = 1;

    // allocate memory
    if (!(text = memmgr_alloc(poolsize))) {
        Print("could not malloc(%d) for text area\n",PRINTVARS(poolsize));
    }
    if (!(data = memmgr_alloc(poolsize))) {
        Print("could not malloc(%d) for data area\n",PRINTVARS(poolsize));
    }
    if (!(stack = memmgr_alloc(poolsize))) {
        Print("could not malloc(%d) for stack area\n",PRINTVARS(poolsize));
    }
    if (!(symbols = memmgr_alloc(poolsize))) {
        Print("could not malloc(%d) for symbol area\n",PRINTVARS(poolsize));
    }

    Memset(text, 0, poolsize);
    Memset(data, 0, poolsize);
    Memset(stack, 0, poolsize);
    Memset(symbols, 0, poolsize);

    old_text = text;

    src = "char else enum if int return sizeof while "
          "open read close printf malloc Memset memcmp exit void main";

    i = Char;
    while (i <= While) {
        next();
        current_id[Token] = i++;
    }

    i = OPEN;
    while (i <= EXIT) {
        next();
        current_id[Class] = Sys;
        current_id[Type] = INT;
        current_id[Value] = i++;
    }

    next(); current_id[Token] = Char;
    next(); idmain = current_id;

    if (!(src = old_src = memmgr_alloc(poolsize))) {
        Print("could not malloc(%d) for source area\n",PRINTVARS(poolsize));
    }
    if ((i = mread(src, poolsize-1, mhello)) <= 0) {
        Print("read() returned %d\n",PRINTVARS(i));
        return;
    }
    src[i] = 0;
    mhello->rdptr = 0;

    program();

    if (!(pc = (long *)idmain[Value])) {
        display_print(0,0,"main() not defined\n");
        return;
    }
    if (assembly) {
        return;
    }
    sp = (long *)((long)stack + poolsize);
    *--sp = EXIT;
    *--sp = PUSH; tmp = sp;
    *--sp = argc;
    *--sp = (long)argv;
    *--sp = (long)tmp;

    (void)eval();

    return;
}