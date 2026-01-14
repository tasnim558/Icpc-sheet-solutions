#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

  
    while (n % 2 == 0) {
        n = n / 2;
    }

    if (n == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
