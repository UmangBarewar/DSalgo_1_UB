#include <stdio.h>
#include <stdlib.h>
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
// case 1 :deleting the first element in the linked list 
struct Node * deletefirst(struct Node * head)
{
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;

}
// case 2 :deleting at the given index
struct Node * deleteatindex(struct Node* head,int index)
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
// case 3: delete at the end
struct Node *deleteatEnd(struct Node* head)
{
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;

}
//case 4 : Deleting the element with a given from the linked list
struct Node *deletenodewithelement(struct Node* head, int value)
{
    struct Node * p = head;
    struct Node * q = head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if(q->data == value)
    {
      p->next = q->next;
        free(q);  
    }
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
    // arrow operator i.e, "->" is used for accessing the data member of a C structure

    // Link sec and thi linked list
    sec->data = 3;
    sec->next = thi;

    // Link thi and four linked list
    thi->data = 8;
    thi->next = four;

    // Link thi and four linked list
    four->data = 1;
    four->next = NULL;
    printf("Linked list before deletion\n");
    linkedlist_traversal(head);
    printf("Linked list after deletion\n");
    // head = deletefirst(head);
    // head = deleteatindex(head,2);
    // head = deleteatEnd(head); 
    head = deletenodewithelement(head,7); 
    linkedlist_traversal(head);

    return 0;
}