// Write a program to print the first N even natural numbers in reverse order

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a nunmber:");
    scanf("%d", &num);
    for (int i = num; i > 0; i--)
        printf("%d ", i * 2);
    return 0;
}