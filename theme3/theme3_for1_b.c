#include <stdio.h>

void calculate_factorial(int n)
{
    int fact = 1;
    for (int i = 2; i < n + 1; ++i)
    {
        fact *= i;
    }
    printf("%d\n", fact);
}

void factorial()
{
    int n = 0;
    
    scanf("%d", &n);

    calculate_factorial(n);
}

int main()
{
    factorial();
}
