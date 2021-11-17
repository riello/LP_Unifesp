#include <stdio.h>
int main (){
    int a, b, aa, bb, t, m;
    scanf("%i %i %i %i", &a, &aa, &b, &bb);    
    t = b-a;
    m = bb-aa;    
    if (!t && m <= 0){
        t = 24;
	}
    if (t < 0){
    	t += 24;
	}    
    if (m < 0) {
        t--;
        m += 60;
    }
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", t, m);
    return 0;
}
