#include <stdio.h>

int calculate_number_of_zeros(int n)
{
    int m = 0,
        z = 0;

    for (int i = 1; i < n + 1; ++i)
    {
        scanf("%d", &m);
        if (m == 0)
        {
            z += 1;
        }
    }
    return z;
}

void number_of_zeros()
{
    int n = 0,
        t = 0;

    scanf("%d", &n);

    t = calculate_number_of_zeros(n);
    printf("%d\n", t);
} 

int main()
{
    number_of_zeros();
}
