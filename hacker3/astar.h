#ifndef _ASTAR_H
#define _ASTAR_H
#include <cs50.h>

// Define a struct to represent nodes along the search
typedef struct
{
	int g_value;
	int f_value;
	int row;
	int column;
	struct node *parent;
} node;

// Define a struct to represent nodes in the path list
typedef struct
{
	int value;
	struct list_node *next; 
} list_node;

// Calculates the heuristic value needed using 1-norm
int heuristic(int start_row, int start_column, int end_row, int end_column);

// Function that finds the A* path and returns a pointer to the head
// of a linked list that stores the actual path found
list_node *search(int start_row, int start_column, int end_row, int end_column, int closed[]);

// Function to insert nodes into the open list (ordered by f_value)
bool insert_node(list_node *head_node, int f_value);


#endif
