#include <stdio.h>
#include <locale.h>
#include <ctype.h>

/*
	Implemente a função:
		char *Primeira_Vogal(char *s)
	que retorna o endereço em que ocorre a primeira vogal na string s.
	Caso não exista, retorna NULL.
*/

char* strchr(char* s, char ch) {

	while (*s != '\0')
		if (*s == ch)
			return s;
		else
			s++;
	return NULL;
}

char* Primeira_Vogal(char* s) {
	char vogais[] = "aeiou";

	int i;
	for (i = 0; s[i] != '\0'; i++)
		if (strchr(vogais, tolower(s[i])) != NULL)
			return &s[i];
	return NULL;
}

int prog0808() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char exemplo[] = "Frase de exemplo";

	puts(Primeira_Vogal(exemplo));

	return 0;
}