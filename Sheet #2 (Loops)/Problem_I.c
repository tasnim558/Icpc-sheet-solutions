#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);
    
    long long original = N;
    long long reversed = 0;
    while(N > 0) {
        reversed = reversed * 10 + N % 10;
        N /= 10;
    }
    printf("%lld\n", reversed);
    if(reversed == original) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
