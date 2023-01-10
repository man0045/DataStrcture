#include <stdio.h>
void main()
{
    int a[10], b[10], n1, x, i, j,p=0;
    printf("enter the size of an array");
    scanf("%d", &n1);
    printf("enter the array element");
    for (int i = 0; i < n1; i++)
    scanf("%d", &a[i]);
    
    printf("enter the element to be search :");
    scanf("%d", &x);

    for (int i = 0; i < n1; i++)
    {
    
        if (x == a[i])
        {
    
            p=i+1;
            break;
        }
    }
    
    if (p >0)
    
        printf("the element found at %d pos" ,p);
    
    else
    
       printf("the element not found at any pos");

}