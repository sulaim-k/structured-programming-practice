#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int limit;
    long long sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &limit);

    if (limit < 1) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    for (int number = 1; number <= limit; ++number) {
        sum += (long long)number * number);
    }

    printf("Sum of squares from 1 to %d = %lld\n", limit, sum);

    return 0;
}
