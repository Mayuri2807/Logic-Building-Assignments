/*5)write a program which returns addition of all elemets from singly linear linked list.
input linked list:|10|->|20|->|30|->|40|
input elemet:100

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
int Addition(PNODE Head)
{

	PNODE temp=Head;
	int iAdd=0;
	while(temp!=NULL)
	{
	
		iAdd=iAdd+(temp->data);
		temp=temp->next;
	}
	return iAdd;
}
int main()
{
	PNODE First=NULL;
	int iRet=0;
	int iValue=0;

	InsertLast(&First,10);
	InsertLast(&First,20);
	InsertLast(&First,30);
	InsertLast(&First,40);
	
    Display(First);

    

    iRet=Addition(First);

    printf("Addition  is:%d\n",iRet);



}
