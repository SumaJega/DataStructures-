#include<stdio.h>
#include "LinkList.h"
int x,deletedItem;
void displayQueue()
{
	display();
}
void insert(int x)
{
	insert_at_last(x);	
}
int deletee()
{
	int deletedItem;
	deletedItem=delete_at_first();
	return deletedItem;
}
