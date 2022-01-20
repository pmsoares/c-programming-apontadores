#include <stdio.h>
#include <locale.h>

int prog0801() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	//Mostre o valor das variáveis e o seu endereço armazenado nos respetivos apontadores.
	//Depois, mostre o valor das mesmas variáveis, incrementando em uma unidade.

	int x = 5, * ptr_x = &x;
	float y = 5.0, * ptr_y = &y;

	printf("%d %ld\n", x, (long)ptr_x);
	printf("%d %ld\n", x + 1, (long)(ptr_x + 1));

	printf("%f %ld\n", y, (long)ptr_y);
	printf("%f %ld\n", y + 1, (long)(ptr_y + 1));

	return 0;
}