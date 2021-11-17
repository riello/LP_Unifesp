#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int x;
	double y, consumo;
	scanf("%d", &x);
	scanf("%lf", &y);
	consumo = (x/y);
	
	if(y==0){
		
		return 0;
		
	}
	else{
		
		printf("%.3lf km/l\n", consumo);
		
	}
	
	return 0;
	
}
