/*Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, 
e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a vari�vel 
A for par escrever a mensagem "Valores aceitos", sen�o escrever "Valores nao aceitos".

Entrada
Quatro n�meros inteiros A, B, C e D.

Sa�da
Mostre a respectiva mensagem ap�s a valida��o dos valores.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1035

int main(){
	
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	 if (b>c && d>a && c+d>a+b && c > 0 && d > 0 && a%2 == 0){
	 	
	 	printf("Valres aceitos\n");
	 	
	 }
	 
	 else{
	 	
	 	printf("Valores nao aceitos");
	 	
	 }
	 
	 return 0;
	 
}
