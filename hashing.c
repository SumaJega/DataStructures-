#include <stdio.h>
int tsize=0,n;
int hasht(int key)
{
	int i ;
	i = key%tsize ;
	return i;
}
//-------LINEAR PROBING-------
int rehashl(int key)
{
	int i ;
	i = (key+1)%tsize ;
	return i ;
}
//-------QUADRATIC PROBING-------
int rehashq(int key, int j)
{
	int i ;
	i = (key+(j*j))%tsize ;
	return i ;
}

void searchElement(int key,int *hash) 
{
	int index;
	index = key % tsize;
	int flag = 0, count = 0;
        if (n == 0) {
                printf("Hash Table is Empty!!");
                return;
        }
        while (count <= tsize) {
                if (hash[index] == key) {
                        ("Value : %d\n", hash[index]);
                           flag = 1;
                        break;
                }
                index = (index + 1)%tsize;
        }

        if (!flag)
	{
                printf("Given data is not present in hash table\n");
	}
	else
	{
		printf("Element found\n");
	}
  }

void main()
{
	int key,arr[20],hash[20],i,s,op,j,k ;
	printf ("Enter the size of the hash table:  ");
	scanf ("%d",&tsize);
	printf ("\nEnter the number of elements: ");
	scanf ("%d",&n);

	for (i=0;i<tsize;i++)
	hash[i]=-1 ;

	printf ("Enter Elements: ");
	for (i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}

	do
	{
		printf("\n\n1.Linear Probing\n2.Quadratic Probing \n3.Search\n4.Exit \nEnter your option: ");
		scanf("%d",&op);
		switch(op)
		{
		case 1:
			for (i=0;i<tsize;i++)
				hash[i]=-1 ;
			for(k=0;k<n;k++)
			{
				key=arr[k] ;
				i = hasht(key);
				while (hash[i]!=-1)
				{
					i = rehashl(i);
				}
				hash[i]=key ;
			}
			printf("\nThe elements in the array are: ");
			for (i=0;i<tsize;i++)
			{
				printf("\n  Element at position %d: %d",i,hash[i]);
			}
			break ;
		case 2:
			for (i=0;i<tsize;i++)
				hash[i]=-1 ;
			for(k=0;k<n;k++)
			{
				j=1;
				key=arr[k] ;
				i = hasht(key);
				while (hash[i]!=-1)
				{
					i = rehashq(i,j);
					j++ ;
				}
				hash[i]=key ;
			}
			printf("\nThe elements in the array are: ");
			for (i=0;i<tsize;i++)
			{
				printf("\n Element at position %d: %d",i,hash[i]);
			}
			break ;
		case 3:
			printf("Enter the key value:");
			scanf("%d", &key);
			searchElement(key,hash);
			break;

		}
	}while(op<=3);

}
