#include <stdio.h>

void calculate_counting_numbers(int n)
{
    int zero = 0,
        positive_numbers = 0,
        negative_numbers = 0,
        m = 0;

    for (int i = 1; i < n + 1; ++i)
    {
        scanf("%d", &m);
        if (m == 0)
        {
            zero += 1;
        }
        if (m > 0)
        {
            positive_numbers += 1;
        }
        if (m < 0)
        {
            negative_numbers += 1;
        }
    }
    printf("%d %d %d\n", zero, positive_numbers, negative_numbers);
}

void counting_numbers()
{
    int n = 0;

    scanf("%d", &n);

    calculate_counting_numbers(n);
} 

int main()
{
    counting_numbers();
}
