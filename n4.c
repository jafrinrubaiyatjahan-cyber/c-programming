#include <stdio.h>

double Add(double a, double b) {
    return a + b;
}

int main() {
    double a = 1.5;
    double b = 2.5;
    double result;

    result = Add(a, b);

    printf("%lf\n", result);

    return 0;
}
