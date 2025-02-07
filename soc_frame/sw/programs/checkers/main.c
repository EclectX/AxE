#include "util.h"
#include "memmgr.h"
#include "consttypes.h"
#include "functions.h"

#include "test0-txt.h"
MFILE __infile = {
  "test0.txt",
  __test0_sz,
  __test0,
  0
};
MFILE *infile = &__infile;

void
my_main(int argc, char *argv[])
{
  mopen(infile, "r");

  board_t* board = (board_t*)memmgr_alloc(sizeof(board_t));

  fill_print_initial(board);
  print_board(board);
    
  int black_action = 1, action = 1, error;
  char col1, row1, col2, row2; 
	
	char buf[64];
  	mgets(buf, 64, infile);
	while (Sscanf(buf, "%c%c-%c%c\n",SCANVARS(&col1, &row1, &col2, &row2))==4) {
		error = check_move_error_1_to_5(*board, col1, row1, col2, row2, 
			black_action);
		if (error) {
			print_error_message(error);
		}
		static valid_moves_t valid_moves;
		int num_possibles = all_possible_moves(*board, col1, row1, valid_moves, 
			black_action);
		int illegal = 1;
		for (int i=0;i<num_possibles;i++) {
			if ((valid_moves[i][0] == col2) && (valid_moves[i][1] == row2)) {
				illegal = 0;
			}
		}
		if (illegal) {
			print_error_message(6);
		}
		
		change_board(board, col1, row1, col2, row2);
		
		print_move_information(0, black_action, *board, col1, row1, col2, row2, 
			action);
		
		print_board(board);
		
		black_action = !black_action;
		action += 1;
    
    mgets(buf, 64, infile);
	}
	
	char next_action = col1;

	int repititions=0; 
	if (next_action == 'A') {
		repititions = 1;
	}
	if (next_action == 'P') {
		repititions = 100;
	}
			
	for (int i=0; i<repititions; i++) {
		tree_node_t* level_0_node = (tree_node_t*)memmgr_alloc(sizeof(tree_node_t));
		level_0_node->depth = 0;
		for (int i=0; i<BOARD_SIZE;i++) {
			for (int j=0; j<BOARD_SIZE; j++) {
				display_print(0,0,"moz");
				(level_0_node->board_state)[i][j] = (*board)[i][j];
			}
		}
		level_0_node->black_action = black_action;
		level_0_node->children_count = 0;
		level_0_node->children_list = initial_children;
		
		generate_tree_depth_3(level_0_node);
		if (level_0_node->children_count == 0) {
			if (black_action) {
				Print("%s WIN!\n",PRINTVARS(WHITE));
				free_tree(level_0_node);
				memmgr_free(board);
				return;
			}
			else {
				Print("%s WIN!\n",PRINTVARS(BLACK));
				free_tree(level_0_node);
				memmgr_free(board);
				return;
			}
		}
		
		int best_score = move_score_forced(level_0_node);
		linked_list_member_t* list_member = (level_0_node->children_list).first;
		tree_node_t* choice_node = NULL;
		for (int i=0; i<(level_0_node->children_count); i++) {
			choice_node = (tree_node_t*)(list_member->child_node);
			if (move_score_forced(choice_node) == best_score) {
				break;
			}
			list_member = list_member->next;
		}
		change_board(board, 
			(choice_node->move_info)[0][0], 
			(choice_node->move_info)[0][1],
			(choice_node->move_info)[1][0],
			(choice_node->move_info)[1][1]);
		print_move_information(1, black_action, *board, 
			(choice_node->move_info)[0][0], 
			(choice_node->move_info)[0][1], 
			(choice_node->move_info)[1][0], 
			(choice_node->move_info)[1][1], 
			action);
		print_board(board);
		
		black_action = !black_action;
		action += 1;
		
		free_tree(level_0_node);
	}
}