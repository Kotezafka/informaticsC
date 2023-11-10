#include <stdio.h>

void  calculate_degree(int n)
{
    int expression = 1;
    for (int i = 1; i < n + 1; ++i)
    {
        expression *= 2;
    }
    printf("%d\n", expression);
}

void degree()
{
    int n = 0;

    scanf("%d", &n);

    calculate_degree(n);
} 

int main()
{
    degree();
}