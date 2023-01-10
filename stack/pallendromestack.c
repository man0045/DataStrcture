#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 5
int stack[N];
int top=-1 , front = 0;
void push(char);
void pop();

void main(){
    int i , choice;
    char s[N],b;
    while(1)
    {
        printf("1-enter string \n2-exit\n");
        printf("enter the choice \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the string\n");
            scanf("%d",s);
            for(i=0;s[i]!='\0';i++)
            {
                b=s[i];
                push(b);
                i++;
            }
            for(i=0;i<(strlen(s) / 2);i++)
            {
                if(stack[top]==stack[front])
                {
                    pop();
                    front++;
                }
                else{
                    printf("%s is not a pallendrome\n",s);
                    break;
                }
            }
            // if ((strlen(s) / 2)  ==  front)
            // {
            //     printf("%s is palindrome\n",  s);
            // }
            front  =  0;
            top  =  -1;
            break;
        case 2:
            exit(0);
        default:
            printf("enter correct choice\n");

        }
    }
}
void push(char a)
{
    top++;
    stack[top] = a;
}
void pop()
{
    top--;
}