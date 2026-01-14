(A)The function problem can be solved in four steps.
  The four steps are shown below.
  a.#include <stdio.h>
    int x, y;
// no parameter, no return
void addNumbers() {
    printf("%d", x + y);
}
int main() {
    scanf("%d %d", &x, &y);
    addNumbers();
    return 0;
}
b. #include <stdio.h>
// with parameters, no return
void addNumbers(int a, int b) {
    printf("%d", a + b);
}
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    addNumbers(x, y);
    return 0;
}

c. #include <stdio.h>
  int x, y;
// no parameters, with return
int addNumbers() {
    return x + y;
}
int main() {
    scanf("%d %d", &x, &y);
    int sum = addNumbers();
    printf("%d", sum);
    return 0;
}

d. #include <stdio.h>
// with parameters, with return
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = addNumbers(x, y);
    printf("%d", sum);
    return 0;
}
