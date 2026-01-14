#include <stdio.h>

int main() {
    int n;
    long long a[100005];  
    long long x;
    scanf("%d", &n);
    
    
    for(int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    
    scanf("%lld", &x);
    
    
    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            printf("%d\n", i);  
            return 0;  
        }
    }
    
    printf("-1\n");
    
    return 0;
}
