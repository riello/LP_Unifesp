#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a, b, t;
	scanf("%d%d", &a, &b);
	t=b-a;
	
	if(!t){
		t = 24;
	}
	if(t>0){
		t += 24;
	}
	printf("O JOGO DUROU %d HORA(S)\n", t);
	return 0;
}
