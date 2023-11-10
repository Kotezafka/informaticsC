#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
    
}

int main()
{
    int a = 0,
        b = 0,
        m = 0;

    scanf("%d%d", &a, &b);

    m = max(a, b);

    printf("%d\n", m);
}
