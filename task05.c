
#include <stdio.h>

int main() {

    // ID: 42260203340

    double principal, rate, interest, amount;
    int time;

     printf("Enter principal amount: ");
    scanf("%lf", &principal);

     printf("Enter rate of interest: ");
    scanf("%lf", &rate);
    
    printf("Enter time in years: ");
    scanf("%d", &time);

    interest = principal * rate * time / 100;
    amount = principal + interest;

    printf("============ Output =============\n");
    printf("Simple Interest : %.2lf\n", interest);
    printf("Total Amount : %.2lf\n", amount);

    return 0;
}
