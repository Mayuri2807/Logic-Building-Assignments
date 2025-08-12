/*5)write a program which return second maximum element from singly linked list.

input linked list:|110|->|230|->|320|->|240|
output elemet:240

*/

////////////////////////////////////////////////////////////////////////////////////////////

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
int SecMaximum(PNODE head)
{
	int iMax=head->data;
	int SecMax=head->data;
	while(head !=NULL)
	{
		if(head->data > iMax)
		{
			SecMax=head->data;

		}
		head=head->next;
	}
	return SecMax;


}
int main()
{
	PNODE First=NULL;
	int iRet=0;

	InsertFirst(&First,110);
	InsertFirst(&First,230);
	InsertFirst(&First,320);
	InsertFirst(&First,240);

    Display(First);

    iRet=SecMaximum(First);

    printf("Second maximun number is :%d\n",iRet);
    


}
