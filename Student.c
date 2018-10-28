#include<stdio.h>
struct student
{
	char name[20];
	char roll[10];
	float mark[7];
};
int main()
{
	struct student s1;
	float sum=0,average=0;
	int i;
	printf("Enter the Name Of the Student:");
	scanf("%s",s1.name);
	printf("\nEnter the RollNumber of the student:");
	scanf("%s",s1.roll);
	printf("\nEnter seven Subject marks out of 100:");
	for(i=0;i<7;i++)
	{
		scanf("%f",&s1.mark[i]);
		sum=sum+s1.mark[i];
	}
	average=sum/7;
	printf("\nName Of the Student:%s",s1.name);
	printf("\nRollNumber of the student:%s",s1.roll);
	printf("\nSeven Subject marks out of 100:");
	for(i=0;i<7;i++)
	{
		printf("%f\n",s1.mark[i]);
	}
	printf("Average of Array Elements:%f\n",average);
	return 0;
}
