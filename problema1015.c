#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1015

int main(){
	
	float x1, y1, dist;
	scanf("%f%f", &x1, &y1);
	
	float x2, y2;
	scanf("%f%f", &x2, &y2);
	
	dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
	printf("%.4f\n", dist);
	
	return 0;
	
}
