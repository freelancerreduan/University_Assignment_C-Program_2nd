#include <stdio.h>
int main() {

     // Student ID:  42260203340

     int a, b;
     printf("Enter 1st integer: \n");
     scanf("%d", &a);
     printf("Enter 2nd integer: \n");
    scanf("%d", &b);

    printf("============ Output =============\n");
    printf("Sum : %d\n", a + b);
    printf("Difference : %d\n", a - b);
    printf("Product : %d\n", a * b);
    printf("Quotient : %d\n", a / b);
    printf("Remainder : %d\n", a % b);
    printf("Exact Div : %.2f\n", (float)a / b);

    return 0;
}