#include <stdio.h>

#define or ||
#define and &&

void leap_year(int a)
{
    if ((a % 4 == 0 and a % 100 != 0) or a % 400 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int a = 0;

    scanf("%d", &a);

    leap_year(a);
}
