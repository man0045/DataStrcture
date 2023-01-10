#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
int top=-1;
char stack[MAX];
void push(char);
char pop();
int main(){
    char str[20];
    unsigned int i;
    printf("Enter the string");
    gets(str);
    for (int i=0;i<strlen(str);i++)
    {
        push(str[i]);

    }
    for(int i=0;i<strlen(str);i++)
    {
        str[i]=pop();
    }
    printf("\n reversed string is\n");
    puts(str);
    return 0;
   
}
void push(char item){
    if(top == (MAX-1))
        {
                printf("\nStack Overflow\n");
                return;
        }
        stack[++top] =item;
}
char pop(){
        if(top == -1)
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        return stack[top--];
}