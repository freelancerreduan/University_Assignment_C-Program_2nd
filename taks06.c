
#include <stdio.h>
int main() {

    // ID: 42260203340

    int year;

     printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("============ Output =============\n");
        printf("%d is a leap year.\n", year);
    } else {
        printf("============ Output =============\n");
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
