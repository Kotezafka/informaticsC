#include <stdio.h>
#include <math.h>

void calculate_number_of_divisors(long long int x)
{
    if (x == 1)
    {
        printf("%d\n", 1);
    }
    else
    {
        long long int amount = 1;
        long long int i = 0;
        for (i = 2; i < (long long int)(sqrt(x) + 1); ++i)
        {
            if (x % i == 0)
            {
                amount += 2;
            }
            // printf("amount: %ld i: %ld\n", amount, i);
        }
        if (i * i == x)
        {
            printf("%lld\n", amount);
        }
        else 
        {
            printf("%lld\n", amount + 1);
        }
    }
}

void number_of_divisors()
{
    long long int x = 0;

    scanf("%lld", &x);

    calculate_number_of_divisors(x);
} 

int main()
{
    number_of_divisors();
}
