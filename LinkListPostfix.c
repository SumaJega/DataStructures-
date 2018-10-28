#include<stdio.h>
#include"myprofile.h"
#include"LinkListPostfix.h"
int main()
{
 documentation(__FILE__);
 char ch,ab[20];
 int a1,b,i=1;
 printf("Enter the postfix expression:");
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
	   push(a1%b);
	  }
    }

ch=ab[i++];
}
printf("Evaluated Result is %d \n",header->data);
return 0;
}

