#include "util.h"
#include "memmgr.h"
#include "consttypes.h"
#include "functions.h"

void fill_print_initial(board_t* board) {
	Print("BOARD SIZE: %dx%d\n",PRINTVARS(BOARD_SIZE, BOARD_SIZE));
	Print("#BLACK PIECES: %d\n",PRINTVARS(ORIGINAL_PIECES_COUNT));
	Print("#WHITE PIECES: %d\n",PRINTVARS(ORIGINAL_PIECES_COUNT));
	
	for (int i=0; i<BOARD_SIZE; i++) {
		for (int j=0; j<BOARD_SIZE; j++) {
			int filled = 0; 
			for (int k=0; k<ORIGINAL_PIECES_COUNT; k++) {
				if ((char_to_col(white_initial_squares[k][0]) == i + 1) && 
					(char_to_row(white_initial_squares[k][1]) == j + 1)) {
						(*board)[i][j] = CELL_WPIECE;
						filled = 1;
				}
			}
			
			for (int k=0; k<ORIGINAL_PIECES_COUNT; k++) {
				if ((char_to_col(black_initial_squares[k][0]) == i + 1) && 
					(char_to_row(black_initial_squares[k][1]) == j + 1)) {
						(*board)[i][j] = CELL_BPIECE;
						filled = 1;
				}
			}
			
			if (filled == 0) {
				(*board)[i][j] = '0';
			}
		}
	}
}

int char_to_col(char col) { 
	int ascii_value = (int) col;
	return ascii_value - ASCII_A + 1;}
int char_to_row(char row) { 
	int ascii_value = (int) row;
	return ascii_value - ASCII_1 + 1;}
char col_to_char(int col) {return (char) (ASCII_A + col - 1);}
char row_to_char(int row) {return (char) (ASCII_1 + row - 1);}

void print_board(board_t* board_input) {
	display_print(0,0,"     A   B   C   D   E   F   G   H"); 
	for (int j=0; j<BOARD_SIZE; j++) {//row
		for (int i=0; i<BOARD_SIZE; i++) {//column
			if (i==0) { 
				display_print(0,0,"\n   +---+---+---+---+---+---+---+---+\n");
				Print(" %d |",PRINTVARS(j + 1));
			}
			if ((*board_input)[i][j] == CELL_EMPTY) {
				display_print(0,0," . |");
			}
			else {
				Print(" %c |",PRINTVARS((*board_input)[i][j]));
			}
		}
	}
	display_print(0,0,"\n   +---+---+---+---+---+---+---+---+\n");
}

int check_move_error_1_to_5(board_t board_input, 
	char col1, char row1, char col2, char row2, int black_action) {
	if (outside_of_board(col1, row1)) {
		return 1;
	}
	if (outside_of_board(col2, row2)) {
		return 2;
	}
	if (piece_at_location(board_input, col1, row1) == CELL_EMPTY) {
		return 3;
	}
	if (piece_at_location(board_input, col2, row2) != CELL_EMPTY) {
		return 4;
	}
	if (black_action) {
		if ((piece_at_location(board_input, col1, row1) == CELL_WPIECE)
			|| 
		(piece_at_location(board_input, col1, row1) == CELL_WTOWER)) {
			return 5;
		}
	}
	else {
		if ((piece_at_location(board_input, col1, row1) == CELL_BPIECE)
			|| 
		(piece_at_location(board_input, col1, row1) == CELL_BTOWER)) {
			return 5;
		}
	}
	return NO_ERRORS_1_TO_5;
}

int outside_of_board(char col, char row) {
	if ((char_to_col(col) < 1) || (char_to_col(col) > BOARD_SIZE) 
		|| (char_to_row(row) < 1) || (char_to_row(row) > BOARD_SIZE)) {
		return 1;
	}
	else {
		return 0;
	}
}

char piece_at_location(board_t board_input, char col, char row) {
	return board_input[char_to_col(col) - 1][char_to_row(row) - 1];
}

void change_board(board_t* board, char col1, char row1, char col2, char row2) {
	char being_moved_temp = piece_at_location(*board, col1, row1);
	
	(*board)[char_to_col(col1) - 1][char_to_row(row1) - 1] = CELL_EMPTY;
	
	if ((being_moved_temp == CELL_BPIECE) && (row2 == END_ROW_BLACK)) {
		(*board)[char_to_col(col2) - 1][char_to_row(row2) - 1]
			= CELL_BTOWER;
	}
	else if ((being_moved_temp == CELL_WPIECE) && (row2 == END_ROW_WHITE)) {
		(*board)[char_to_col(col2) - 1][char_to_row(row2) - 1]
			= CELL_WTOWER;
	}
	else {
		(*board)[char_to_col(col2) - 1][char_to_row(row2) - 1] 
			= being_moved_temp;
	}
	if (abs(char_to_col(col2) - char_to_col(col1)) == CAPTURE_JUMP) {
		int middle_col = min(char_to_col(col1), char_to_col(col2)) + 1;
		int middle_row = min(char_to_row(row1), char_to_row(row2)) + 1;
		(*board)[middle_col - 1][middle_row - 1] = CELL_EMPTY;
	}
}

int all_possible_moves(board_t board_input, char col, char row, 
	valid_moves_t valid_moves, int black_action) {
	int num_possibles = 0, is_tower = 0;
	if ((piece_at_location(board_input, col, row) == CELL_BTOWER)
		|| (piece_at_location(board_input, col, row) == CELL_WTOWER)) {
		is_tower = 1;
	}
	
	if (is_tower) {
		for (int i=0; i<NUM_TOWER_MOVEMENTS; i++) {
			int possible_col1, possible_row1;
			possible_col1 = char_to_col(col) + tower_movements[i][0];
			possible_row1 = char_to_row(row) + tower_movements[i][1];
			char p_col1, p_row1;
			p_col1 = col_to_char(possible_col1);
			p_row1 = row_to_char(possible_row1);
			
			int error_check = check_move_error_1_to_5(board_input, 
				col, row, p_col1, p_row1, black_action);
			
			if (error_check == NO_ERRORS_1_TO_5) {
				valid_moves[num_possibles][0] = p_col1;
				valid_moves[num_possibles][1] = p_row1;
				num_possibles += 1;
			}
			int capture_possible = 0;
			if (error_check == 4) {
				if (black_action) {
					if ((piece_at_location(board_input, p_col1, p_row1) 
						== CELL_WPIECE)
						|| 
					(piece_at_location(board_input, p_col1, p_row1) 
						== CELL_WTOWER)) {
						capture_possible = 1;
					}
				}
				else {
					if ((piece_at_location(board_input, p_col1, p_row1) 
						== CELL_BPIECE)
						|| 
					(piece_at_location(board_input, p_col1, p_row1) 
						== CELL_BTOWER)) {
						capture_possible = 1;
					}
				}
			}
			if (capture_possible) {
				int possible_col2, possible_row2;
				possible_col2 = char_to_col(col) + 
					(CAPTURE_JUMP * tower_movements[i][0]);
				possible_row2 = char_to_row(row) + 
					(CAPTURE_JUMP * tower_movements[i][1]);
				char p_col2, p_row2;
				p_col2 = col_to_char(possible_col2);
				p_row2 = row_to_char(possible_row2);
				
				int error_check_2 = check_move_error_1_to_5(board_input, 
					col, row, p_col2, p_row2, black_action);
				
				if (error_check_2 == NO_ERRORS_1_TO_5) {
					valid_moves[num_possibles][0] = p_col2;
					valid_moves[num_possibles][1] = p_row2;
					num_possibles += 1;
				}
			}
		}
	}
	
	if (piece_at_location(board_input, col, row) == CELL_BPIECE) {
		for (int i=0; i<NUM_PIECE_MOVEMENTS; i++) {
			int possible_col1, possible_row1;
			possible_col1 = char_to_col(col) + black_piece_movements[i][0];
			possible_row1 = char_to_row(row) + black_piece_movements[i][1];
			char p_col1, p_row1;
			p_col1 = col_to_char(possible_col1);
			p_row1 = row_to_char(possible_row1);
			
			int error_check = check_move_error_1_to_5(board_input, 
				col, row, p_col1, p_row1, black_action);
			
			if (error_check == NO_ERRORS_1_TO_5) {
				valid_moves[num_possibles][0] = p_col1;
				valid_moves[num_possibles][1] = p_row1;
				num_possibles += 1;
			}
			
			int capture_possible = 0;
			if (error_check == 4) {
				if (black_action) {
					if ((piece_at_location(board_input, p_col1, p_row1) 
						== CELL_WPIECE)
						|| 
					(piece_at_location(board_input, p_col1, p_row1) 
						== CELL_WTOWER)) {
						capture_possible = 1;
					}
				}
				else {
					if ((piece_at_location(board_input, p_col1, p_row1) 
						== CELL_BPIECE)
						|| 
					(piece_at_location(board_input, p_col1, p_row1) 
						== CELL_BTOWER)) {
						capture_possible = 1;
					}
				}
			}
			if (capture_possible) {
				int possible_col2, possible_row2;
				possible_col2 = char_to_col(col) + 
					(CAPTURE_JUMP * black_piece_movements[i][0]);
				possible_row2 = char_to_row(row) + 
					(CAPTURE_JUMP * black_piece_movements[i][1]);
				char p_col2, p_row2;
				p_col2 = col_to_char(possible_col2);
				p_row2 = row_to_char(possible_row2);
				
				int error_check_2 = check_move_error_1_to_5(board_input, 
					col, row, p_col2, p_row2, black_action);
				
				if (error_check_2 == NO_ERRORS_1_TO_5) {
					valid_moves[num_possibles][0] = p_col2;
					valid_moves[num_possibles][1] = p_row2;
					num_possibles += 1;
				}
			}
		}
	}
	
	if (piece_at_location(board_input, col, row) == CELL_WPIECE) {
		for (int i=0; i<NUM_PIECE_MOVEMENTS; i++) {
			int possible_col1, possible_row1;
			possible_col1 = char_to_col(col) + white_piece_movements[i][0];
			possible_row1 = char_to_row(row) + white_piece_movements[i][1];
			char p_col1, p_row1;
			p_col1 = col_to_char(possible_col1);
			p_row1 = row_to_char(possible_row1);
			
			int error_check = check_move_error_1_to_5(board_input, 
				col, row, p_col1, p_row1, black_action);
			
			if (error_check == NO_ERRORS_1_TO_5) {
				valid_moves[num_possibles][0] = p_col1;
				valid_moves[num_possibles][1] = p_row1;
				num_possibles += 1;
			}
			
			int capture_possible = 0;
			if (error_check == 4) {
				if (black_action) {
					if ((piece_at_location(board_input, p_col1, p_row1) 
						== CELL_WPIECE)
						|| 
					(piece_at_location(board_input, p_col1, p_row1) 
						== CELL_WTOWER)) {
						capture_possible = 1;
					}
				}
				else {
					if ((piece_at_location(board_input, p_col1, p_row1) 
						== CELL_BPIECE)
						|| 
					(piece_at_location(board_input, p_col1, p_row1) 
						== CELL_BTOWER)) {
						capture_possible = 1;
					}
				}
			}
			if (capture_possible) {
				int possible_col2, possible_row2;
				possible_col2 = char_to_col(col) + 
					(CAPTURE_JUMP * white_piece_movements[i][0]);
				possible_row2 = char_to_row(row) + 
					(CAPTURE_JUMP * white_piece_movements[i][1]);
				char p_col2, p_row2;
				p_col2 = col_to_char(possible_col2);
				p_row2 = row_to_char(possible_row2);
				
				int error_check_2 = check_move_error_1_to_5(board_input, 
					col, row, p_col2, p_row2, black_action);
				
				if (error_check_2 == NO_ERRORS_1_TO_5) {
					valid_moves[num_possibles][0] = p_col2;
					valid_moves[num_possibles][1] = p_row2;
					num_possibles += 1;
				}
			}
		}
	}
	
	return num_possibles;
}

int min(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

void print_error_message(int error_code) {
	if (error_code == 1) {
		display_print(0,0,"ERROR: Source cell is outside of the board.\n");
	}
	if (error_code == 2) {
		display_print(0,0,"ERROR: Target cell is outside of the board.\n");
	}
	if (error_code == 3) {
		display_print(0,0,"ERROR: Source cell is emtpy.\n");
	}
	if (error_code == 4) {
		display_print(0,0,"ERROR: Target cell is not empty.\n");
	}
	if (error_code == 5) {
		display_print(0,0,"ERROR: Source cell holds opponent's piece/tower.\n");
	}
	if (error_code == 6) {
		display_print(0,0,"ERROR: Illegal action.\n");
	}
}

int board_cost(board_t board_input) {
	int b_count=0, B_count=0, w_count=0, W_count=0;
	for (int i=0; i<BOARD_SIZE;i++) {
		for (int j=0; j<BOARD_SIZE; j++) {
			if (board_input[i][j] == CELL_BPIECE) {
				b_count += 1;
			}
			if (board_input[i][j] == CELL_BTOWER) {
				B_count += 1;
			}
			if (board_input[i][j] == CELL_WPIECE) {
				w_count += 1;
			}
			if (board_input[i][j] == CELL_WTOWER) {
				W_count += 1;
			}
		}
	}
	int cost = b_count + (3 * B_count) - w_count - (3 * W_count);
	return cost;
}

void print_move_information(int generated_move, int black_action, 
	board_t board_input, int col1, int row1, int col2, int row2, int action) {
	display_print(0,0,"=====================================\n");
	if (generated_move) {
		display_print(0,0,"*** ");
	}
	if (black_action) {
		Print("%s ACTION #%d: %c%c-%c%c\n", 
			PRINTVARS(BLACK, action, col1, row1, col2, row2));
	}
	else {
		Print("%s ACTION #%d: %c%c-%c%c\n", 
			PRINTVARS(WHITE, action, col1, row1, col2, row2));
	}
	Print("BOARD COST: %d\n",PRINTVARS(board_cost(board_input)));
}

void generate_node_children(tree_node_t* node, int depth) {
	int generated_children = 0;
	for (int j=0; j<BOARD_SIZE;j++) {
		for (int i=0; i<BOARD_SIZE; i++) {
			char checker = (node->board_state)[i][j];
			if (movable_checker(node->black_action, checker)) {
				static valid_moves_t valid_moves; 
				char col = col_to_char(i+1);
				char row = row_to_char(j+1);
				int num_possibles = all_possible_moves((node->board_state), 
					col, row, valid_moves, (node->black_action));
				for (int k=0; k<num_possibles; k++) {
					char col1 = col;
					char row1 = row;
					char col2 = valid_moves[k][0];
					char row2 = valid_moves[k][1];
					
					link_new_node(node, col1, row1, col2, row2, depth);
					generated_children += 1;
				}
			}
		}
	}
	node->children_count = generated_children;
}

int movable_checker(int black_action, char checker) {
	if ((black_action) && ((checker == CELL_BPIECE) || 
			(checker == CELL_BTOWER))) {
		return 1;
	}
	else if ((!black_action) && ((checker == CELL_WPIECE) || 
			(checker == CELL_WTOWER))) {
		return 1;
	}
	else {
		return 0;
	}
}

void link_new_node(tree_node_t* parent_node,
	char col1, char row1, char col2, char row2, int depth) {
	tree_node_t* new_node = (tree_node_t*)memmgr_alloc(sizeof(tree_node_t));
	new_node->depth = depth;
	for (int i=0; i<BOARD_SIZE; i++) {
		for (int j=0; j<BOARD_SIZE; j++) {
			(new_node->board_state)[i][j] = (parent_node->board_state)[i][j];
		}
	}
	change_board((board_t*)(&(new_node->board_state)), col1, row1, col2, row2);
	
	new_node->move_info[0][0] = col1;
	new_node->move_info[0][1] = row1;
	new_node->move_info[1][0] = col2;
	new_node->move_info[1][1] = row2;
	new_node->black_action = !(parent_node->black_action);
	new_node->children_list = initial_children;
	new_node->children_count = 0;
	linked_list_member_t* new_list_member
		= (linked_list_member_t*)memmgr_alloc(sizeof(linked_list_member_t));
	new_list_member->child_node = (void*)new_node;
	new_list_member->next = NULL;
	if ((parent_node->children_list).first == NULL) {
		(parent_node->children_list).first = new_list_member;
	}
	
	if ((parent_node->children_list).last == NULL) {
		(parent_node->children_list).last = new_list_member;
	}
	else {
		((parent_node->children_list).last)->next = new_list_member;
		(parent_node->children_list).last = new_list_member;
	}
}

void generate_tree_depth_3(tree_node_t* level_0_node) {
	generate_node_children(level_0_node, 1);
	
	linked_list_member_t* list_member_1 = (level_0_node->children_list).first;
	tree_node_t* level_1_node;
	for (int i=0; i<(level_0_node->children_count); i++) {
		level_1_node = (tree_node_t*)(list_member_1->child_node);
		generate_node_children(level_1_node, 2);
		
		linked_list_member_t* list_member_2 
			= (level_1_node->children_list).first;
		tree_node_t* level_2_node;
		for (int j=0; j<(level_1_node->children_count); j++) {
			level_2_node = (tree_node_t*)(list_member_2->child_node);
			generate_node_children(level_2_node, 3);
			list_member_2 = list_member_2->next;
		}
		
		list_member_1 = list_member_1->next;
	}
}
#define INT_MAX  0x7fffffff
#define INT_MIN  0x80000000
int move_score_forced(tree_node_t* node) {
	if (node->children_count == 0) {
		if (node->depth != 3) {
			if (node->black_action) {
				return INT_MIN;
			}
			else {
				return INT_MAX;
			}
		}
		
		int leaf_cost = board_cost(node->board_state);
		return leaf_cost;
	}
	
	else {
		int max_score = INT_MIN, min_score = INT_MAX;
		linked_list_member_t* list_member = (node->children_list).first;
		tree_node_t* child_node;
		for (int i=0; i<(node->children_count); i++) {
			child_node = (tree_node_t*)(list_member->child_node);
			int child_score = move_score_forced(child_node);
			if (child_score > max_score) {
				max_score = child_score;
			}
			if (child_score < min_score) {
				min_score = child_score;
			}
			list_member = list_member->next;
		}
		
		if (node->black_action) {
			return max_score;
		}
		else {
			return min_score;
		}
	}
}

void free_tree(tree_node_t* node) {
	if (node->children_count == 0) {
		memmgr_free(node);
	}
	else {
		linked_list_member_t* list_member = (node->children_list).first;
		tree_node_t* child_node;
		for (int i=0; i<(node->children_count); i++) {
			child_node = (tree_node_t*)(list_member->child_node);
			free_tree(child_node);
			
			linked_list_member_t* redundant_list_member = list_member;
			list_member = list_member->next;
			memmgr_free(redundant_list_member);
		}
	}
}
