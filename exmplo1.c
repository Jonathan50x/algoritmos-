#include <stdio.h>

int main(void) {
	int a, b;
	printf("Programa simples em C: soma de dois inteiros\n");
	printf("Digite dois inteiros separados por espaço: ");
	if (scanf("%d %d", &a, &b) != 2) {
		printf("Entrada inválida.\n");
		return 1;
	}
	printf("Soma: %d\n", a + b);
	return 0;
}

