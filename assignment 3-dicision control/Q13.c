// Write a program to check whether a given number is divisible by 3 and divisible by 2

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0 && num % 2 == 0)
        printf("divisibal by 3 and 2");
    else
        printf("not divisibal by 3 and 2");
    return 0;
}