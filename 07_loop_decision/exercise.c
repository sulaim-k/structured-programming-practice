#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int number;
    int isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 2) {
        isPrime = 0;
    } else {
        for (int divisor = 2; divisor * divisor <= number; ++divisor) {
            if (number % divisor == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is prime.\n", number);
    } else {
        printf("%d is not prime.\n", number);
    }

    return 0;
}
