#include <stdio.h>

void calculate_even_numbers(int a, int b)
{
    for (int i = (a + a % 2); i < (b + 1); i += 2)
    {
        printf("%d ", i);
    }
    
}

void even_numbers()
{
    int a = 0,
        b = 0;

    scanf("%d%d", &a, &b);

    calculate_even_numbers(a, b);
} 

int main()
{
    even_numbers();
}
