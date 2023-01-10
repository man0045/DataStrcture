#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;

};
void linkedListTraversal(struct Node* ptr){
    while(ptr != NULL){
        printf("element : %d\n",ptr->data);
        ptr = ptr->next;
    }
 }
// case 1 deleting the first element from the linkedlist
struct Node * deletionfirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;

}
// case 2 deleting the node in between the linkedlist
struct Node * deleteinbetween(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head -> next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;

    }
    p->next = q->next;
    free(q);
    return head;
    
}
//  case 3 delete last node
struct Node * deletelast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head -> next;
    while(q->next != NULL){
        p=p->next;
        q=q->next;

    }
    p->next = NULL;
    free(q);
    return head;
}
// case 3 --deleting the element by given value
struct Node * deletegiven(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head -> next;
    while(q->data!= value && q->next == NULL){
        p=p->next;
        q=q->next;

    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
    
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    head =  (struct Node *) malloc(sizeof( struct Node));
    second =  (struct Node *) malloc(sizeof( struct Node));
    third =  (struct Node *) malloc(sizeof( struct Node));
    head->data = 7;
    head->next = second;
    second->data = 27;
    second->next = third;
    third->data = 73;
    third->next = NULL;
    linkedListTraversal(head);
    head = deletegiven(head,1);
    printf("linked list after deletion\n");
    linkedListTraversal(head);
    return 0;
}