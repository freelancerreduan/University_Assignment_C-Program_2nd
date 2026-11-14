
#include <stdio.h>

int main() {

    // Id: 42260203340

    int num, count = 0, sum = 0;
    double average;

    printf("Enter numbers (0 to stop): ");
    do {
        scanf("%d", &num);
        if (num != 0) {
            sum = sum + num;
            count++;
        }
    } while (num != 0);



    printf("============ Output =============\n");
    if (count == 0) {
        printf("No numbers were entered.\n");
    }
    else {
        average = (double) sum / count;

        printf("Count : %d\n", count);
        printf("Sum : %d\n", sum);
        printf("Average : %.2lf\n", average);
    }
    return 0;
}
