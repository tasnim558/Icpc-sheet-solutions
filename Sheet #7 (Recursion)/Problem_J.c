#include <stdio.h>

int fibo(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);

    int result = fibo(n);
    printf("%d\n", result);

    return 0;
}
Problem o
