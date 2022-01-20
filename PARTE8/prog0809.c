#include <stdio.h>
#include <locale.h>
#include <ctype.h>

/*
	Implemente a fun��o, usando unicamente opera��es entre apontadores.
		char * StrDelUpper(char *s)
	Apaga todos os caracteres mai�sculos em s. (Sugest�o: use a fun��o isupper.)
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

	char exemplo[] = "DAvSADaSmAos eDDmASbAAHDFoDSAra qGuDFGe GjGG�D DGcDheGGgJaK CpXoRr hDoWjeQA!";

	puts(StrDelUpper(exemplo));

	return 0;
}