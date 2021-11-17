/*Leia um valor inteiro, que � o tempo de dura��o em segundos de um determinado evento em uma f�brica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada cont�m um valor inteiro N.

Sa�da
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
