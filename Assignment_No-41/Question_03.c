/*3)write a program which search first occurance of particular element  from singly linear linked list.
input linked list:|10|->|20|->|30|->|40|->|50|->|30|->|70|
input elemet:30
output:3

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
int searchFirstocc(PNODE Head,int no)
{
      int iCount=0;
      while(Head!=NULL)
      {
      	iCount++;
      	if(Head->data==no)
      	{
      		return iCount;
      	}
      	Head=Head->next;
      }

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
	InsertLast(&First,50);
	InsertLast(&First,30);
    InsertLast(&First,70);

    Display(First);

    printf("Enter the number we want to search:");
    scanf("%d",&iValue);

    iRet=searchFirstocc(First,iValue);

    printf("First occurance is:%d\n",iRet);



}
