
#include <stdio.h>

int main() {

    // ID: 42260203340

    int rows, columns;
    int i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    printf("============ Output =============\n");

    for (i = 1; i <= rows; i++) {

        for (j = 1; j <= columns; j++) {

            printf("%3d", i * j);
        }

        printf("\n");
    }

    return 0;
}
