#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    double a, b, c, area_a, area_b, area_c, area_d, area_e, pi;
    scanf("%lf%lf%lf", &a, &b, &c);
    pi = 3.14159;
    area_a = (a*c)/(2.0);
    area_b = pi*c*c;
    area_c = (a+b)*c/(2.0);
    area_d = b*b;
    area_e = a*b;
    
    if(a==0 || b==0 || c==0 || a<0 || b<0 || c<0){
        
        return 0;
        
        }
    else{
    
        printf("TRIANGULO = %.3lf\nCIRCULO = %.3lf\nTRAPEZIO = %.3lf\nQUADRADO = %.3lf\nRETANGULO = %.3lf\n", area_a, area_b, area_c, area_d, area_e);
        
        }
    
    return 0;
    
    }
