#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int choice;
    double first, second;

    do {
        printf("\nCALCULATOR MENU\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &first, &second);
        }

        switch (choice) {
            case 1:
                printf("Result = %.2f\n", first + second);
                break;
            case 2:
                printf("Result = %.2f\n", first - second);
                break;
            case 3:
                printf("Result = %.2f\n", first * second);
                break;
            case 4:
                if (second == 0) {
                    printf("Division by zero is not allowed.\n");
                } else {
                    printf("Result = %.2f\n", first / second);
                }
                break;
            case 5:
                printf("Goodbye.\n");
                break;
            default:
                printf("Invalid option. Please choose 1 to 5.\n");
        }
    } while (choice != 5);

    return 0;
}
