/*------------------------------------
  Здравствуй, человек!
  Чтобы получить ключ 
  поработай с комментариями.
-------------------------------------*/

#include <stdio.h>

void input (int *buffer, int *length);
void output (int *buffer, int length);
int sum_numbers(int *buffer, int length);
int find_numbers(int* buffer, int length, int number, int *numbers);

/*------------------------------------
  Функция получает массив данных 
  через stdin.
  Выдает в stdout особую сумму
  и сформированный массив 
  специальных элементов
  (выбранных с помощью найденной суммы):
  это и будет частью ключа
-------------------------------------*/
int main()
{
    int length, buffer[10];
    int number, numbers[10];
    
    input(buffer, &length);
    
    if (length == -1)
    {
        printf("n/a");
        return 0;
    }

    number = sum_numbers(buffer, length);
    printf("%d\n", number);
    
    find_numbers(buffer, length, number, numbers);

    output(numbers, length);

    return 0;
}


void input (int *buffer, int *length)
{
    if (scanf("%d", length) != 1 || *length == 0 || *length > 10)
    {
        *length = -1;
        return;
    }
    
    int *p;
    
    for (p = buffer; p - buffer < *length; ++p)
    {
        if (scanf("%d", p) != 1)
        {
            *length = -1;
            return;
        }
    }
    
    if (p - buffer != *length) 
    {
        *length = -1;
        return;
    }
    else
    {
        return;
    }
}

/*------------------------------------
  Функция должна находить
  сумму четных элементов 
  с 0-й позиции.
-------------------------------------*/
int sum_numbers(int *buffer, int length)
{
  int sum = 0;
  
  for (int i = 0; i < length; ++i)
  {
    if (buffer[i] % 2 == 0)
    {
      sum += buffer[i];
    }
  }
  
  return sum;
}

/*------------------------------------
  Функция должна находить
  все элементы, на которые нацело
  делится переданное число и
  записывает их в выходной массив.
-------------------------------------*/
int find_numbers(int* buffer, int length, int number, int *numbers)
{
    for (int i = 0; i < length; ++i)
    {
        if (buffer[i] == 0)
        {
            continue;
        }
        if (number % buffer[i] == 0)
        {
            numbers[i] = buffer[i];
        }
        else
        {
            numbers[i] = 0;
        }
    }
    return 0;
}


void output(int *buffer, int length)
{
    

    for (int i = 0; i < length - 1; ++i) {
        if (buffer[i] != 0)
        {
            printf("%d ", buffer[i]);
        }
    }
    
    if (buffer[length - 1] != 0)
    {
        printf("%d", buffer[length-1]);
    }
}