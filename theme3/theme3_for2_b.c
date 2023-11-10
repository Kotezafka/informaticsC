#include <stdio.h>

void calculate_remainder1(int a, int b, int c, int d)
{
    for (int i = a; i < (b + 1); ++i)
    {
        if (i % d == c)
        {
            printf("%d ", i);
        } 
    }
}

void remainder1()
{
    int a = 0,
        b = 0,
        c = 0,
        d = 0;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    calculate_remainder1(a, b, c, d);
} 

int main()
{
    remainder1();
}
