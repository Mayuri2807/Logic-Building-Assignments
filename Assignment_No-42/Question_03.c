/*3)write a program which displays all elements which are prime
from singly linked list.

input linked list:|11|->|20|->|17|->|41|->|22|->|89|
input elemet:11 17 41 89
*/

////////////////////////////////////////////////////////////////////////////////
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
void  Displayprime(PNODE head)
 {
    printf("Prime numbers in the linked list are: %d\n");
    while (head != NULL) 
    {
        int iPrime = 1;
        for (int i = 1; i <= head->data / 2; i++)
         {
            if (head->data % i == 0) 
            {
                iPrime = 0;
                break;
            }
        }
        if (iPrime == 1 && head->data > 1)
         {
            printf("%d\n", head->data);
        }
        head = head->next;
    }
}

int main()
{
	PNODE First=NULL;
	
	InsertFirst(&First,11);
	InsertFirst(&First,20);
	InsertFirst(&First,17);
	InsertFirst(&First,41);
	InsertFirst(&First,22);
	InsertFirst(&First,89);

	Display(First);

  Displayprime(First);

}
