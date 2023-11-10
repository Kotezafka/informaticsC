#include <stdio.h>

void calculate_sum_geometric_progression(long double a, long long int n)
{
    long double sum = 1.0;
    for (long long int i = 1; i < n + 1; ++i)
    {
        sum += a;
        a *= a;
    }
    printf("%Lf\n", sum);
}

void sum_geometric_progression()
{
    long double a = 0;
    long long int n = 0;

    scanf("%Le%lld", &a, &n);

    calculate_sum_geometric_progression(a, n);
}

int main()
{
    sum_geometric_progression();
}
