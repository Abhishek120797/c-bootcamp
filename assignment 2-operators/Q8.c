// Write a program to check whether the given number is even or odd using a bitwise
// operator.

#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    i = num & 1;
    if (i == 1)
        printf("Odd number");
    else
        printf("even number");
    return 0;
}