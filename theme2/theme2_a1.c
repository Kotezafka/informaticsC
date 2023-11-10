#include <stdio.h>

int main()
{
    int a = 0,
        b = 0,
        m = 0;

    scanf("%d%d", &a, &b);

    if (a > b)
    {
        m = a;
    }
    else
    {
        m = b;
    }

    printf("%d\n", m); 
}
