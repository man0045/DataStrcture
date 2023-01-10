#include<stdio.h>
void main()
{
    int a[10],b[10],n,m,c=0;
    printf("enter the size of array : " );
    scanf("%d",&n);
    printf("enter the array element : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be search : ");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            c++;
            break;
        }
    }
    if(c>0)
    {
        printf("the element found at position %d",c);
    }
    else
    {
        printf("element not found at any position in this array");
    }
}