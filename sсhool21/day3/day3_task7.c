#include <stdio.h>

int check_for_inclusion_in_circle(int x, int y);

int main()
{
    float x = 0,
          y = 0;
    int   include = 0;   

    if (scanf("%e%e", &x, &y) != 2 || (getchar() != '\n'))
    {
        printf("n/a");
        return 0;
    }
    include = check_for_inclusion_in_circle(x, y);

    if (include == 1)
    {
        printf("%s", "GOTCHA");
    }
    else if (include == 0)
    {
        printf("%s", "MISS");
    }
    
    return 0;
}

int check_for_inclusion_in_circle(int x, int y)
{
    if (x < 5 && x > -5 && y < 5 && y > -5)
        return 1;
    return 0;
}
