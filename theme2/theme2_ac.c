#include <stdio.h>

#define or ||
#define and &&

void even_number(int number1, int number2, int number3)
{
    if ((number1 % 2 == 0 and number2 % 2 == 0 and number3 % 2 == 0) or (number1 % 2 != 0 and number2 % 2 != 0 and number3 % 2 != 0))
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }    
}

int main()
{
    int number1 = 0,
        number2 = 0,
        number3 = 0;

    scanf("%d%d%d", &number1, &number2, &number3);

    even_number(number1, number2, number3);
}
