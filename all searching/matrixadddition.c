#include <stdio.h>
int main()
{
    int row, col, i, j, k;
    printf("Enter rows = ");
    scanf("%d",&row);
    printf("Enter column = ");
    scanf("%d",&col);
    int a[row][col], b[row][col], add[row][col];
    printf("Enter first matrix element : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrix element : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix Addition : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
     printf("Made by Mannu Chaurasiya \n");
}
