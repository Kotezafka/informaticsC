#include <stdio.h>
#include <math.h>

int calculate_min_divisor(int x)
{
    int i = 2;
    while (i < sqrt(x) + 1)
    {
        if (x % i == 0)
        {
            return i;
        }
        i += 1;
    }
    return x;
}

void min_divisor()
{
    int x = 0,
        m = 0;

    scanf("%d", &x);

    m = calculate_min_divisor(x);
    printf("%d\n", m);
} 

int main()
{
    min_divisor();
}
