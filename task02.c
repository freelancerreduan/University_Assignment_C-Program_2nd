#include <stdio.h>

int main()
{
    int age;
    float height;
    char grade;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter grade letter: ");
    scanf(" %c", &grade);      // %c এর আগে স্পেস: আগের Enter বাদ দিতে

    printf("Age       : %d\n", age);
    printf("Height    : %.1f\n", height);   // .1 মানে দশমিকের পর ১ ঘর
    printf("Next grade: %c\n", grade + 1);  // char-এর সাথে যোগ করা যায়
    printf("Code value: %d\n", grade);      // char কে %d দিয়ে ছাপলে ASCII মান আসে

    return 0;
}