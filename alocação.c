#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

//Como 5000 é um número grande e eu, dentro de minhas limitações, tive de escrever um
//programa para o caso geral, basta atribuir a variável o valor correspondente


int main(){
	int *v;
	int i, n;
	scanf("%d", &n); //basta n=5000 para alocar 5000 inteiros
	
	v = (int *)(malloc (n * sizeof(int)));
	
	if(v == NULL){
		return 1;
	}
	
	printf("\n");
	
	for(i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	
	printf("\n");
	
	for(i=0; i<n; i++){
		printf("[%d] = %d\n", i, v[i]);
	}
	
	free (v);
	return 0;
}

