#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a, b, media;
	scanf("%f%f", &a, &b);
	media = ((3.5*a)+(7.5*b))/(11);
	if (a>10 || a<0 || b>10 || b<0){
		return 0;
	}
	else{
		printf("MEDIA = %.5f", media);
	}
	return 0;
}
