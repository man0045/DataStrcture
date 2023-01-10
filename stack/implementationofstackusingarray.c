#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int ar[SIZE];
int top1 = -1;
int top2 = SIZE;

void push_stack1(int data){
    if(top1<top2-1)
    {
        ar[++top1] = data;
    }
    else{
        printf("stack overflow");
    }
}
void push_stack2(int data){
    if(top1 < top2-1)
    {
        ar[top1--] = data;
    }

}
void pop_stack1()
{
    if(top1 >=0)
    {
        int popped_element_is= ar[top1--];
        printf("\n %d the popped element is \n" , popped_element_is);

    }
    else{
        printf("\nstack is full\n");
    }
}
void pop_stack2(){
    if(top2< SIZE)
    {
        int popped_element_is = ar[top2++];
        printf("\n %d is being popped from stack 2\n", popped_element_is);
    }
    else
    {
        printf("\nstack underflow\n");
    }
}
void stack1_display(){
    int i;
    for(i=top1;i>=0;--i)
    {
        printf("%d",ar[i]);
    }
    printf("\n");
}
void stack2_display(){
    int i;
    for(i=top2;i < SIZE; i++)
    {
        printf("%d",ar[i]);
    }
    printf("\n");
}
int main()
{
    int ar[SIZE];
    int i;
    int num_of_ele;
    printf("\npushing of elemnt\n");
    for(i=1;i<=6;++i)
    {
        push_stack1(i);
        printf("\npushed value in stack %d\n",i);
        
    }
    for(i=1;i<=4;i++)
    {
        push_stack2(i);
        printf("\npushed value in stack %d\n",i);
        
    }
    stack1_display();
    stack2_display();
    printf("\npushing the values %d\n",11);
    push_stack1(11);
    num_of_ele = top1 + 1;
    while(num_of_ele){
        pop_stack1();
        --num_of_ele;
    }
    pop_stack1();
    return 0;
}