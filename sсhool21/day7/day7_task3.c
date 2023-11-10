#include <stdio.h>



int main()
{
    int n = 0,
        elem = 0;

    scanf("%d", n);

    int amount = 0;

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", amount);
    }

    for (int k = 0; k < n; ++k)
    {
        for(int i = 0; i < amount; ++i)
        {
            for(int j = 0; j < amount; ++j)
            {
                scanf("%d", elem);
            }
        }
    }
    printf("%d", elem);
}