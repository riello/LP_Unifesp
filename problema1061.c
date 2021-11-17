#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	char texto[5];
	int d1, h1, m1, s1;
	int d2, h2, m2, s2;
	int d, t1, t2, tempo;
	scanf("%s %i ", texto, &d1);
	scanf("%s", texto);
	h1 = atoi(texto);
	scanf("%s", texto);
	scanf("%s", texto);
	m1 = atoi(texto);
	scanf("%s", texto);
	scanf("%s", texto);
	s1 = atoi(texto);
	scanf("%s %i ", texto, &d2);
	scanf("%s", texto);
	h2 = atoi(texto);
	scanf("%s", texto);
	scanf("%s", texto);
	m2 = atoi(texto);
	scanf("%s", texto);
	scanf("%s", texto);
	s2 = atoi(texto);
	t1 = s1 + m1 * 60 + h1 * 3600;
	t2 = s2 + m2 * 60 + h2 * 3600;
	d = (t2 - t1 < 0)? d2-d1-1 : d2-d1;
	printf("%d dia(s)\n", d);
	tempo = (t2-t1 < 0)? (t2-t1+86400)%86400 : t2-t1;
	printf("%d hora(s)\n", tempo / 3600);
	tempo %= 3600;
	printf("%d minuto(s)\n", tempo / 60);
	tempo %= 60;
	printf("%d segundo(s)\n", tempo);
	return 0;
}
