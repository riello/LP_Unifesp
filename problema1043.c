#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a<0 || b<0 || c<0){
        return 0;
    }
    else if(c>=a+b || a>=b+c || b>=a+c){
        double area;
        area = (a+b)*c/2.0;
        printf("Area = %.1lf\n", area);
    }
    else{
        double perimetro;
        perimetro = a+b+c;
        printf("Perimetro = %.1lf\n", perimetro);
    }
    return 0;
}
