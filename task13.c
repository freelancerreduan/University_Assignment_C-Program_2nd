
#include <stdio.h>

int main() {

    // Id: 42260203340

    int n, i;
    long long first = 0, second = 1, next;
    long long sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("============ Output =============\n");

    printf("Fibonacci series: ");

    for (i = 1; i <= n; i++) {
        printf("%lld ", first);

        sum = sum + first;

        next = first + second;
        first = second;
        second = next;
    }

    printf("\nSum of terms: %lld\n", sum);

    return 0;
}
