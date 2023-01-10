#include<stdio.h>
void printArray(int *A,int n){
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);

    }

    printf("\n");
}
void insertionSort(int *a,int n){
    int key,j;
    for ( int i = 0; i <= n-1; i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j] > key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        
    }
    

}
int main(){
    int a[]={23,13,34,56,12,10};
    int n=6;
    printArray(a,n);
    insertionSort(a,n);
    printArray(a,n);
    return 0;
}