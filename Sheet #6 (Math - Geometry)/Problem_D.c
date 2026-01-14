#include <stdio.h>

int main() {
    long long A, B, Q;
    scanf("%lld %lld %lld", &A, &B, &Q);

    long long ans;

    if (Q % 3 == 1)
        ans = A;
    else if (Q % 3 == 2)
        ans = B;
    else
        ans = A ^ B;  // XOR

    printf("%lld\n", ans);

    return 0;
}
