#include <stdio.h>

#define or ||
#define and &&

#include <stdlib.h>

void equation_roots(int a, int b, int x, int m)
{
    if (a == 0 and b != 0)
    {
        printf("NO\n");
    }
    else if (a == 0 and b == 0)
    {
        printf("INF\n");
    }
    else if (a != 0 and b != 0 or a != 0 and b == 0)
    {
        x = -b % a;
        if (x == 0)
        {
            m = -b / a;
            printf("%d\n", m);
        }
        else
        {
            printf("NO\n");
        }
    }    
}

int main()
{
    int a = 0,
        b = 0,
        x = 0,
        m = 0;

    scanf("%d%d", &a, &b);

    equation_roots(a, b, x, m);
}
