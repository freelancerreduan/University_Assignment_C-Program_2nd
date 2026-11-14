
#include <stdio.h>

int main() {

    // ID: 42260203340

    int choice, num, i, prime;
    unsigned long long fact;

    do {

        printf("===== MENU =====\n");
        printf("1. Factorial\n");
        printf("2. Prime check\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {

            case 1:
                printf("Enter number: ");
                scanf("%d", &num);

                fact = 1;

                for(i = 1; i <= num; i++) {
                    fact = fact * i;
                }

                printf("%d! = %llu\n", num, fact);
                break;

            case 2:
                printf("Enter number: ");
                scanf("%d", &num);

                prime = 1;

                if(num < 2) {
                    prime = 0;
                }
                for(i = 2; i <= num / 2; i++) {
                    if(num % i == 0) {
                        prime = 0;
                        break;
                    }
                }
                if(prime == 1) {
                    printf("%d is a prime number.\n", num);
                }
                else {
                    printf("%d is not a prime number.\n", num);
                }
                break;

            case 3:
                printf("Program ended. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("\n");

    } while(choice != 3);

    return 0;
}
