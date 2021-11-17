/*Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. 
Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. 
Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Imprima a saída conforme exemplo fornecido.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int t, a, m, d;
	scanf("%d", &t);
	
	d = t;
	a = d/365;
	d = d-(a*365);
	m = d/30;
	d = d-(m*30);
	
	if(t<0){
		
		return 0;
		
	}
	
	else{
		
		printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
		
	}
	
	return 0; 
	
}
