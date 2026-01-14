#include <stdio.h>

int main() {
    long long A, B;
    char op;
    
    scanf("%lld %c %lld", &A, &op, &B);
    
    if(op == '+') {
        printf("%lld\n", A + B);
    } else if(op == '-') {
        printf("%lld\n", A - B);
    } else if(op == '*') {
        printf("%lld\n", A * B);
    } else if(op == '/') {
        printf("%lld\n", A / B);  
    }
    
    return 0;
}
