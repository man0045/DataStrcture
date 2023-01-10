#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void selectionSort(int *A, int n)
{
    int indexofMin, temp;
    printf("running selection sort");
    for (int i = 0; i < n - 1; i++)
    {
        indexofMin = i;
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[j] < A[indexofMin])
                {
                    indexofMin = j;
                }
            }
        }
        temp = A[i];
        A[i] = A[indexofMin];
        A[indexofMin] = temp;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int A[n];
    printf("enter the element");
    for (int i = 0; i < n; i++)
    {
        scanf("enter the elments %d : ", &A[i]);
    }
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);
    return 0;
}