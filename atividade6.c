#include <stdio.h>
#include <stdlib.h>

void preenche(int **mat){
    int i, j;    
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            mat[i][j] = rand()%1000;
        }
    }
}

void imprime(int **mat){
    int i,j;    
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int **mat, i;    
    mat = (int**)malloc(sizeof(int *)*9);
    for(i=0; i<9; i++){
        mat[i] = (int*)malloc(sizeof(int)*9);
    }
    preenche(mat);    
    imprime(mat);    
    free(mat);    
    return 0;
}
