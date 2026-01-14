#include <stdio.h>
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    long long A, B;
    scanf("%lld %lld", &A, &B);

    long long g = gcd(A, B);         
    long long l = (A / g) * B;       

    printf("%lld %lld\n", g, l);

    return 0;
}
