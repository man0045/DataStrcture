#include <stdio.h>
int main()
{
    int row, col, i, j, k;
    printf("Enter rows = ");
    scanf("%d",&row);
    printf("Enter column = ");
    scanf("%d",&col);
    int a[row][col], tran[row][col];
    printf("Enter matrix element : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix Transpose : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            tran[j][i] = a[i][j];
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ",tran[i][j]);
        }
        printf("\n");
    }
printf("made by mannu Chaurasiya");
}
