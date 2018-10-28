int top=-1,n;
int a[50] ;
void push(int x)
{
 top=top+1;
 a[top]=x;
}
int pop()
{
 return a[top--];
}


