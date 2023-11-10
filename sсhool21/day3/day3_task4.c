#include <stdio.h>

/*проверим следующие варианты:
целое целое 4 5 (5), 5 4 (5)
буквенное ааа 3 (n/a), 5 ввв (n/a), ааа ааа (n/a)
нецелые 3 5.4 (n/a), 6.5 9 (n/a), 4.5 9.3 (n/a)
отрицательные -3 9 (9), 9 -4 (9)*/

int max(int a, int b);

int main()
{
    int a = 0,
        b = 0,
        mx = 0;    

    if (scanf("%d%d", &a, &b) != 2 || (getchar() != '\n'))
    {
        printf("n/a");
        return 0;
    }
    mx = max(a, b);

    printf("%d", mx);
    
    return 0;
}

int max(int a, int b)
{
    if (a > b) 
        return a;
    return b;
}
