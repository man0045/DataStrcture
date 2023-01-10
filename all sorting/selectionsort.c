#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");
}
void selectionsort(int *A, int n)
{
    int key, temp;
    for (int i = 0; i < (n - 1); i++)
    {
        key = i;
        {
            for (int j = i+1; j < n ; j++)
            {
                if (A[j] < A[key])
                {
                    key = j;
                }
            }
        }
        temp=A[i];
        A[i] = A[key];
        A[key]=temp;
    }
}
int main (){
    int A[]={4,2,7,1,9,6};
    int n=6;
    printArray(A,n);
    selectionsort(A,n);
    printArray(A,n);
    return 0;
}