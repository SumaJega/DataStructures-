#include <stdio.h>
 
int josephus(int n, int k,int *arr)
{
	int i;
  if (n == 1)
    return 1;
  else
	return (josephus(n - 1, k,arr) + k-1) % n + 1; 
/* The position returned by josephus(n - 1, k) is adjusted because the recursive call josephus(n-1,k) considers the original position  k%n + 1 as position 1 */
}
 
// Driver Program to test above function
int main()
{
	int n,k,i;
	int arr[10];
	printf("No. of Persons:");
	scanf("%d",&n);
	printf("Enter the persons:");
	for(i=0;i<n;i++)
		{scanf("%d",&arr[i]);}
	printf("Count:");
	scanf("%d",&k);  
	printf("The chosen place is %d", josephus(n, k,arr));
	printf("\nElement:%d",arr[((josephus(n - 1, k,arr) + k-1) % n + 1)-1]);
	return 0;
}
