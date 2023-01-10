#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 5
int stack[N];
int top=-1;
void push(char);
void pop();
void find_top();
void main(){
    int i;
    char a[100];
    printf("\n enter the expression \n");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='[')
        {
            push(a[i]);
        }
        else if(a[i]==']')
        {
            pop();
        }
    }
    find_top();
}
void push(char a){
    stack[top] = a;
    top++;
}
void pop()
{
    if(top==-1){
        printf("expression is invalid\n");
        exit(0);
    }
    else{
        top--;
    }
}
void find_top()
{
    if(top==-1)
    {
        printf("\n expression is valid\n");
    }
    else{
        printf("\n expression is invalid\n");
    }
}
