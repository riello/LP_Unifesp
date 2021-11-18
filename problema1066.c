#include <stdio.h>
 
int main() {
 
    int a[5], par=0, pos=0, neg=0, i;
    scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    
    for(i=0; i<5; i++){
        if(a[i]%2==0) par++;
        
        if(a[i]<0) neg++;
        
        if(a[i]>0) pos++;
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", 5-par);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
 
    return 0;
}
