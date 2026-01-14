#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int freq[1000005] = {0};  
    
    for(int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);
        freq[x]++;
    }
    
    for(int i = 1; i <= M; i++) {
        printf("%d\n", freq[i]);
    }
    
    return 0;
}
