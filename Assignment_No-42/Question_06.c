/*6)write a program which display addition of each digits of elements from singly
linear list.


input linked list:|110|->|230|->|20|->|240|->|640|
input elemet:2 5 2 6 10
*/

/////////////////////////////////////////////////////////////////////////////////////////////////

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
int SumDigit(PNODE head)
{
	while (head != NULL) 
	{
        int iNo = head->data;
        int iSum = 0;
        while (iNo != 0) 
        {
            iSum += iNo % 10;
            iNo /= 10;
        }
        printf("%d ", iSum);
        head = head->next;
    }
    printf("\n");
 }

int main()
{
	PNODE First=NULL;
	

	InsertFirst(&First,110);
	InsertFirst(&First,230);
	InsertFirst(&First,20);
	InsertFirst(&First,240);
	InsertFirst(&First,640);
	

	Display(First);

  SumDigit(First);
}
