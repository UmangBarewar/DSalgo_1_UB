#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node  *next;
};
void linkedlist_traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node * insertAtFirst(struct Node * head,int data) //this will return head fir the linked list
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;

}
struct Node * insertAtindex(struct Node * head,int data,int index)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i=0;
    
    while(i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
     
}
struct Node * insertAtEnd(struct Node *head, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;
 
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct Node * insertAfterpreviousindex(struct Node *head,struct Node *prev, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prev->next;
    prev->next = ptr;
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
    printf("Before Insertion\n");
    linkedlist_traversal(head);

    printf("After insertion at the beginning\n");
    head = insertAtFirst(head,56);
    linkedlist_traversal(head);

    printf("After inserting at the pth index\n");
    head = insertAtindex(head,76,2);
    linkedlist_traversal(head);

    printf("After inserting at the End\n");
    head = insertAtEnd(head,45);
    linkedlist_traversal(head);

    printf("After inserting at the previous node\n");
    head = insertAfterpreviousindex(head,thi,64);
    linkedlist_traversal(head);


    


return 0;
}