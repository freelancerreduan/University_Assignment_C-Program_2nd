
#include <stdio.h>
int main() {

    // ID: 42260203340

    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("============ Output =============\n");
    for (i = 1; i <= n; i++) {


        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
