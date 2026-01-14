#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    long long a = 0, b = 1;
    
    if(N >= 1) printf("0");
    if(N >= 2) printf(" 1");
    
    for(int i = 3; i <= N; i++) {
        long long c = a + b;
        printf(" %lld", c);
        a = b;
        b = c;
    }
    
    printf("\n");
    
    return 0;
}
