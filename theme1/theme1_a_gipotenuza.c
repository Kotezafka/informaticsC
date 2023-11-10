#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0, 
           b = 0,   
           c = 0;

    scanf("%lf", &a);
    scanf("%lf", &b);

    c = sqrt(a * a + b * b);

    printf("%lf\n", c); 
}
