#include <stdio.h>

void input (int *arr, int *n, int *c);
void output (int *arr, int n);
int shift_by_c_elements(int *arr, int n, int c);


int main()
{
    int arr[10];
    int n,
        c = 0;
    
    input(arr, &n, &c);

    if(n == -1)
    {
        printf("n/a");
        return 0;
    }

    shift_by_c_elements(arr, n, c);

    output (arr, n);

    return 0;
}


void input (int *arr, int *n, int *c)
{
    if (scanf("%d", n) != 1 || *n == 0 || *n > 10)
    {
        *n = -1;
        return;
    }
    
    int *p;
    
    for (p = arr; p - arr < *n; ++p)
    {
        if (scanf("%d", p) != 1)
        {
            *n = -1;
            return;
        }
    }
    
    if (p - arr != *n) 
    {
        *n = -1;
        return;
    }
    else
    {
        scanf("%d", c);
        return;
    }
}


void output(int *arr, int n)
{
    for (int i = 0; i < n - 1; ++i) 
    {
        printf("%d ", arr[i]);  
    }
        
    printf("%d", arr[n-1]);
}


int shift_by_c_elements(int *arr, int n, int c)
{
    int tmp1, tmp2;

    if (c == 0)
    {
        return 0;
    }

    if (c < 0)
    {
        c = -c;
        for(int i = 0; i < c; ++i)
        {
            for (int j = 2; j < n; ++j)
            {
                tmp1 = arr[1];
                arr[1] = arr[j];
                arr[j] = tmp1;
            }

            tmp2 = arr[0];
            arr[0] = arr[1];
            arr[1] = tmp2;
        }
    }

    else
    {
        for(int i = 0; i < c; ++i)
        {
            for (int j = n-3; j >= 0; --j)
            {
                tmp1 = arr[n-2];
                arr[n-2] = arr[j];
                arr[j] = tmp1;
            }

            tmp2 = arr[n-1];
            arr[n-1] = arr[n-2];
            arr[n-2] = tmp2;
        }
    }

    return 0;
}
