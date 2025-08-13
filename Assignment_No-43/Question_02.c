/*2)write a program which display all pailndrome elements of singly linear list.


input linked list:|11|->|28|->|17|->|414|->|6|->|89|
input elemet:11 6 414

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
    while (head != NULL) 
    {
        printf("| %d |->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void DisplayPalindrome(PNODE head)
 {
    printf("Palindrome elements are: ");
    while (head != NULL) 
    {
        int iNo = head->data;
        int iRev = 0;
        int iTemp = iNo;
        while (iNo != 0) 
        {
            iRev = iRev * 10 + iNo % 10;
            iNo /= 10;
        }
        if (iTemp == iRev) 
        {
            printf("%d ", iTemp);
        }
        head = head->next;
    }
    printf("\n");
}


int main()
{
	PNODE First=NULL;
	

	InsertFirst(&First,89);
	InsertFirst(&First,6);
	InsertFirst(&First,414);
	InsertFirst(&First,17);
	InsertFirst(&First,28);
	InsertFirst(&First,11);

	Display(First);
  DisplayPalindrome(First);

 

 }
