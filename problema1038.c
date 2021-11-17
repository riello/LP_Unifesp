/*Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. 
A seguir, calcule e mostre o valor da conta a pagar.
CODIGO        ESPECIFICAÇÃO        PREÇO
1            Cachorro Quente       R$4.00
2               X-Salada           R$4.50
3               X-Bacon            R$5.00
4            Torrada Simples       R$2.00
5             Refrigerante         R$1.50
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1038

int main(){
	int x, y;
	double t;
	scanf("%d%d", &x, &y);
	switch(x){
		case 1: t=4*y;
		break;
		case 2: t=4.5*y;
		break;
		case 3: t=5*y;
		break;
		case 4: t=2*y;
		break;
		case 5: t=1.5*y;
		break;
		default: break;
	}
	printf("Total: R$ %.2lf", t);
	
}
