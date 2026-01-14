#include <stdio.h>
#include <string.h>

int main() {
    char N[10005];      
    long long X;
    scanf("%s %lld", N, &X);

    long long rem = 0;
    int len = strlen(N);

    for(int i = 0; i < len; i++) {
        rem = (rem * 10 + (N[i] - '0')) % X;
    }

    if(rem == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
