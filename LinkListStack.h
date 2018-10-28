#include<stdio.h>
#include "LinkList.h"

void displayStack()
{
	display();
}
void push(int x)
{
	insert_at_first(x);	
}
int pop()
{
	int deletedItem;
	deletedItem=delete_at_first();
	return deletedItem;
}
