#include <stdio.h>
#include <stdlib.h>
#define TAM 9

void fill(int **mat){
    int i, j;
    
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            mat[i][j] = rand()%10000;
        }
    }
}

void print(int **mat){
    int i, j;
    
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int **mat, i;
    
    mat = (int**)malloc(sizeof(int *)*9);
    for(i = 0; i < TAM; i++){
        mat[i] = (int*)malloc(sizeof(int)*9);
    }
    fill(mat);
    
    print(mat);
    
    free(mat);
    
    return 0;
}
