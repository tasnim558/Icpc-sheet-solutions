#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int low = A[0];   
    int pos = 0;      

    for(int i = 1; i < N; i++) {
        if(A[i] < low) {
            low = A[i];
            pos = i;
        }
    }

    printf("%d %d", low, pos + 1); 
    return 0;
}
