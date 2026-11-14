
#include <stdio.h>

int main() {

    // ID: 42260203340

    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("============ Output =============\n");

    if (marks < 0 || marks > 100) {
        printf("Invalid marks.\n");
    }
    else if (marks >= 80) {
        printf("Marks : %d\n", marks);
        printf("Grade : A+\n");
    }
    else if (marks >= 70) {
        printf("Marks : %d\n", marks);
        printf("Grade : A\n");
    }
    else if (marks >= 60) {
        printf("Marks : %d\n", marks);
        printf("Grade : B\n");
    }
    else if (marks >= 50) {
        printf("Marks : %d\n", marks);
        printf("Grade : C\n");
    }
    else if (marks >= 40) {
        printf("Marks : %d\n", marks);
        printf("Grade : D\n");
    }
    else {
        printf("Marks : %d\n", marks);
        printf("Grade : F\n");
    }

    return 0;
}
