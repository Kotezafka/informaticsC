#include <stdio.h>

#include <math.h>

void calculate_square_number(int n)
{
    int t = 0,
        i = 1;

    t = sqrt(n);
    while(i <= t)
    {
        printf("%d\n", i * i);
        i += 1;
    }
}

void square_number()
{
    int n = 0;

    scanf("%d", &n);

    calculate_square_number(n);
} 

int main()
{
    square_number();
}
