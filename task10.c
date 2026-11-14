
#include <stdio.h>

int main() {

    // Id: 42260203340

    int num, temp;
    int digit, count = 0, sum = 0;
    int reverse = 0;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {

        digit = temp % 10;

        count++;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    printf("============ Output =============\n");

    printf("Number of digits : %d\n", count);
    printf("Sum of digits : %d\n", sum);
    printf("Reversed number : %d\n", reverse);

    return 0;
}
