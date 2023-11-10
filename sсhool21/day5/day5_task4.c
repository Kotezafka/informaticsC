#include <math.h>
#include <stdio.h>
#define NMAX 30

int input(int *a, int *n);
double mean(int *a, int n);
double variance(int *a, int n);

int main() {
  int n, data[NMAX];
  double m = 0, v = 0, v_sqrt = 0;

  if (input(data, &n) == 0) {
    printf("n/a");
    return 0;
  }

  m = mean(data, n);
  v = variance(data, n);
  v_sqrt = 3 * sqrt(v);

  for (int i = 1; i < n; ++i) {
    if (data[i] % 2 == 0 && data[i] >= m && data[i] <= m + v_sqrt &&
        data[i] != 0) {
      printf("%d", data[i]);
      return 0;
    }
  }
  printf("0");
  return 0;
}

int input(int *a, int *n) {
  if (scanf("%d", n) != 1 || *n == 0 || *n > NMAX) {
    return 0;
  }

  int *p;
  for (p = a; p - a < *n; ++p) {
    if (scanf("%d", p) != 1) {
      return 0;
    }
  }
  if (p - a != *n) {
    return 0;
  } else {
    return 1;
  }
}

double mean(int *a, int n) {
  double sum_num = 0, mean_v = 0;

  for (int i = 0; i < n; ++i) {
    sum_num += a[i];
  }
  mean_v = sum_num / n;

  return mean_v;
}

double variance(int *a, int n) {
  double mean_v = 0, sum_squaring = 0, variance_v = 0;

  mean_v = mean(a, n);

  for (int i = 0; i < n; ++i) {
    sum_squaring += (a[i] - mean_v) * (a[i] - mean_v);
  }
  variance_v = sum_squaring / n;

  return variance_v;
}
