#include <stdio.h>

void  calculate_sum(long long int n)
{
    long double sum1 = 0.0;
    for (long long int i = 1; i < n + 1; ++i)
    {
        sum1 += 1.0 / (i * i);
    }
    printf("%Lf\n", sum1);
}

void sum()
{
    long long int n = 0;

    scanf("%lli", &n);

    calculate_sum(n);
} 

int main()
{
    sum();
}