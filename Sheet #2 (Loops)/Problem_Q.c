#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for(int t = 0; t < T; t++) {
        long long N;
        scanf("%lld", &N);
        if(N == 0) {
            printf("0");
        } else {
            while(N > 0) {
                printf("%d", N % 10);
                N /= 10;
                if(N > 0) printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
