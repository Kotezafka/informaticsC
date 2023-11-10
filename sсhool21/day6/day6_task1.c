#include <stdio.h>

int read(int *arr);

void sorting_by_inserts(int *arr);

int array_output(int *arr);

int main()
{
    int arr[10] = {0};

    int res_red = read(arr);
    if (res_red == 0)
    {
        return 0;
    }
        
    sorting_by_inserts(arr);
    array_output(arr);
}

int read(int *arr)
{
    int num = 0;
    
    for(int i = 0; i < 10; ++i)
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

        arr[i] = num; 
    }
    return 1;
}

void sorting_by_inserts(int *arr)
{
    for(int j = 1; j < 10; ++j)
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

int array_output(int *arr)
{
    for(int i = 0; i < 9; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("%d", arr[9]);

    return 0;
}