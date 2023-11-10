#include <stdio.h>

#define or ||

#include <math.h>
#include <stdlib.h>

void step(int a, int b, int c, int d)
{
    if (a == c or b == d or abs(c - a) == abs(d - b))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }    
}

int main()
{
    int a = 0,
        b = 0,
        c = 0,
        d = 0;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    step(a, b, c, d);
}
