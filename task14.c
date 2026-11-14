
#include <stdio.h>

int main() {

    // Id: 42260203340

    int a, b, temp;
    int num1, num2;
    int gcd, lcm;

    printf("Enter 2 number: ");
    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (num1 * num2) / gcd;

    printf("============ Output =============\n");

    printf("GCD Result 1: %d\n", gcd);
    printf("LCM Result : %d\n", lcm);

    return 0;
}
