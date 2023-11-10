// #include <stdio.h>

// int main()
// {
//     int a = 0;
//     scanf("%d", &a);

//     int b = 0;

//     for(int i = 0; i < a; ++i)
//     {
//         scanf("%d", &b);
//         b *= b;
//         printf("%d", b);
//     }
// }


#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int arr[1000] = {0};

    for(int i = 0; i < a - 1; ++i)
    {
        scanf("%d", &arr[i]);
        arr[i] *= arr[i];

        printf("%d ", arr[i]);
    }

    scanf("%d", &arr[a-1]);
    arr[a-1] *= arr[a-1];

    printf("%d", arr[a-1]);
}

