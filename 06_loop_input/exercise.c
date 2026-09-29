#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int score;
    int total = 0;

    for (int count = 1; count <= 5; ++count) {
        printf("Enter score %d: ", count);
        scanf("%d", &score);
        total += score;
    }

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", total / 5.0);

    return 0;
}
