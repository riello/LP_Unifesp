/*Voc� deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos 
([0,25], (25,50], (50,75], (75,100]) este valor se encontra. 
Obviamente se o valor n�o estiver em nenhum destes intervalos, dever� ser impressa a mensagem �Fora de intervalo�.

O s�mbolo ( representa "maior que". Por exemplo:
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.
(25,50] indica valores maiores que 25 Ex: 25.00001 at� o valor 50.0000000*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1037

int main(){
	float x;
	scanf("%f", &x);
	if(x<0 || x>100.0){
		printf("Fora de intervalo\n");
	}
	else if(x<=25.0){
		printf("Intervalo [0,25]\n");
	}
	else if(x<=50.0){
		printf("Intervalo (25,50]\n");
	}
	else if(x<=75.0){
		printf("Intervalo (50,75]\n");
	}
	else if(x<=100.0){
		printf("Intervalo (75,100]\n");
	}
	return 0;
}

