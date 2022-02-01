#include <stdio.h>
#include <stdlib.h>

#define TAM 9

int validalinha(int mat[TAM][TAM]){
    int i, j, validade[10], x;

    for(i=0; i<TAM; i++){
        validade[0] = 1;
        for(j=1; j<=TAM; j++){
            validade[j] = 0;   
        }
        for(j=0; j<TAM; j++){
                x = mat[i][j];
                validade[x] += 1;
        }
        for(j=1; j<=TAM; j++){
            if(validade[j] > 1){
                return 1;
            }
        }
    }
    return 0;
}

int validacoluna(int mat[TAM][TAM]){
    int i, j, validade[10], x;

    for(i=0; i<TAM; i++){
        validade[0] = 1;
        for(j=1; j<=TAM; j++){
            validade[j] = 0;   
        }
        for(j=0; j<TAM; j++){
                x = mat[j][i];
                validade[x] += 1;
        }
        for(j=1; j<=TAM; j++){
            if(validade[j] > 1){
                return 1;
            }
        }
    }
    return 0;
}

int validasubmatriz(int mat[TAM][TAM], int lin, int lfim, int cin, int cfim){
    int i, j, num, validade;
    
    for(num=1; num<=TAM; num++){
        validade = 0;
        for(i=lin; i<lfim; i++){
            for(j=cin; j<cfim; j++){
                if(mat[i][j] == num){
                    validade++;
                }
            }
        }
        if(validade>1) return 1;
    }
    return 0;
}

int main(){
 
    int k, i, j, validade, n;
    int mat[TAM][TAM];
    
    scanf("%d", &n);
    
    for(k=1; k<=n; k++){
        for(i=0; i<TAM; i++){
            for(j=0; j<TAM; j++){
                scanf("%d", &mat[i][j]);
            }
        }
        validade = 0;
        validade += validalinha(mat);
        validade += validacoluna(mat);
        for(i=0; i<TAM; i+=3){
            for(j=0; j<TAM; j+=3){
                validade += validasubmatriz(mat, i, i+3, j, j+3);
            }
        }
        printf("Instancia %d\n", k);
        if(validade != 0){
            printf("NAO\n\n");
        }
        else{
            printf("SIM\n\n");
        }
    }
    return 0;
}
