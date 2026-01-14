(D)
a.#include <stdio.h>
  #include <math.h>

long long N; // global variable

void isPrime() { // no parameter, no return
    if (N <= 1) { printf("NO\n"); return; }
    if (N == 2) { printf("YES\n"); return; }
    if (N % 2 == 0) { printf("NO\n"); return; }

    for (long long i = 3; i*i <= N; i += 2) {
        if (N % i == 0) { printf("NO\n"); return; }
    }
    printf("YES\n");
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%lld", &N);
        isPrime();
    }
    return 0;
}

b.#include <stdio.h>
#include <math.h>

void isPrime(long long n) { // parameter, no return
    if (n <= 1) { printf("NO\n"); return; }
    if (n == 2) { printf("YES\n"); return; }
    if (n % 2 == 0) { printf("NO\n"); return; }

    for (long long i = 3; i*i <= n; i += 2) {
        if (n % i == 0) { printf("NO\n"); return; }
    }
    printf("YES\n");
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long N;
        scanf("%lld", &N);
        isPrime(N);
    }
    return 0;
}

c.#include <stdio.h>
  #include <math.h>

long long N; // global variable

int isPrime() { // no parameter, with return
    if (N <= 1) return 0;
    if (N == 2) return 1;
    if (N % 2 == 0) return 0;

    for (long long i = 3; i*i <= N; i += 2) {
        if (N % i == 0) return 0;
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%lld", &N);
        if (isPrime()) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

d. #include <stdio.h>
   #include <math.h>

int isPrime(long long n) { // parameter + return
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (long long i = 3; i*i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long N;
        scanf("%lld", &N);
        if (isPrime(N)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
