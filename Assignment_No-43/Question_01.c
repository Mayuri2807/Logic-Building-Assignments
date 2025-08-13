/*1)write a program which reverse each elments of singly linked list.
input Linked list:|11|->|28|->|17|->|41|->|6|->|89|
output:|11|->|82|->|71|->|14|->|6|->|98| 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////


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

void Reverse(PNODE head)
 {
    PNODE temp = head;
    while (temp != NULL) 
    {
        int iNo = temp->data;
        int iRev = 0;
        while (iNo != 0) 
        {
            iRev = iRev * 10 + iNo % 10;
            iNo /= 10;
        }
        temp->data = iRev;
        temp = temp->next;
    }
    printf("After reversing each element:\n");
    Display(head); 
}

int main()
 {
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 28);
    InsertFirst(&First, 17);
    InsertFirst(&First, 41);
    InsertFirst(&First, 6);
    InsertFirst(&First, 89);

    Display(First);

    Reverse(First);

    return 0;
}
