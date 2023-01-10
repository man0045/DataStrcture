#include <stdio.h>
int main()
{
    int n;
    float a, i, sum = 0;
    float avg;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the marks of students: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a);
        sum += a;
    }
    avg = sum / n;
    printf("The class average = %.2f \n", avg);
    printf("Made by Mannu Chaurasiya");
}
