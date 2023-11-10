#include <stdio.h>

void calculate_powers_two(int n)
{
    int i = 1,
        cnt = 0;

    while(i <= n)
    {
        if (i == n)
        {
            cnt += 1;
            printf("YES\n");
            break;
        }
        i *= 2;
    }
    if (cnt == 0)
    {
        printf("NO\n");
    }
}

void powers_two()
{
    int n = 0;

    scanf("%d", &n);

    calculate_powers_two(n);
} 

int main()
{
    powers_two();
}
