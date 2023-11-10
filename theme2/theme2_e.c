#include <stdio.h>


void largest_number(int x, int y)
{
    if (x > y)
    {
        printf("1\n");
    }
    else if (y > x)
    {
        printf("2\n");
    }
    else
    {
        printf("0\n");
    }    
}

int main()
{
    int x = 0,
        y = 0;

    scanf("%d%d", &x, &y);

    largest_number(x, y);
}
