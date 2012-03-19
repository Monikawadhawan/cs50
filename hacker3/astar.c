// An implementation of the A* search algorithm with an eye towards the game of 15


// Define a node struct to represent each square on the game board
typedef struct
{
	int value;
	struct node *up;
	struct node *down;
	struct node *left;
	struct node *right;
} node;


// A function that represents the current board as a linked list

