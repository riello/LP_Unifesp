#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
    int a, b;
    scanf("%d%d", &a, &b);
    
    if(b%a==0){
        ptintf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
 
    return 0;
}
