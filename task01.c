#include <stdio.h>

int main()
{
    char Name[10];
    long long int ID;
    int semester;
    printf("Enter student name: ");
    scanf("%s", Name);   
    printf("Enter student ID: ");
    scanf("%lld", &ID);    
    printf("Enter semester: ");
    scanf("%d", &semester);

    printf("=========================\n");
    printf("        STUDENT INFORMATION CARD\n");
    printf("=========================\n");
    printf("Name    : %s\n", Name);
    printf("ID    : %lld\n", ID);
    printf("Semester  : %d\n", semester);
    printf("=========================\n");

    return 0;
}