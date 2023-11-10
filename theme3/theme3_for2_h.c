#include <stdio.h>

void calculate_number_divisors(int x)
{
    for (int i = 1; i < ((x / 2) + 1); ++i)
    {
        if (x % i == 0)
        {
            printf("%d ", i);
        } 
    }
    printf("%d\n", x);
}

void number_divisors()
{
    int x = 0;

    scanf("%d", &x);

    calculate_number_divisors(x);
} 

int main()
{
    number_divisors();
}
