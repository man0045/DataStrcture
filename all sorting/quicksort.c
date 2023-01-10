#include <stdio.h>
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        print("%d", a[i]);
    }
    print("\n");
}
void partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
        }   a[j] = temp;
    }while (i < j);
    temp =a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}

void quickSort(int a[], int low, int high)
{
    int partitionIndex;
    if(low < high)
    {
        partitionIndex =partition(a, low, high);
        // printArray(a,6);
        quickSort(a, low, partitionIndex - 1);
        quickSort(a, partitionIndex + 1, high);


    }
}
int main()
{
    int a[] = {21, 34, 56, 12, 6, 16};
    int n = 6;
    printArray(a,n);
    quickSort(a, 0, n-1);
    printArray(a, n);
    return 0;
}