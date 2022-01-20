#include <stdio.h>
#include <locale.h>
#include <ctype.h>

/*
	Implemente a função, usando unicamente operações entre apontadores.
		char * StrDelUpper(char *s)
	Apaga todos os caracteres maiúsculos em s. (Sugestão: use a função isupper.)
*/

char* StrDelUpper(char* s) {
	char* prim, * ptr;
	prim = ptr = s;

	while (*s) { // equivalente a while (*s != '\0')
		if (!isupper(*s))
			*ptr++ = *s;
		s++;
	}
	*ptr = '\0';
	return prim;
}

int prog0809() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char exemplo[] = "DAvSADaSmAos eDDmASbAAHDFoDSAra qGuDFGe GjGGáD DGcDheGGgJaK CpXoRr hDoWjeQA!";

	puts(StrDelUpper(exemplo));

	return 0;
}