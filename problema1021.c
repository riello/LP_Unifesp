#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float v;
	int hundred, fifty, twenty, ten, five, two, one, half, quarter, dime, fcents, penny, x;
	scanf("%f", &v);
	
	x = v*100;
	
	hundred = x/10000;
	x = x-(hundred*10000);
	
	fifty = x/5000;
	x = x-(fifty*5000);
		
	twenty = x/2000;
	x = x-(twenty*2000);
	
	ten = x/1000;
	x = x-(ten*1000);
	
	five = x/500;
	x = x-(five*500);
		
	two = x/200;
	x = x-(two*200);
	
	one = x/100;
	x = x-(one*100);
	
	half = x/50;
	x = x-(half*50);
	
	quarter = x/25;
	x = x-(quarter*25);
	
	dime = x/10;
	x = x-(dime*10);
	
	fcents = x/5;
	x = x-(fcents*5);
	
	penny = x;
	
	if(v<0 || v>1000000.00){
		
		return 0;
		
	}
	
	else{
		
		printf("NOTAS:\n");
		printf("%d nota(s) de R$100.00\n", hundred);
		printf("%d nota(s) de R$50.00\n", fifty);
		printf("%d nota(s) de R$20.00\n", twenty);
		printf("%d nota(s) de R$10.00\n", ten);
		printf("%d nota(s) de R$5.00\n", five);
		printf("%d nota(s) de R$2.00\n", two);
		printf("MOEDAS:\n");
		printf("%d moeda(s) de R$1.00\n", one);
		printf("%d moeda(s) de R$0.50\n", half);
		printf("%d moeda(s) de R$0.25\n", quarter);
		printf("%d moeda(s) de R$0.10\n", dime);
		printf("%d moeda(s) de R$0.05\n", fcents);
		printf("%d moeda(s) de R$0.01\n", penny);
				
	}
	
	return 0;
	
}
