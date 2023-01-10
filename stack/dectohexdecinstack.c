#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int isEmpty(int top, int stack_top_arr[]);
void push(int x,int *top,int stack_top_arr[]);
int pop(int *top,int stack_arr[]);
void dectohexadecimal(int num);
int main(){
    int num;
    printf("enter the data");
    scanf("%d",&num);
    printf("hexadecimal equivalent is : ");
    dectohexadecimal(num);
    return 0;
}
void dectohexadecimal(int num){
    int stack[MAX],top=-1,rem;
    while(num!=0)
    {
        rem=num%16;
        push(rem, &top,stack);
        num/=16;
    }
    while(top=-1)
            printf("%d",pop(&top,stack));
        printf("\n");
}
void push(int x,int *top, int stack_arr[]){
    if(*top==(MAX-1))
        printf("stack overflow");
    else
    {
        *top=*top+1;
        stack_arr[*top] = x;
    }


}
int pop(int *top, int stack_arr[])
{
        int x;
        if(*top == -1)
        {
                printf("Stack Underflow\n");
                exit(1);
        }
        else
        {
                x = stack_arr[*top];
                *top=*top-1;
        }
        return x;
}
