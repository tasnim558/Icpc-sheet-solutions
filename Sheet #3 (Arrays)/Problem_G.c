#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int first = 0;
    int last = n - 1;
    
    while(first < last) {
        if(a[first] != a[last]) {
            printf("NO\n");
            return 0;
        }
        first++;
        last--;
    }
    
    printf("YES\n");
    
    return 0;
}
