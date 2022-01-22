#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 9

void validadigitos(int *dig) {
    int i;
    for (i = 0; i <= 10; i++)
        dig[i] = 0;
}

int validade(int v[TAM][TAM], int band, int *dig) {
    int i, j;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (band) {
                dig[v[i][j]]++;
                if (dig[v[i][j]] > 1)
                    return 1;
            }
            else {
                dig[v[j][i]]++;
                if (dig[v[j][i]] > 1)
                    return 1;
            }
        }
	validadigitos(dig);
    }
    return 0;
}

int validasubmatriz(int v[TAM][TAM], int linhaInicio, int linhaFim, int colunaInicio, int colunaFim, int *dig) {
    int i, j;
    for (i = linhaInicio; i < linhaFim; i++) {
        for (j = colunaInicio; j < colunaFim; j++) {
	    dig[v[j][i]]++;
	    if (dig[v[j][i]] > 1)
		return 1;
	}
    }
    validadigitos(dig);
    return 0;
}

int main() {

    int n, mat[TAM][TAM], invalidade, digitos[TAM], casos, i, j;
    scanf("%d", &n);

    for (casos = 1; casos <= n; casos++) {
        for (i = 0; i < TAM; i++) {
	    	validadigitos(digitos);
	    	for (j = 0; j < TAM; j++) {
				scanf("%d", &mat[i][j]);
				mat[i][j]--;
	    }
	}
	invalidade = validade(mat, 1, digitos) + validade(mat, 0, digitos);

	for (i = 0; i < TAM; i+=3)
        for (j = 0; j < TAM; j+=3)
    		invalidade += validasubmatriz(mat, i, i + 3, j, j + 3, digitos);

	printf("Instancia %d\n", casos);

	if (invalidade)
	    printf("NAO\n\n");
	else
	    printf("SIM\n\n");
    }
    return 0;
}
