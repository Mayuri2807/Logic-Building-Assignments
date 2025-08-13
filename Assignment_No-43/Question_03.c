/*3)write a program which display product of all each digits  of all element from singly linear linked list.(dont consider zero)

input linked list:|11|->|20|->|32|->|41|
input elemet:1 2 6 4

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

void DisplayProduct(PNODE head)
 {
    int  iProduct = 1;
    while (head != NULL) 
    {
        int iNo = head->data;
        int iTemp = iNo;
        while (iNo != 0)
         {
            int iDigit = iNo % 10;
            if (iDigit != 0)
             {
                iProduct *= iDigit;
            }
            iNo /= 10;
        }
        printf("Product of digits of %d is: ", iTemp);
        int iTempProduct = iProduct;
        printf("%d\n", iTempProduct);
        iProduct = 1;
        head = head->next;
    }
}

int main() 
{
    PNODE First = NULL;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);

    DisplayProduct(First);

    return 0;
}

