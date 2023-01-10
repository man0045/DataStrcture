#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(void);
void pop(void);
void display(void);

void push(){
    int x;
    printf("enter the data \n");
    scanf("%d",&x);
    if(top== N-1){
        printf("overflow condition\n");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    int item;
    if(top==-1){
        printf("underflow condition\n");
    }
    else{
        item = stack[top];
        top--;
        printf("%d",item);

    }
}
void peek(){
    if(top==-1){
        printf("underflow condition\n");
    }
    else{
        printf("%d",stack[top]);
    }
}
void display(){
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(int i=0; i<=top; i++)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}
void main(){
    int ch;
    // clrscr();
    do{
        printf("\nenter the choice;\n 1 : PUSH\n  2 FOR POP\n  3 FOR PEEK\n 4 FOR DISPLAY\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: peek();
                break;
            case 4: display();
                break;
            default:printf("invalid choice \n");
        }
    }while(ch!=0);
    // getch();
}