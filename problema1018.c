/*Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. 
A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. 
Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1018

int main() {

int n, cem, cinquenta, vinte, dez, cinco, dois, um;
scanf("%d",&n);

um = n;

cem = um/100;

um = um-(cem*100);

cinquenta = um/50;

um = um-(cinquenta*50);

vinte = um/20;

um = um-(vinte*20);

dez = um/10;

um = um-(dez*10);

cinco = um/5;

um = um-(cinco*5);

dois = um/2;

um = um-(dois*2);

if(n<=0 || n>1000000){
	
	return 0;
	
}

else{

printf("%d\n",n);
printf("%d nota(s) de R$ 100,00\n", cem);
printf("%d nota(s) de R$ 50,00\n", cinquenta);
printf("%d nota(s) de R$ 20,00\n", vinte);
printf("%d nota(s) de R$ 10,00\n", dez);
printf("%d nota(s) de R$ 5,00\n", cinco);
printf("%d nota(s) de R$ 2,00\n", dois);
printf("%d nota(s) de R$ 1,00\n", um);

}

return 0;

}
