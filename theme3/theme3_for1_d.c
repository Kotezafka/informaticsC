#include <stdio.h>

void calculate_number_of_ways_to_choose_K_from_N_different_items(int n, int k)
{
    int fact1 = 1,
        fact2 = 1,
        fact3 = 1,
        difference = 0,
        c = 0;
    for (int i = 1; i < n + 1; ++i)
    {
        fact1 *= i;
    } 
    for (int i = 1; i < k + 1; ++i)
    {
        fact2 *= i;
    }
    difference = n - k;
    for (int i = 1; i < difference + 1; ++i)
    {
        fact3 *= i;
    }
    c = fact1 / (fact2 * fact3);
    printf("%d\n", c);

}

void number_of_ways_to_choose_K_from_N_different_items()
{
    int n = 0,
        k = 0;
    
    scanf("%d%d", &n, &k);

    calculate_number_of_ways_to_choose_K_from_N_different_items(n, k);
}

int main()
{
    number_of_ways_to_choose_K_from_N_different_items();
}
