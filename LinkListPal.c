/* C Program to Check whether a Singly Linked List is a Palindrome */
#include<stdio.h>
#include<string.h>
#include "LinkListPal.h"
#include "myprofile.h"
int main()
{

	documentation(__FILE__);
	int i,flag=0,res=0;
	char x[50];
	printf("Enter the String");
	scanf("%s",x);
	for(i=0;i<=strlen(x);i++)
	{
		push(x[i]);
	}
	for(i=0;i<=strlen(x)/2;i++)
	{
		res=pop();
		if(x[i]==res)
		{
			flag=1;
			break;
		}
	}
	if(flag!=1)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not a palindrome\n");
	}
	return 0;
}
