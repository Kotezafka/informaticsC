#include <stdio.h>

void calculate_min_divisor(int n)
{
    int i = 2;

    while(i <= n)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            break;
        }
        i += 1;
    }
}

void min_divisor()
{
    int n = 0;

    scanf("%d", &n);

    calculate_min_divisor(n);
} 

int main()
{
    min_divisor();
}
