#include <stdio.h>
#include <math.h>

int main() {
    long long N;
    scanf("%lld", &N);

    long long sum = 0;

    for(long long i = 1; i * i <= N; i++) {
        if(N % i == 0) {
            sum += i;
            if(i != N / i) {  
                sum += N / i;
            }
        }
    }

    printf("%lld\n", sum);

    return 0;
}
