#include <stdio.h>

int main() {
    int n;
    long long a[100005]; 
    long long sum = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    if(sum < 0) {
        sum = -sum;
    }
    printf("%lld\n", sum);
    
    return 0;
}
