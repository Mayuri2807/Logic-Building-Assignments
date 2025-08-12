/*2)write a program which displays all elements which are perfect from singly linked list.

input linked list:|11|->|28|->|17|->|41|->|6|->|89|
input elemet:6 28


*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////

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
void DisplayPerfect(PNODE head)
 {
    int iCount = 0;
    while (head != NULL)
     {
        int sum = 0;
        for (int i = 1; i < head->data; i++) 
        {
            if (head->data % i == 0) 
            {
                sum += i;
            }
        }
        if (sum == head->data)
         {
            printf("%d\n", head->data);
            iCount++;
        }
        head = head->next;
    }
    printf("Number of perfect numbers in linked list are: %d\n", iCount);
}


int main()
{
	PNODE First=NULL;
	int iRet=0;

	InsertFirst(&First,89);
	InsertFirst(&First,6);
	InsertFirst(&First,41);
	InsertFirst(&First,17);
	InsertFirst(&First,28);
	InsertFirst(&First,11);

	Display(First);

   DisplayPerfect(First);


}
