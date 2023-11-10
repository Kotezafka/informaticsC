#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);

void output(int *a, int n);

void squaring(int *a, int n);

int main() {
    int n, data[NMAX];

    if (input(data, &n) != 0) {
        squaring(data, n);
        output(data, n);
    }
    return 0;
}

int input(int *a, int *n) {
    if (scanf("%d", n) != 1 || *n == 0 || *n > NMAX) {
        printf("n/a");
        return 0;
    }

    int *p;
    for (p = a; p - a < *n; ++p) {
        if (scanf("%d", p) != 1) {
            printf("n/a");
            return 0;
        }
    }
    if (p - a != *n) {
        printf("n/a");
        return 0;
    } else {
        return 1;
    }
}

void output(int *a, int n) {
    for (int i = 0; i < n - 1; ++i) {
        printf("%d ", a[i]);
    }
    printf("%d", a[n - 1]);
}

void squaring(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        a[i] *= a[i];
    }
}
