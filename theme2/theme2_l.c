#include <stdio.h>

#define or ||
#define and &&

#include <stdlib.h>

void break_off_the_slices(int length, int width, int slice)
{
    if ((slice % length == 0 or slice % width == 0) and length * width >= slice)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }    
}

int main()
{
    int length = 0,
        width = 0,
        slice = 0;

    scanf("%d%d%d", &length, &width, &slice);

    break_off_the_slices(length, width, slice);
}
