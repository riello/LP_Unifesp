#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
 
    int p1, n1;
    double v1, valor;
    scanf("%d%d", &p1, &n1);
    scanf("%lf", &v1);
    
    int p2, n2;
    double v2;
    scanf("%d%d", &p2, &n2);
    scanf("%lf", &v2);
    
    valor = ((n1*v1)+(n2*v2));
    
    printf("VALOR A PAGAR: R$ %.2lf\n", valor);
 
    return 0;
}
