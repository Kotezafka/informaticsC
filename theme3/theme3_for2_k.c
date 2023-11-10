#include <stdio.h>

int calculate_sum_of_numbers(int n)
{
    int s = 0,
        m = 0,
        i = 0;

    for (i = 1; i < n + 1; ++i)
    {
        scanf("%d", &m);
        s += m;
    }
    return s;
}

void sum_of_numbers()
{
    int n = 0,
        z = 0;

    scanf("%d", &n);

    z = calculate_sum_of_numbers(n);
    printf("%d\n", z);
} 

int main()
{
    sum_of_numbers();
}
