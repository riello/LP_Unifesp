#include <stdio.h>
 
int main() {
 
    int a[5], r=0, i;
    scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    
    for(i=0; i<5; i++){
        if(a[i]%2 == 0){
            r++;
        }
    }
    printf("%d valores pares\n", r);
    return 0;
}
