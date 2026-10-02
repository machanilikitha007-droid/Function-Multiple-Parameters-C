#include <stdio.h>

int calculateTotal(int marks1, int marks2, int marks3);

int main()
{
    int a, b, c, total;

    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &a, &b, &c);

    total = calculateTotal(a, b, c);

    printf("Total Marks = %d\n", total);

    return 0;
}

int calculateTotal(int marks1, int marks2, int marks3)
{
    return marks1 + marks2 + marks3;
}
