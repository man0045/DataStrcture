#include<stdio.h>
int main()
{
    int num;
    printf("How many no. you want to enter : ");
    scanf("%d", &num);
    int a[num], i, lar = 0;
    printf("Enter the numbers : ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > lar)
        {
            lar = a[i];
        }
    }
    printf("The Larger Number is : %d", lar);
    printf("\nMade by Mannu Chaurasiya\n");
    return 0;
}
