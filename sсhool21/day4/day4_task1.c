#include <stdio.h>
#include <math.h>

int check_of_division(int a, int div);
int is_prime_number(int num);
int find_max_prime_number(int a);

int main()
{
    int a = 0,
        number = 0;   

    if (scanf("%d", &a) != 1 || (getchar() != '\n'))
    {
        printf("n/a");
        return 0;
    }
    a = (int)fabs((float)a);
    number = find_max_prime_number(a);

    printf("%d", number);
    return 0;
}

int check_of_division(int a, int div)
{
    while (a > 0)
    {
        a -= div;
    }
    if (a == 0)
        return 1;
    return 0;
}

int is_prime_number(int num)
{
    for(int i = 2; i <= sqrt(num); ++i)
    {
        if (check_of_division(num, i) == 1)
            return 0;
    }
    return 1;
}

int find_max_prime_number(int a)
{
    for(int i = a - 1; i >= 2; --i)
    {
        if (check_of_division(a, i) == 1)
        {
            if (is_prime_number(i) == 1)
            {
                return i;
            }
        }
    }
    return a;
}
