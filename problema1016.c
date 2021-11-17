#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1016

int main(){
	
	int d;
	double tempo;
	scanf("%d", &d);
	
	tempo = (d/(30.0))*60.0;
	
	printf("%.0lf minutos", tempo);
	
	return 0;
	
}
