#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main() {
 
    char nome;
    double fixo, vendas, total;
    scanf("%s", &nome);
    scanf("%lf%lf", &fixo, &vendas);
    total = ((0.15*vendas)+fixo);
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}
