#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double r, pi, volume;
    scanf("%lf", &r);
    pi = 3.14159;
    volume = (4.0/3)*pi*r*r*r;
    
    if(r<0){
        
        return 0;
        
        }
    else{
    
        printf("VOLUME = %.3lf\n", volume);
        
        }
        
        return 0;
    
    }

