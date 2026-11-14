#include <stdio.h>

int main()
{


    // Student ID:  42260203340

    int Integer;
    float Float;
    char Character;

    printf("Enter Integer: ");
    scanf("%d", &Integer);

    printf("Enter Float: ");
    scanf("%f", &Float);

    printf("Enter Character: ");
    scanf(" %c", &Character);

    printf("============ Output =============\n");

    printf("Integer: %d\n", Integer);
    printf("Float: %.2f\n", Float);
    printf("Character: %c\n", Character);
    printf("ASCII Value : %d\n", Character);


    return 0;
}