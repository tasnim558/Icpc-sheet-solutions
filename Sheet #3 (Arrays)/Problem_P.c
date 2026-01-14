#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int min_ops = 1000000000;  
    
    for(int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        int cnt = 0;
        while(x % 2 == 0) {
            x /= 2;
            cnt++;
        }
        if(cnt < min_ops) min_ops = cnt;
    }
    
    printf("%d\n", min_ops);
    
    return 0;
}
