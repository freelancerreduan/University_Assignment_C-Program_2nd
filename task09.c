
#include <stdio.h>

int main() {

    // Id: 42260203340

    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("============ Output =============\n");

    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid triangle.\n");
        if (a == b && b == c) {
            printf("Type: Equilateral\n");
        }
        else {
            if (a == b || a == c || b == c) {
                printf("Type: Isosceles\n");
            }
            else {
                printf("Type: Scalene\n");
            }
        }
    }
    else {
        printf("Not a valid triangle.\n");
    }

    return 0;
}
