#include <stdio.h>

void calculate_algorithm(int a, int b)
{
    int i = 1,
        k = 0;

    k = a;

    while(k > b)
    {
        if (k % 2 == 0)
        {
            if (k / 2 > b)
            {
                k = k / 2;
                printf(":2\n");
            }
            else
            {
                k = k - 1;
                printf("-1\n");
            }
        }
        else
        {
            k = k - 1;
            printf("-1\n");
        }   
    }
}

void algorithm()
{
    int a = 0,
        b = 0;

    scanf("%d%d", &a, &b);

    calculate_algorithm(a, b);
} 

int main()
{
    algorithm();
}
