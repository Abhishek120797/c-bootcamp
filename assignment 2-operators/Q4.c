// Write a program to swap values of two int variables without using a third variable

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers:\na= ");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a=%d and b=%d", a, b);
    return 0;
}