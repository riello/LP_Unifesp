#include <stdio.h>
#include <stdlib.h>
#define TAM 9

int validalinha(int mat[TAM][TAM]){
    int i, j, val[11], x;

    for(i=0; i<TAM; i++){
        val[0] = 1;
        for(j=1; j<=10; j++){
            val[j] = 0;   
        }
        for(j=0; j<TAM; j++){
                x = mat[i][j];
                val[x] += 1;
        }
        for(j=1; j<=10; j++){
            if(val[j] > 1){
                return 1;
            }
        }
    }
    return 0;
}

int validacoluna(int mat[TAM][TAM]){
    int i, j, val[11], x;

    for(i=0; i<TAM; i++){
        val[0] = 1;
        for(j=1; j<=10; j++){
            val[j] = 0;   
        }
        for(j=0; j<TAM; j++){
                x = mat[j][i];
                val[x] += 1;
        }
        for(j=1; j<=10; j++){
            if(val[j] > 1){
                return 1;
            }
        }
    }
    return 0;
}

int validasubmatriz(int mat[TAM][TAM], int lini, int lfim, int cini, int cfim){
    int i, j, t, val;
    
    for(t=1; t<=TAM; t++){
        val = 0;
        for(i=lini; i<lfim; i++){
            for(j=cini; j<cfim; j++){
                if(mat[i][j] == t){
                    val++;
                }
            }
        }
        if(val > 1){
		return 1;
		}
    }
    return 0;
}

int main(){
 
    int k, i, j, val, n, mat[TAM][TAM];
    
    scanf("%d", &n);
    
    for(k=1; k<=n; k++){
        for(i=0; i<TAM; i++){
            for(j=0; j<TAM; j++){
                scanf("%d", &mat[i][j]);
            }
        }
        val = 0;
        val += validalinha(mat);
        val += validacoluna(mat);
        for(i=0; i<TAM; i+=3){
            for(j=0; j<TAM; j+=3){
                val += validasubmatriz(mat, i, i+3, j, j+3);
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
