#include <stdio.h>

int main() {
    
    int n, i, j, p;
    
    while(scanf("%d", &n)){
        
        if(n==0) break;
        
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                p=i+1;
                if(j+1<p) p=j+1;
                if(n-i<p) p=n-i;
                if(n-j<p) p=n-j;
           		    printf("%3d", p);
            }
            printf("\n");
        }
        printf("\n");        
    }    
    return 0;
}
