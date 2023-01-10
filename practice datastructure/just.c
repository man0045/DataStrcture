#include<stdio.h>
int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    // int arr[]={1,2,3,5,6,7,8,9,34,56,6787,89,45};
    int arr[10],n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("enter the array element");
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int size=sizeof(arr)/sizeof(int);
    int element;
    printf("enter the element to be search");
    scanf("%d",&n);
    int searchIndex = linearSearch(arr,size,element);
    printf("the element %d was found atr index %d\n",element,searchIndex);
    return 0;
}