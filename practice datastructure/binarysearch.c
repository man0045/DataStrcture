#include<stdio.h>
int binarySearch(int arr[],int size,int element){
    int low,high,mid;
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    // int arr[]={1,2,3,5,6,7,8,9,34,56,89};
    int arr[]={1,24,32,5,6,7,82,9,34,56,89};
    int size=sizeof(arr)/sizeof(int);
    int element = 6;
    int searchIndex = binarySearch(arr,size,element);
    printf("the element %d was found atr index %d\n",element,searchIndex);
    return 0;
}