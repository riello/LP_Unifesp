#include <stdio.h>
 
int main() {
 
    double a, b, c, media;
    scanf("%lf%lf%lf", &a, &b, &c);
    media = ((2*a)+(3*b)+(5*c))/(10);
    if (a>10 || b>10 || c>10 || a<0 || b<0 || c<0){
        return 0;
    }
    else{
        printf("MEDIA = %.1lf\n", media);
    }
 
    return 0;
}
