#include <stdio.h>

void calculate_binary_log(int n)
{
    int i = 1,
        k = 0;

    while(i < n)
    {
        i *= 2;
        k += 1;
    }
    printf("%d\n", k);
}

void binary_log()
{
    int n = 0;

    scanf("%d", &n);

    calculate_binary_log(n);
} 

int main()
{
    binary_log();
}
