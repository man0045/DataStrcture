#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;

};
void linkedlistTraversal(struct Node *head){
    struct Node *ptr = head;
    // printf("element is %d\n");
    //     ptr=ptr->next;
    do{
        printf("Element is %d\n",ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}
struct Node * deletefromfirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr= head;
    head = head->next;
    free(ptr);
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    head =  (struct Node *) malloc(sizeof( struct Node));
    second =  (struct Node *) malloc(sizeof( struct Node));
    third =  (struct Node *) malloc(sizeof( struct Node));
    fourth =  (struct Node *) malloc(sizeof( struct Node));

    head->data = 4;
    head->next = second;
    second->data = 6;
    second->next = third;
    third->data = 1;
    third->next = fourth;
    fourth->data = 7;
    fourth -> next = head;
    printf("Circular Linked list before insertion\n");
    linkedlistTraversal(head);
    head = deletefromfirst(head,4);
    // head = insertAtFirst(head, 58);
    // head = insertAtFirst(head, 59);
    printf("Circular Linked list after insertion\n");
    linkedlistTraversal(head);
}