
#include <stdio.h>
int main() {

    // ID: 42260203340

    int a, b, c, d;
    int isprime, count = 0;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("============ Output =============\n");
    for (c = a; c <= b; c++) {
        isprime = 1;

        if (c < 2) {
     isprime = 0;
        }
        else {
            for (d = 2; d <= c / 2; d++) {
                if (c % d == 0) {
                    isprime = 0;     
               break;
                }
            }
        }
        if (isprime == 1) {
            if (count == 0) {
                printf("Prime numbers: ");
            }
          printf("%d ", c);
            count++;
        }
    }
    if (count == 0) {
        printf("No prime numbers found.\n");
    }
    else {
        printf("\nTotal primes: %d\n", count);
    }


    
    return 0;
}
