#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main() {

    int mat[3][3], i, j, num;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            num = (rand() % 9)+1;
            mat[i][j] = num;
            printf("%3d ", mat[i][j]); 
        }
        printf("\n");
    }

    printf("\n");
  
    return 0;
}
