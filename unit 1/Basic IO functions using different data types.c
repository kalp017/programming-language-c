#include <stdio.h>

int main() {
    int age;
    float marks;
    double salary;
    char grade;

    // Input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    // Output
    printf("\nAge = %d", age);
    printf("\nMarks = %.2f", marks);
    printf("\nSalary = %.2lf", salary);
    printf("\nGrade = %c\n", grade);

    return 0;
}
