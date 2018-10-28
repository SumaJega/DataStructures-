#include "LinkList.h"
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
