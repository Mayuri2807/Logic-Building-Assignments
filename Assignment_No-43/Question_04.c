/*4)write a program which display smallest digits of all elments from linked list.
input:Linked list:|11|->|250|->||532|->|415|
output:1 0 2 1

*/
/////////////////////////////////////////////////////////////////////////////////////////////////// 

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no) 
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->next = NULL;
    newn->data = no;
    if (*head == NULL)
     {
        *head = newn;
    }
    else 
    {
        newn->next = *head;
        *head = newn;
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

void DisplaySmallDigits(PNODE head)
 {
    printf("Smallest digits are: ");
    while (head != NULL)
     {
        int iNo = head->data;
        int iMin = 9;
        while (iNo != 0) 
        {
            int iDigit = iNo % 10;
            if (iDigit < iMin) 
            {
                iMin = iDigit;
            }
            iNo /= 10;
        }
        printf("%d ", iMin);
        head = head->next;
    }
    printf("\n");
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 415);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);

    Display(First);

    DisplaySmallDigits(First);

    return 0;
}
