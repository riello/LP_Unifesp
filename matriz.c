#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i, j, k, m[3][3], a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
			m[i][j] = (i*3)+j+1;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++)
			printf("%3d ", m[i][j]);
			printf("\n");
	}
	return 0;
}
