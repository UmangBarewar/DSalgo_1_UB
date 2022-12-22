#include <stdio.h>
#include <stdlib.h>
//dsrwdsrtdtfsytas
struct Node
{
    int data;
    struct Node *next;
};
void linkedlist_traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    // declaration of structure
    struct Node *head;
    struct Node *sec;
    struct Node *thi;
    struct Node *four;
    // Allocate memory for nodes in the linked list in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    sec = (struct Node *)malloc(sizeof(struct Node));
    thi = (struct Node *)malloc(sizeof(struct Node));
    four = (struct Node *)malloc(sizeof(struct Node));
    // Link first and second linked list
    head->data = 7;
    head->next = sec;
    // arrow operator i.e, "->" is used for accessing the data member of a C structure

    // Link sec and thi linked list
    sec->data = 9;
    sec->next = thi;

    // Link thi and four linked list
    thi->data = 8;
    thi->next = four;

    // Link thi and four linked list
    four->data = 10;
    four->next = NULL;
    linkedlist_traversal(head);

    return 0;
}