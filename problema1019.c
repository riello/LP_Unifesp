/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1019

int main(){
	
	int t, s, m, h;
	scanf("%d", &t);
	
	s = t;
	
	h = s/3600;
	
	s = s-(h*3600);
	
	m = s/60;
	
	s = s-(m*60);
	
	if (t<0){
		
		return 0;
		
	}
	
	else{
		
		printf("%d:%d:%d\n", h, m, s);
		
	}
	
	return 0;
	
}
