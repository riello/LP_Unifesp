/*Leia um valor inteiro. A seguir, calcule o menor n�mero de notas poss�veis (c�dulas) no qual o valor pode ser decomposto. As notas consideradas s�o de 100, 50, 20, 10, 5, 2 e 1. 
A seguir mostre o valor lido e a rela��o de notas necess�rias.

Entrada
O arquivo de entrada cont�m um valor inteiro N (0 < N < 1000000).

Sa�da
Imprima o valor lido e, em seguida, a quantidade m�nima de notas de cada tipo necess�rias, conforme o exemplo fornecido. 
N�o esque�a de imprimir o fim de linha ap�s cada linha, caso contr�rio seu programa apresentar� a mensagem: �Presentation Error�.*/

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
