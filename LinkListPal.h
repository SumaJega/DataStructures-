#include<stdio.h>
#include "LinkListChar.h"
void push(int x)
{ 
	insert_at_first(x);	
}
char pop()
{	char deletedItem;
	deletedItem=delete_at_first();
	return deletedItem;
}
