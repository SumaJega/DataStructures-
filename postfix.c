#include<stdio.h>
#include<stdlib.h>
#include"Postfix.h"
int main()
{
 char ch,ab[20];
 int a1,b,i=1;
 printf("Enter the postfix expression");
 scanf("%s",ab);
 ch=ab[0];
 while(ch!='\0')
 {
   if(isdigit(ch))
   {
    push(ch-'0');
   }
   else
   {
    a1=pop();
    b=pop();
  
	   if(ch=='+')
	  {
	   push(a1+b);
	  }
	  else if (ch=='-')
	  {
	   push(a1-b);
	  }
	  else if (ch=='*')
	  {
	   push(a1*b);
	  }
	  else if (ch=='/')
	  {
	   push(a1/b);
	  }
	  else
	  {
	   printf("Please enter the basic arithmatic operation only!!!");
	  }
    }

ch=ab[i++];
}
printf("Answer is %d ",a[top]);
return 0;
}
