// Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user

#include <stdio.h>
int main()
{
    int num[10], sum = 0;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("Average is %.2f", sum / 10.0);
    return 0;
}