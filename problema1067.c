#include <stdio.h>
 
int main() {
 
    int i=1, x;
    scanf("%d", &x);
    
    if(x>1000){
        return 0;
    }
    
    else{
        while(i<=x){
        printf("%d\n", i);
        i+=2;
    }
    }
    return 0;
}
