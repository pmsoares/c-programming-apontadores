#include <stdio.h>
#include <locale.h>

/*
	Declare e Inicialize um vetor de strings e mostre-as,
	uma a uma, recorrendo simplesmente a apontadores.
*/

#define N_STRINGS 3

int prog0807() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char vetor[N_STRINGS][20] = { "Pedro","João","António" };
	char(*ptr)[20] = vetor; //apontador para vetores de 20 chars

	char* p;

	while (ptr - vetor < N_STRINGS) {
		p = *ptr;	//vai receber a string apontada por ptr
		while (*p)
			putchar(*p++);
		putchar('\n');
		ptr++;
	}

	return 0;
}