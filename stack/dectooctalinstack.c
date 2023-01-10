#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int isEmpty(int top, int stack_arr[]);
void push(int x, int *top, int stack_arr[]);
int pop(int *top, int stack_arr[]);
void DecToOct(int num);

int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    printf("binary equivalent is : ");
    DecToOct(num);
    return 0;

}
void DecToOct(int num){
    int stack[MAX], top=-1,rem;
    while(num!=0)
    {
        rem=num%8;
        push(rem, &top,stack);
        num/=8;

    }
    while(top!=-1)
                printf("%d", pop(&top, stack));
        printf("\n");

}
void push(int x, int *top, int stack_arr[])
{
        if(*top == (MAX-1))
                printf("Stack Overflow\n");
        else
        {
                *top=*top+1;
                stack_arr[*top] = x;
        }
}/*End of push()*/

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
