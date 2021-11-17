#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int a, b, c, maior_ab;
	scanf("%d%d%d", &a, &b, &c);
	maior_ab = ((a+b)+abs(a-b))/2;
	
	if(c>a && c>b){
		
		printf("%d eh o maior\n", c);
		
	}
	else{
	
		printf("%d eh o maior\n", maior_ab);
		
	}
	
	return 0;
	
}
