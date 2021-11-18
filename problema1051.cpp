#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float s;
	scanf("%f", &s);
	if(s<0){
		return 0;
	}
	else if(s<=2000.00){
		printf("Isento\n");
	}
	else if(s<=3000.00){
		float t;
		t = 0.08*s;
		printf("R$ %.2f\n", t);
	}
	else if(s<=4500.00){
		float t;
		t = 0.18*s;
		printf("R$ %.2f\n", t);
	}
	else{
		float t;
		t = 0.28*s;
		printf("R$ %.2f\n", t);
	}
	return 0;
}
