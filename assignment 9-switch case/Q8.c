// Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num >= 0)
    {
    case 1:
        num = num - num * 2;
        break;
    case 0:
        num = num - num * 2;
        break;
    }
    printf("%d", num);
    return 0;
}