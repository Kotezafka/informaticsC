#include <stdio.h>

void sum(int n)
{
    int sum2 = 0;
    for (int i = 1; i < n + 1; ++i)
    {
        sum2 += i * i;
    }
    printf("%d\n", sum2);
}

void sum_squares()
{
    int n = 0;
    
    scanf("%d", &n);

    sum(n);
}

int main()
{
    sum_squares();
}
