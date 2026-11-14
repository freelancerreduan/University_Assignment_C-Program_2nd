
#include <stdio.h>

int main() {

    // ID: 42260203340

    double C, F;
     printf("Enter temperature in Celsius: ");
    scanf("%lf", &C);
     printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &F);

    double convertedF = C * 9.0 / 5 + 32;
    double convertedC = (F - 32) * 5.0 / 9;

    printf("============ Output =============\n");
    printf("%.2lf C = %.2lf F\n", C, convertedF);
    printf("%.2lf F = %.2lf C\n", F, convertedC);

    return 0;
}
