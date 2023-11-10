#include <stdio.h>

void sum_numbers(int num_1, int num_2, int *sum);

int main() {
  int a, b, sum;

  scanf("%d%d", &a, &b);

  sum_numbers(a, b, &sum);
  printf("%d", sum);

  return 0;
}

void sum_numbers(int num_1, int num_2, int *sum) { *sum = num_1 + num_2; }
