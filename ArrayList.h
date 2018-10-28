#include <stdio.h>
int MAXSIZE=10;   //MAXSIZE of List
int N=0;//CURRENTSIZE 0f List Initially Zero
 int isEmpty()
{
	if(N==0)
	{
		return 1;       //If (Current Size==0) "LIST is Empty" return 1
	}                 //else "LIST is not Empty" return 0
	else
		 return 0;
}
int isFull()
{
	if(N==MAXSIZE)
	{
		return 1;   // If (Current Size==Max Size) "LIST is FULL" return 1
	}             //else "LIST is not FULL" return 0
	else
		 return 0;
}
void insertToEOL(int *Listptr)
{
     if(isFull())
     {
     		printf("List is Full Can’t Insert\n");//If List is full return error message ”List is full. Can’t Insert”.
     }                                       
     else                                    //else
     {                                       //
		 int element;
		 printf("Enter the Element to Insert\n");//Get the element to insert
		 scanf("%d",&element);//Get the position/index to insert new Element
		 int index=N;//by index=CurrentSize i.e POsition=CurrentSize+1
		 Listptr[index]=element;//insert element to position
		 N=N+1;//increase the current size by 1
     }
    
}

void deleteFromEOL(int *List)
{
     if(isEmpty())
     {
      		 printf("List is Empty. We cant Delete\n"); //If List is empty return error message ”List is empty. Can’t delete”.
     }
     else                                         //else
     {
		 int element;
		 int index=N-1;//Get the position/index to delete element
		 element=List[index];//index =currentsize-1 i.e Position=currentSize
		 printf("Element %d deleted from postion %d\n",element,index+1);
		 N=N-1;//Decrease the CurrentSize by 1
     }
   
}

void insertToFOL(int *List)
{
     
     if(isFull())
     {
      		printf("List is Full... cant insert\n");//If List is full return error message ”List is full. Can’t Insert”.
     }
     else  //else
     {
		 int index=0,element;//Get the Element
		 printf("Enter the element to insert\n");
		 scanf("%d",&element);
		 
		 for(index=N;index>0;index--)   //Free the 1st Position by moving all the elements to one position
		 {//forward by New Postion=CurrentPosition +1
		      List[index]=List[index-1];
		 }
		 List[0]=element;//insert the element to Position 1 i.e index 0
		 N=N+1;//increase the current size by 1
     }
    
}

void deleteFromFOL(int *List)
{
     if(isEmpty())
     {
        	printf("List is Empty... cant delete\n"); //If List is empty return error message ”List is empty. Can’t delete”.
     }
     else//else
     {
		int index=0,element;
		element=List[0]; //
		for(index=0;index<N;index++)
		{				//Move all the elements except one in 1st position
			List[index]=List[index+1];//element in 1st Position automatically deleted
		}
		N=N-1;
		printf("Element %d from Position 1\n",element);
     }
   
}

void insertToNthPos(int *List)
{
     if(isFull()) //If List is Full Cant Insert
     {
       		printf("List is Full... Cant insert\n");
     } //else
     else
     {                                                  
	int i,index=0,element,pos;
	printf("Available Postion in LIst\n");
	if(isEmpty())//If List is empty We can insert at Postion 1 only
	{
		printf("List is Empty... only Available Position is 1\n");
		printf("Enter the Element to insert\n");//Get the element to insert
		scanf("%d",&element);
		List[0]=element;//Insert the element at index Zero i.e @ Position 1
		N=N+1; //Increase the N by 1
	}
	else //If List is not empty
	{
		do
		{
			printf("Enter the Position(within %d from 1) in which you want to insert Element\n",N);
			scanf("%d",&pos);//We can insert the element only at the Position1 to CURRENTSIZE
		}while(pos>N || pos<0); //Continue do loop until get the available position i.e from 1 to CURRENTSIZE

		printf("Enter the Element to insert\n");
		scanf("%d",&element);//Get the element
		for(index=N;index>pos-1;index--)
		{
			List[index]=List[index-1]; //Move the elements of nth postion to CURRENTSIZE Position to one step forward
		}
		List[pos-1]=element;//Insert the element at Nth Postion
		N=N+1; //Increase the CURRENTSIZE by 1
		}
	} 
}

void deleteFromNthPos(int *List)
{
	int element,pos,index;
	if(isEmpty())
	{
		printf("List is Empty... cant delete\n");  //If List is empty return error message ”List is empty. Can’t delete”.
	}
	else //else
	{
		  do
		    {
			     printf("Enter the Position(within %d from 1) from which you want to Delete Element\n",N);
			     scanf("%d",&pos);//We can delete element at position 1 to CURRENTSIZE
		    }while(pos>N || pos<0); //Continue do loop until get the available position i.e from 1 to CURRENTSIZE
		  element=List[pos-1];
		  if(pos==N)//If Nth Position=CURRENTSIZE
		  { 				//Decrease the CURRENTSIZE by 1
		   		N=N-1;//Element at the Nth Position will be automatically deleted
		  }
		  else//If Nth Postion not equal to CURRENTSIZE
		  {
			     for(index=pos-1;index<N;index++)
			     {			//Move the elements of nth postion to CURRENTSIZE Position to one step backward     
			      	List[index]=List[index+1];
			     }
			     N=N-1;//Decrease the CURRENTSIZE by 1
		  }
		  printf("Element %d deleted from postion %d\n",element,pos);
	}
	printf("deleteFromNthPos\n");
}

int searchInList(int element,int *List)
{
	int index,i,found=0;//Initially found=0
	if(isEmpty())//If list is empty retun List is empty
	{
		printf("List is empty\n");
	}
	else //If list is not empty
	{
		for(i=0;i<N;i++)
		{	//Look for elements in the Positions 1 to CURRENTSIZE
			if(List[i]==element)//If Searching element available in List[Postion]
			{
				found=1;//found=1
				break;
			}
		}
		if(found)
		{
			printf("Element %d available in Position %d\n",element,i+1);//If found=1 element available in List
			return i;
		}
		else
		{
			printf("Element %d not available in List\n",element);//If found=0 element not available
			return -1;
		}
	}

}

void printList(int List[])
{
	int i=0;
	if(isEmpty())//If List is Empty return List is Empty
	{
		printf("List is Empty\n");
	}
	else  //If List is not empty
	{
		 printf("\nArray Element\n");
		 for(i=0;i<N;i++)          //for Postion 1 to CURRENTSIZE
		 {
		 	printf("%d\n",List[i]); //Print the element in the Postion
		 }
	}
    
}

void insertBefore(int x,int e,int *List)
{
	if(isFull()) //If List is Full Cant Insert
	{
		printf("List is Full... Cant insert\n");
	} 
	else
	{                                                  
		int i,index=0,pos;
		pos=searchInList(e,List);
		if(pos == -1)
			printf("Element not present in the List\n");
		else
		{
			printf("Available Postion in LIst %d\n",pos);
			for(index=N;index>pos-1;index--)
			{
				List[index]=List[index-1]; //Move the elements of nth postion to CURRENTSIZE Position to one step forward
			}
			List[pos]=x;//Insert the element at Nth Postion
			N=N+1; //Increase the CURRENTSIZE by 1
		}
	}
}


void insertAfter(int x,int e,int *List)
{

	if(isFull()) //If List is Full Cant Insert
	{
		printf("List is Full... Cant insert\n");
	} 
	else
	{                                                  
		int i,index=0,pos;
		pos=searchInList(e,List);
		if(pos == -1)
			printf("Element not present in the List\n");
		else
		{
			printf("Available Postion in LIst\n");
			for(index=N;index>pos;index--)
			{
				List[index]=List[index-1]; //Move the elements of nth postion to CURRENTSIZE Position to one step forward
			}
			List[pos+1]=x;//Insert the element at Nth Postion
			N=N+1; //Increase the CURRENTSIZE by 1
		}
	}
}

void deleteAnElement(int e,int *List)
{
	if(isEmpty())
	{
		printf("List is Empty... cant delete\n");  //If List is empty return error message ”List is empty. Can’t delete”.
	}
	else
	{                                                  
		int i,index=0,pos;
		pos=searchInList(e,List);
		if(pos == -1)
			printf("Element not present in the List\n");
		else
		{
			printf("Available Postion in LIst\n");
			for (index = pos; index <  N - 1; index++)
			{
		                List[index] = List[index + 1];//Move the elements of nth postion to CURRENTSIZE Position to one step forward
	                }
			N=N-1;//Decreae the CURRENTSIZE by 1
		}
	}
}
