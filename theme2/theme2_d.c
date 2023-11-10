#include <stdio.h>


void number_sign(int x)
{
    if (x > 0)
    {
        printf("1\n");
    }
    else if (x < 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }    
}

int main()
{
    int x = 0;

    scanf("%d", &x);

    number_sign(x);
}
