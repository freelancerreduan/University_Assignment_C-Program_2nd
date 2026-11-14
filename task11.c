
#include <stdio.h>

int main() {

    // Id: 42260203340

    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("============ Output =============\n");

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
