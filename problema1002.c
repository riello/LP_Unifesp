#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double r, p, area;
    p = 3.14159;
    scanf ("%lf", &r);
    area = p*r*r;
    printf ("A=%.4lf\n", area);
    return 0;
}
