#include <stdio.h>
# define SIZE 100
void enqueue();
void dequeue();
void show();
int inp_arr[SIZE];
int Rear = - 1;
int Front = - 1;
int main(){
    int ch;
    while(1){
        printf("\n enter the case 1 for enqueue\n");
        printf("\n enter the case 2 for dequeue\n");
        printf("\n enter the case 3 for Display\n");
        printf("\n 4th case will exit you");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            enqueue();
        break;
        case 2:
            dequeue();
        break;
        case 3:
            show();
        case 4:
            exit(0);
        break;
        default:
        {
            printf("enter the right choice");
        }
            break;
        }

    }
}
void enqueue(){
    int insert_element;
    if(Rear==SIZE-1){
        printf("/n overflow condition\n");
    }
    else{

        if(Front==-1)

        Front=0;
        printf("enter the element to be insert");
        scanf("%d",&insert_element);
        Rear = Rear +1;
        inp_arr[Rear] = insert_element;

    }
}
void dequeue(){
    if(Front==-1 || Front >Rear){
        printf("\n underflow condition\n");
        return ;
    }
    else{
        printf("element deleted from the list %d\n", inp_arr[Front]);
        Front=Front+1;
    }
}
void show(){
    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", inp_arr[i]);
        printf("\n");
    }
}