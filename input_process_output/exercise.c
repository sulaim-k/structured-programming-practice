#include <stdio.h>
#include <stdlib.h>
int main()
{
    int first, second, sum;
    double average;

    printf("Enter two integers: ");
    scanf("%d %d", &first, &second);

    sum = first + second;
    average = sum / 2.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
