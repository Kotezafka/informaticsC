#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
int max(int *a, int n);
int min(int *a, int n);
double mean(int *a, int n);
double variance(int *a, int n);

void output_result(int max_v, int min_v, double mean_v, double variance_v);

int main() {
  int n, data[NMAX];

  if (input(data, &n) == 0) {
    printf("n/a");
    return 0;
  }

  output(data, n);
  output_result(max(data, n), min(data, n), mean(data, n), variance(data, n));

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

void output(int *a, int n) {
  for (int i = 0; i < n - 1; ++i) {
    printf("%d ", a[i]);
  }
  printf("%d\n", a[n - 1]);
}

int max(int *a, int n) {
  int max_v = 0;

  max_v = a[0];

  for (int i = 1; i < n; ++i) {
    if (a[i] > max_v) {
      max_v = a[i];
    }
  }

  return max_v;
}

int min(int *a, int n) {
  int min_v = 0;

  min_v = a[0];

  for (int i = 1; i < n; ++i) {
    if (a[i] < min_v) {
      min_v = a[i];
    }
  }

  return min_v;
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

void output_result(int max_v, int min_v, double mean_v, double variance_v) {
  printf("%d %d %.6f %.6f", max_v, min_v, mean_v, variance_v);
}
