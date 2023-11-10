#include <stdio.h>
#include <stdlib.h>

int read(int **arr, int *n);

void sorting_by_inserts(int *arr, int n);

int array_output(int *arr, int n);

int main()
{
    int *arr = NULL;
    int n = 0;

    int res_red = 0;
    
    res_red = read(&arr, &n);
    if (res_red == 0)
    {
        return 0;
    }
        
    sorting_by_inserts(arr, n);
    array_output(arr, n);

    free(arr);
}

int read(int **arr, int *n)
{
    int num = 0;
    
    if (scanf("%d", n) != 1)
    {
        printf("n/a");
        return 0;
    }
    
    if (n == 0)
    {
        printf("n/a");
        return 0;
    }

    *arr = (int *)calloc((long unsigned int)*n, sizeof(int));

    for(int i = 0; i < *n; ++i)
    {
        char c;

        if(scanf("%d", &num) != 1)
        {
            printf("n/a");
            return 0;
        }
        c = getchar();

        if(c != '\n' && c != ' ')
        {
            printf("n/a");
            return 0;
        }

        (*arr)[i] = num; 
    }
    return 1;
}

void sorting_by_inserts(int *arr, int n)
{
    for(int j = 1; j < n; ++j)
    {
        int k = j;

        while (k > 0 && arr[k-1] > arr[k])
        {
            int tmp = arr[k-1];
            arr[k-1] = arr[k];
            arr[k] = tmp;

            k -= 1;
        }
    }
    return;
}

int array_output(int *arr, int n)
{
    for(int i = 0; i < n-1; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("%d", arr[n-1]);

    return 0;
}