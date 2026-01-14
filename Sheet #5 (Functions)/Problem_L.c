(L)
  a. #include <stdio.h>
     int n;
     int a[1000], b[1000];

// no parameter, no return
void newArray() {
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    newArray();
    return 0;
}

b. #include <stdio.h>

// with parameter, no return
void newArray(int a[], int b[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    newArray(a, b, n);
    return 0;
}

c. #include <stdio.h>

// with parameter, WITH return value
int newArray(int a[], int b[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;   
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    newArray(a, b, n);
    return 0;
}

d. #include <stdio.h>

int n;
int a[1000], b[1000];

// no parameters, WITH return value
int newArray() {
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;   
}

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    newArray();
    return 0;
}

