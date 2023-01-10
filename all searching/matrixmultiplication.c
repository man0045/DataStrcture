#include <stdio.h>
int main()
{
    int row, col, i, j, k;
    printf("Enter rows = ");
    scanf("%d",&row);
    printf("Enter column = ");
    scanf("%d",&col);
    int a[row][col], b[row][col], mul[row][col];
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
    printf("Matrix Multiplication : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < col; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    printf("made by mannu chaurasiya");
}
