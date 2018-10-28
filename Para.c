#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Para.h"
int main()
{
 char x[10];
 int i;
 printf("Enter the exppression");
 scanf("%s",x);
 for(i=0;i<=strlen(x);i++)
 {
  if (x[i]=='(')
  {
   push('(');
  }
  else if(x[i]==')')
  {
   pop();
  }
 }
 if((top==-1)&&(x[i]=='\0'))
 {
  printf("BAlanced paranthesis");
 }
 else 
 {
   printf("Not a balanced paranthesis");
 }

return 0;
}
