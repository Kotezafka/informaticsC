#include <stdio.h>

#define a printf("line: %d\n", __LINE__)

int read(int *arr);
void quicksort(int *arr, int L, int R);
void bubbles(int *arr);
int array_output(int *arr);

int main() {
  int arr[10] = {0};

  int res_red = read(arr);

  if (res_red == 0) {
    return 0;
  }

  quicksort(arr, 0, 9);
  array_output(arr);
  printf("\n");
  bubbles(arr);
  array_output(arr);
}


int read(int *arr) {
  int num = 0;

  for (int i = 0; i < 10; ++i) {
    char c;

    if (scanf("%d", &num) != 1) {
      printf("n/a");
      return 0;
    }
    c = getchar();

    if (c != '\n' && c != ' ') {
      printf("n/a");
      return 0;
    }

    arr[i] = num;
  }
  return 1;
}


void quicksort(int *arr, int L, int R)
{
  int i, j, bar, tmp;
  i = L;
  j = R;
  bar = arr[(L+R)/2];
  
  do
  {
    while(arr[i] < bar)
    { 
      ++i;
    }
    while (bar < arr[j])
    {
      --j;
    }

    if(i <= j)
    {
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;

      ++i;
      --j;
    }
  } while(i <= j);

  if(L < j)
  {
    quicksort(arr, L, j);
  }
  if(i < R)
  {
    quicksort(arr, i, R);
  }
}


void bubbles(int *arr)
{
  int i = 0,
      flag = 0;
  int j, tmp;

  do 
  {
    flag = 0;
    for(j = 10-2; j >= i; --j)
    {
      if (arr[j] > arr[j+1])
      {
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
        flag = 1;
      }
      ++i;
    }
  }
  while (flag);
}


int array_output(int *arr) {

  for (int i = 0; i < 9; ++i) {
    printf("%d ", arr[i]);
  }

  printf("%d", arr[9]);

  return 0;
}
