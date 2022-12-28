#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void linkedlist_traversal(struct Node *ptr)
{
    while(ptr!= NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr=ptr->next;
    }
}
struct Node * DeleteAtFirst(struct Node * head) //this will return head for the linked list
{
    struct Node * ptr = head;
    head=head->next;
    free(ptr);
    return head;

}
struct Node * Deleteatindex(struct Node* head,int index)
{
    struct Node * p = head;
    struct Node * q = head->next;
    for (int i = 0; i < index-1; i++)
    {
       p = p->next;
       q = q->next;
    }
    p->next = q->next;
    free(q);
    
    return head;
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
    head->data = 4;
    head->next = sec;
    head->prev = NULL;
    // arrow operator i.e, "->" is used for accessing the data member of a C structure

    // Link sec and thi linked list
    sec->data = 3;
    sec->next = thi;
    sec->prev = head;

    // Link thi and four linked list
    thi->data = 8;
    thi->next = four;
    thi->prev = sec;

    // Link thi and four linked list
    four->data = 1;
    four->next = NULL;
    four->prev = thi;
    printf("Linked list before Insertion\n");
    linkedlist_traversal(head);
    // head=DeleteAtFirst(head);
    head=Deleteatindex(head,2);
    printf("Linked list after Deletion\n");
    linkedlist_traversal(head);

    return 0;
} 