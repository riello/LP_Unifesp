#include <stdio.h>
 
int main() {
 
    int r=0, i;
    double a[6], m=0;
    
    scanf("%lf%lf%lf%lf%lf%lf", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
    
    for(i=0; i<6; i++){
        if(a[i]>0){
            r++;
            m += a[i];
        }
    }
        
        printf("%d valores positivos\n", r);
        printf("%.1lf\n", m/r);
        
    return 0;
}
