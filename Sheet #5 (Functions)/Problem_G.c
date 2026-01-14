(G)
  a. #include <stdio.h>
int N;
int A[1000];

void findMinMax() {
    scanf("%d", &N);
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);

    int min = A[0];//no parameters no return value 
    int max = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < min) min = A[i];
        if (A[i] > max) max = A[i];
    }
    printf("%d %d\n", min, max);
}

int main() {
    findMinMax();
    return 0;
}

b. #include <stdio.h>
  //with parameters no return value 
  void findMinMax(int N, int A[]) {
    int min = A[0];
    int max = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < min) min = A[i];
        if (A[i] > max) max = A[i];
    }
    printf("%d %d\n", min, max);
}

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);
    findMinMax(N, A);
    return 0;
}

c. #include <stdio.h>
//no parameters with return value 
int N;
int A[1000];

int findMinMax() {
    scanf("%d", &N);
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);

    int min = A[0];
    int max = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < min) min = A[i];
        if (A[i] > max) max = A[i];
    }
    printf("%d %d\n", min, max);
    return 0;
}

int main() {
    findMinMax(); 
    return 0;
}

d. #include <stdio.h>
  //with parameters with return value 
int findMinMax(int N, int A[]) {
    int min = A[0];
    int max = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < min) min = A[i];
        if (A[i] > max) max = A[i];
    }
    printf("%d %d\n", min, max);
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);
    findMinMax(N, A);
    return 0;
}
