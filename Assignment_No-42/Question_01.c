/*1)write a program which returns smallest elemets from singly linear linked list

input linked list:|110|->|230|->|20|->|240|->|240|
input elemet:20


*/


//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
struct  node
{
	int data;
	struct node *next;
	
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     

    newn->data = no;                        
    newn->next = NULL;

    if(*head == NULL)   
    {
        *head = newn;
    }
    else 
    {
        temp = *head;

        while(temp->next != NULL)
        {
            temp= temp->next;
        }

        temp->next = newn;
    }
}

void Display(PNODE head)
{
    printf("Elements of LinkedList are : \n");

    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int Smallest(PNODE Head)
{
	int iMin=Head->data;
	PNODE temp=Head;
	while(temp!=NULL)

	{
		if(temp->data <iMin)
		{
			iMin=temp->data;

		}	
		temp=temp->next;

		
	}
	return iMin;
}
int main()
{
	PNODE First=NULL;
	int iRet=0;
	int iValue=0;

	InsertLast(&First,110);
	InsertLast(&First,230);
	InsertLast(&First,20);
	InsertLast(&First,320);
	InsertLast(&First,240);
	
  Display(First);

  iRet=Smallest(First);

  printf("Smallest number is:%d\n",iRet);

}

