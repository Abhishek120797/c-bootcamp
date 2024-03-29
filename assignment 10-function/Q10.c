// Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>
void prime_fact(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime_fact(num);
    return 0;
}

void prime_fact(int num)
{
    for (int i = 2; num > 1; i++)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
    }
}