// Write a program to print cubes of the first N natural numbers

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a nunmber:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
        printf("%d ", i * i * i);
    return 0;
}