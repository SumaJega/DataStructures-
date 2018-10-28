#include<stdio.h>
int arr[100],count;
void inorder(int pos)
{
	int i,j;
	i = 2*pos + 1;
	if(arr[i] != 0)
		inorder(i);
	printf(" %d->",arr[pos]);
	j = 2*pos +2;
	if(arr[j] != 0)
		inorder(j);

}
void preorder(int pos)
{
	int i,j;
	i = 2*pos + 1;
	printf(" %d->",arr[pos]);
	if(arr[i] != 0)
		preorder(i);
	j = 2*pos +2;
	if(arr[j] != 0)
		preorder(j);

}
void postorder(int pos)
{
	int i,j;
	i = 2*pos + 1;
	if(arr[i] != 0)
		postorder(i);
	j = 2*pos +2;
	if(arr[j] != 0)
		postorder(j);
	printf(" %d->",arr[pos]);

}
void main()
{
	int i,num,choice;
	count = 0;
	for(i=0;i<100;i++)
	arr[i] = 0;

	do
	{
		printf("\n****************Main Menu*****************\n 1. Insert into tree \n 2. Delete from tree \n 3. Search for an element in tree \n 4. Inorder traversal\n5. Preorder traversal\n6.Postorder traversal\n 7. exit \nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{

			case 1:
				printf("Enter element:");
				scanf("%d",&num);
				arr[count] = num;
				count++;
				break;
			case 2:
				printf("\n Enter the element to be deleted:");
				scanf("%d",&num);
				for(i=0;i<count;i++)
				{
					if(arr[i]==num)   
					{
						count--;
						arr[i] = arr[count];
						arr[count] = 0;
						break;
					}
				}
				break;
			case 3:
				printf("\n Enter the element to be searched:");
				scanf("%d",&num);
				for(i=0;i<count;i++)
				{
					if(arr[i]==num)   
					{
						printf("\n Element found");
						break;
					} 
				}
				if(i==count)
					printf("\n Element not found");
				break;
			case 4:
				inorder(0);
				break;
			case 5:
				preorder(0);
				break;
			case 6:
				postorder(0);
				break;
			case 7:
				printf("Exit\n");
		}
	}while(choice<7);
	
}

