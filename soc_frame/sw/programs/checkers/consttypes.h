#include "util.h"

#ifndef CONSTTYPES_h
#define CONSTTYPES_h

#define BOARD_SIZE          8       // board size
#define ROWS_WITH_PIECES    3       // number of initial rows with pieces
#define CELL_BPIECE         'b'     // black piece character
#define CELL_WPIECE         'w'     // white piece character
#define CELL_BTOWER         'B'     // black tower character
#define CELL_WTOWER         'W'     // white tower character
#define COST_PIECE          1       // one piece cost
#define COST_TOWER          3       // one tower cost
#define TREE_DEPTH          3       // minimax tree depth
#define COMP_ACTIONS        10      // number of computed actions

typedef unsigned char board_t[BOARD_SIZE][BOARD_SIZE];

#define CELL_EMPTY               '0'
#define END_ROW_BLACK            '1'
#define END_ROW_WHITE            '8'
#define CAPTURE_JUMP             2
#define ORIGINAL_PIECES_COUNT    12 
#define BOARD_DIMENSION          2 
#define MOVE_INFO                2 
#define ASCII_A                  65 // ascii value of 'A'
#define ASCII_1                  49 // ascii value of '1'
#define NO_ERRORS_1_TO_5         0
#define MAXIMUM_POSSIBLE_MOVES   4 // maximum possible moves for each piece/tower
#define NUM_PIECE_MOVEMENTS      2 // each piece can move two directions at most
#define NUM_TOWER_MOVEMENTS      4 // each tower can move four directions at most 

typedef char square_t[BOARD_DIMENSION];
typedef square_t valid_moves_t[MAXIMUM_POSSIBLE_MOVES];
typedef int movement_t[BOARD_DIMENSION];
typedef square_t move_info_t[MOVE_INFO];

typedef struct tree_node tree_node_t;
typedef struct linked_list linked_list_t;
typedef struct linked_list_member linked_list_member_t;

struct linked_list_member {
	void* child_node;
	linked_list_member_t* next;
};
struct linked_list {
	linked_list_member_t* first; 
	linked_list_member_t* last;
};
struct tree_node {
	int depth;
	move_info_t move_info;
	board_t board_state;
	int black_action;
	int children_count;
	linked_list_t children_list;
};

extern square_t white_initial_squares[ORIGINAL_PIECES_COUNT];
extern square_t black_initial_squares[ORIGINAL_PIECES_COUNT];
extern char BLACK[];
extern char WHITE[];
extern movement_t black_piece_movements[NUM_PIECE_MOVEMENTS];
extern movement_t white_piece_movements[NUM_PIECE_MOVEMENTS];
extern movement_t tower_movements[NUM_TOWER_MOVEMENTS];
extern linked_list_t initial_children;

#endif
