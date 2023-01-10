#include <stdio.h>
void display(int arr[], int n)
{
    // traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}
void indDeletion(int arr[], int size, int index)

    {
        // if(size>=capacity)
        // {
        //     return -1;
        // }
        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }

    int main()
    {
        int arr[100] = {7, 8, 12, 27, 88};
        int size = 5,index = 1;
        display(arr, size);
        int element = 45;
        indDeletion(arr, size, index);
        size -= 1;
        display(arr, size);
        return 0;
 
    }
