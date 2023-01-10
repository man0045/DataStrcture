#include<stdio.h>
void main()
{ 
    int a[10],b[10],n,m,c=0;
    int low,high,mid;
    low=0;
    high=mid-1;
    printf("enter the size of array : " );
    scanf("%d",&n);
    printf("enter the array element : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be search : ");
    scanf("%d",&m);
    while(low<=high)
    mid=(low+high)/2;
    {
        if(a[mid]==m)
        {
            // printf("%d",mid);
            c=1;
            // break;
        }
        if(a[mid]<m)
        {
            low=mid-1;
        }
        else{
            high=mid-1;
        }
        if(c==1)
        {
            printf("the element found at position : %d ",m);
        }
        else{
            printf("element not found");
        }
    }
}