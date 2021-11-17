/*Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. 
Para isso, ele gostaria que você o auxiliasse através de um simples programa. 
Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). 
Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.

Entrada
O arquivo de entrada contém dois inteiros. O primeiro é o tempo gasto na viagem (em horas) e o segundo é a velocidade média durante a mesma (em km/h).

Saída
Imprima a quantidade de litros necessária para realizar a viagem, com três dígitos após o ponto decimal*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1017

int main(){
	
	int t, v;
	scanf("%d%d", &t, &v);
	
	double litros;
	
	litros = (v*t)/12.0;
	
	if (t<0 || v<0){
		
		return 0;
		
	}
	
	else{
		
		printf("%.3lf\n", litros);
		
	}
	
	return 0;
	
}
