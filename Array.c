#include<stdio.h>
int main()
{
	int array[7],sum=0,i;
	float average=0;
	printf("Enter Seven Integers:");
	for(i=0;i<7;i++)
	{
		scanf("%d",&array[i]);
		sum=sum+array[i];
	}
	average=(float)sum/7;
	printf("Array Elements\n");
	for(i=0;i<7;i++)
	{
		printf("%d\n",array[i]);
	}
	printf("Average of Array Elements:%f\n",average);
	return 0;
}
