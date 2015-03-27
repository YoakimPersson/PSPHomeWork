#include<stdio.h>
#include<stdlib.h>

/*
* Program takes single argument, which is the name of the file
*/

typedef struct node{
	int x;
	struct node *next;
}node;

typedef struct LinkedList{
	node *root;
}LinkedList;

int count(FILE *fpt, LinkedList *list);

int main(int argv, char* argc[])
{	
	FILE *fpt;
	int n;
	LinkedList *linkedList = NULL;		
	linkedList->root = NULL;	

	if(argv != 2)
	{
		printf("Incorrect number of arguments!\nProgram requires the name of the file\n");
		return -1;
	}	
	
	fpt = fopen(argc[1], "r");
	if(fpt == NULL)
	{
		printf("File cannot be opened");
		return -1;
	}

	n = count(fpt, linkedList);
	
	return 0;
}
	
int count(FILE *fpt, LinkedList *list)
{
	int n = 0;
	list->root = (node*)malloc(sizeof(node*));
	node *current = list->root;
	

	while	
	
	return n;
}
