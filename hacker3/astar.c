// An implementation of the A* search algorithm
#include <stdlib.h>
#include "astar.h"

// Implementation of the function which calculates the heuristic
int
heuristic(int start_row, int start_column, int end_row, int end_column)
{
	return abs(start_row - end_row) + abs(start_column - end_column);
}


// Implementation of A* search
// Returns a pointer to a path_node at the head of a linked list representing the path found
path_node *
search(int start_row, int start_column, int end_row, int end_column, int closed[])
{
	list_node *open_list_head = NULL;
	node *current = NULL;
	
	node start;
	start.g_value = 0;
	start.f_value = start.g_value + heuristic(start_row, start_column, end_row, end_column);
	start.row = start_row;
	start.column = start_column;
	start.parent = NULL;
	
	list_node open_list;
	open_list.value = board[row][column];
	open_list.next = NULL;

	open_list_head = &start;

	while(open_list_head != NULL)
	{
		current = open_list_head;
		



	}

}


// Implementation of a linked list insertion function
bool
insert_node(list_node *head_node, int f_value)
{
	list_node *current_node = NULL;
	list_node *next_node = NULL;

	current_node = head_node;

	while(current_node->next != NULL)
	{
		next_node = current_node->next;
		if(f_value <= current_node->value)
		{
			list_node to_insert;
			to_insert.value = f_value;
			to_insert.next = current_node;
			head_node = &to_insert;
			return true;
		}
		if(f_value <= next_node->value)
		{
			list_node to_insert;
			to_insert.value = f_value;
			to_insert.next = next_node;
			head_node = &to_insert;
			return true;
		}
	}
	
	list_node to_insert;
	to_insert.value = f_value;
	to_insert.next = NULL;
	current_node->next = &to_insert;
	return true;

}
