#include <stdio.h>
#include <math.h>

float function_value(int x);
float get_degree(float x, int deg);

int main()
{
    float x = 0,
          res_func = 0;    

    if (scanf("%e", &x) != 1 || (getchar() != '\n'))
    {
        printf("n/a");
        return 0;
    }
    res_func = function_value(x);

    printf("%.1f", res_func);
    
    return 0;
}

float function_value(int x)
{
    // float y = 7 * get_degree(10, -3) * get_degree(x, 4) + ((22.8 * get_degree(x, -3) - get_degree(10, 3)) * x + 3) / (get_degree(x, 2) / 2) - x * get_degree(10 + x, 2 / x) - 1.01;
    float y = 7 * pow(10, -3) * pow(x, 4) + ((22.8 * pow(x, -3) - pow(10, 3)) * x + 3) / (pow(x, 2) / 2) - x * pow(10 + x, 2 / x) - 1.01;
    
    return y;
}

// float get_degree(float x, int deg)
// {
//     if (deg == 0)
//         return 1;

//     float mult = 1;
//     for (int i = 0; i < fabs(deg); ++i)
//     {
//         mult *= x;
//     }
//     if (deg < 0)
//     {
//         return 1 / mult;
//     }
//     return mult;
// }
