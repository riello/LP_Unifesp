#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1040

int main(){
	float n1, n2, n3, n4, ef;
	double m, mf;
	scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
	m = (2*n1+3*n2+4*n3+n4)/10.0;
	printf("Media: %.1lf\n", m);
	if(m>=7.0){
		printf("Aluno aprovado.\n");
	}
	else if(m>=5.0){
		printf("Aluno em exame.\n");
		scanf("%f", &ef);
		printf("Nota do exame: %.1lf\n", ef);
		mf = (m+ef)/2.0;
		if(mf>=5.0){
			printf("Aluno aprovado.\nMedia final: %.1lf\n", mf);
		}
	}	
	else{
		printf("Aluno reprovado.\n");
	}
	return 0;
}
