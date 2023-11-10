#include <stdio.h>


int sum(int a, int b);
int difference(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

/*проверим следующие варианты:
целое целое 4 5 (9 -1 20 0), 5 4 (9 1 20 1)
буквенное ааа 3 (n/a), 5 ввв (n/a), ааа ааа (n/a)
нецелые 3 5.4 (n/a), 6.5 9 (n/a), 4.5 9.3 (n/a)
отрицательные -3 9 (6 -12 -27 0), 9 4 (13 5 36 2)*/

int main()
{
    int a = 0,
        b = 0,
        sum_num = 0,
        diff_num = 0,
        mult = 0,
        div = 0;    


    if (scanf("%d%d", &a, &b) != 2 || (getchar() != '\n'))
    {
        printf("n/a");
        return 0;
    }

    sum_num = sum(a, b);
    diff_num = difference(a, b);
    mult = multiplication(a, b);

    printf("%d %d %d ", sum_num, diff_num, mult);

    if (b == 0)
    {
        printf("n/a");
    }
    else
    {
        div = division(a, b);
        printf("%d", div);
    }
    
    return 0;
}

int sum(int a, int b)
{
    int sum_num = a + b;
    return sum_num;
}

int difference(int a, int b)
{
    int diff_num = a - b;
    return diff_num;
}

int multiplication(int a, int b)
{
    int mult = a * b;
    return mult;
}

int division(int a, int b)
{
    int div = a / b;
    return div;
}
