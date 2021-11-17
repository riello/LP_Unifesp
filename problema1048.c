#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
    double s, ss;
    int i;
    scanf("%lf", &s);
    
    if (s >=0 && s <= 400.00) {
        ss = s * 1.15;
        i = 15;
    }
    else if (s >= 400.01 && s <= 800.00) {
        ss = s * 1.12;
        i = 12;
    }
    else if (s >= 800.01 && s <= 1200.00) {
        ss = s * 1.1;
        i = 10;
    }
    else if (s >= 1200.01 && s <= 2000.00) {
        ss = s * 1.07;
        i = 7;
    }
    else if (s > 2000.00) {
        ss = s * 1.04;
        i = 4;
    }
    printf("Novo salario: %.2lf\n", ss);
    printf("Reajuste ganho: %.2lf\n", ss-s);
    printf("Em percentual: %i %%\n", i);
    return 0;
}
