// Write a recursive function to print squares of first N natural numbers

#include <stdio.h>
void print_N(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    print_N(num);
    return 0;
}

void print_N(int n)
{
    if (n >= 1)
    {
        print_N(n - 1);
        printf("%d ", n * n);
    }
}