#include<stdio.h>
#include<stdlib.h>      /* for exit() */
#include<ctype.h>     /* for isdigit(char ) */
#include<string.h>
#include "InfixLinkList.h"
#define SIZE 100
/* declared here as global variable because stack[]
* is used by more than one fucntions */
char stack[SIZE];
int top = -1;
/* main function begins */
int main()
{
	char infix[SIZE], postfix[SIZE];         /* declare infix string and postfix string */

	printf("\nEnter Infix expression : ");
	gets(infix);

	InfixToPostfix(infix,postfix);                   /* call to convert */
	printf("Postfix Expression: ");
	puts(postfix);                     /* print postfix expression */

	return 0;
}