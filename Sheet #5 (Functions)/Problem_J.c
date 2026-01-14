(J)
  a. #include <stdio.h>
   int n;
double a[10000];
// no parameter, no return
void findAverage() {
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    printf("%.7f", sum / n);
}

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    findAverage();
    return 0;
}


b. #include <stdio.h>
// with parameter, no return
void findAverage(double a[], int n) {
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    printf("%.7f", sum / n);
}

int main() {
    int n;
    scanf("%d", &n);

    double a[n];
    for(int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    findAverage(a, n);
    return 0;
}

c. #include <stdio.h>

int n;
double a[10000];

// no parameter, with return
double findAverage() {
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    double avg = findAverage();
    printf("%.7f", avg);

    return 0;
}


d. #include <stdio.h>

// with parameter, with return
double findAverage(double a[], int n) {
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}

int main() {
    int n;
    scanf("%d", &n);

    double a[n];
    for(int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    double avg = findAverage(a, n);
    printf("%.7f", avg);

    return 0;
}
