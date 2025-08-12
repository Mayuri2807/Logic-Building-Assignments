/*4)write a program which return addition of all even elements 
from singly linked list.

input linked list:|11|->|20|->|17|->|32|->|41|
input elemet:52


*/

////////////////////////////////////////////////////////////////////////////////////////////////////
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

void InsertFirst(PPNODE head,int no)
{
	PNODE newn=NULL;

	newn=(PNODE)malloc(sizeof(NODE));

	newn->next=NULL;
	newn->data=no;

	if(*head==NULL)
	{
		*head=newn;

	}
	else
	{
		newn->next=*head;
		*head=newn;
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
int Addition(PNODE head)
{
	int iSum=0;

	while(head!=NULL)
	{
		if(head->data%2==0)
		{
			iSum=iSum+head->data;
		}
		head=head->next;
	}
	return iSum;

}

int main()
{
	PNODE First=NULL;
	int iRet=0;

	InsertFirst(&First,11);
	InsertFirst(&First,20);
	InsertFirst(&First,17);
	InsertFirst(&First,32);
	InsertFirst(&First,41);


	Display(First);
	
 iRet=Addition(First);
 printf("Addition is :%d\n",iRet);
    
}
