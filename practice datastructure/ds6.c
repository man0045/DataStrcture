#include<stdio.h>
void main()
{
    int a[10],n,count=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the element of an array");
    for(int i=0;i<n;i++)
    {scanf("%d",&a[i]);}
    
    for(int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
        
           if(a[i]==a[j])
           count++;
           break;
        }
    }
    for (int i=0;i<n; i++){
        printf("%d",count);
    }
}