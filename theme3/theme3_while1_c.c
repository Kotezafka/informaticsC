#include <stdio.h>

void calculate_powers_of_two(int n)
{
    int i = 1;

    while(i <= n)
    {
        printf("%d ", i);
        i *= 2;
    }
    printf("\n");
}

void powers_of_two()
{
    int n = 0;

    scanf("%d", &n);

    calculate_powers_of_two(n);
} 

int main()
{
    powers_of_two();
}
