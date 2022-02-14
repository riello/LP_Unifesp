#include <stdio.h>
#include <stdlib.h>
#define TAM 9

int validalinha(char mat[TAM][TAM]){
    int i, j, ch, val;

    for(i=0; i<TAM; i++){
        for(ch=65; ch<=73; ch++){
            val = 0;
            for(j=0;j<TAM;j++){
                if(ch == (int)mat[i][j]){
                    val++;
                }
            }
            if(val != 1){
                return 1;
            }
        }
    }

    return 0;
}

int validacoluna(char mat[TAM][TAM]){
    int i, j, ch, val;

    for(i=0; i<TAM; i++){
        for(ch=65; ch<=73; ch++){
            val = 0;
            for(j=0; j<TAM; j++){
                if(ch == (int)mat[j][i]){
                    val++;
                }
            }
            if(val != 1){
                return 1;
            }
        }
    }

    return 0;
}
int validasubmatriz(char mat[TAM][TAM],int lini,int lfim, int cini, int cfim){
    int i, j, num, val;
    
    for(num=65; num<=73; num++){
        val = 0;
        for(i=lini; i<lfim; i++){
            for(j=cini; j<cfim; j++){
                if((int)mat[i][j] == num){
                    val++;
                }
            }
        }
        if(val>1){
            return 1;    
        } 
    }
    return 0;
}

int main(){
 
    int k, i, j, val, n;
    char mat[TAM][TAM];
    
    scanf("%d", &n);
    
    for(k=1; k<=n; k++){
        for(i=0; i<TAM;i++){
            for(j=0; j<TAM; j++){
                scanf("%c ", &mat[i][j]);
            }
        }
        val = 0;
        val += validalinha(mat);
        val += validacoluna(mat);
        for(i=0; i<TAM; i+=3){
            for(j=0; j<TAM; j+=3){
                val += validasubmatriz(mat,i, i+3, j, j+3);
            }
        }
        printf("Instancia %d\n",k);
        if(val == 0){
            printf("SIM\n\n");
        }
        else{
            printf("NAO\n\n");
        }
    }
    return 0;
}

