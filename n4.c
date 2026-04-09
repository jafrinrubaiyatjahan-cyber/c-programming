#include <stdio.h>

double Add(double a, double b) {
    double c = a+b;
    return a + b;
}

int main() {
    double a = 2.2, b = 3.3;

    printf("%lf\n", Add(a, b));

    return 0;
}
