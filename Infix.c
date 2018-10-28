#include<stdio.h>
#include<stdlib.h>      
#include<ctype.h>    
#include<string.h>
#include"Infix.h"
#include "myprofile.h"
#define SIZE 100
int main()
{
	documentation(__FILE__);
	char infix[SIZE], postfix[SIZE];         
	printf("\nEnter Infix expression : ");
	gets(infix);
	InfixToPostfix(infix,postfix);                 
	printf("Postfix Expression: ");
	puts(postfix);                   
	return 0;
}


