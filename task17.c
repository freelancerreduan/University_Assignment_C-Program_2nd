
#include <stdio.h>

int main() {

    // ID: 42260203340

    int L, C;
    int i, sum = 0;
    int stopped = 0;

    printf("Enter L and C: ");
    scanf("%d %d", &L, &C);

    printf("============ Output =============\n");
    printf("Numbers added: ");
    for (i = 1; i <= L; i++) {
        if (i % 2 != 1) {
         continue;
        }

        printf("%d ", i);
        sum = sum + i;

        if (sum > C) {
            stopped = 1;
     break;
        }
    }

    printf("\nTotal sum : %d\n", sum);
    if (stopped == 1) {
        printf("Loop stopped at %d because the sum exceeded %d.\n", i, C);
    }
    else {
        printf("Loop completed without exceeding the limit.\n");
    }
    return 0;
}
