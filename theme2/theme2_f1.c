#include <stdio.h>

void max_of_three(int a, int b, int c, int* pm)
{
    int max = 0;
    max = a;

    if (max < b)
    {
        max = b;
    }
    if (max < c)
    {
        max = c;
    }

    *pm = max;
}

int main()
{
    int a = 0,
        b = 0,
        c = 0,
        m = 0;

    scanf("%d%d%d", &a, &b, &c);

    max_of_three(a, b, c, &m);

    printf("%d\n", m);
}
