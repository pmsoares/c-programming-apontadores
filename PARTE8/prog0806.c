#include <stdio.h>
#include <locale.h>

/*
	Implemente a função:
		char *strchr(char *s, char ch)
	que retorna o endereço da primeira ocorrência de ch em s.
	Caso não exista retorna NULL. (Note que é o endereço, e não o índice.)

	Escreva ainda um programa que solicite uma string e um carácter e mostre no ecrã os caracteres da string
	original que se encontram a partir do carácter lido (inclusive).
*/

//versão1
char* strchr1(char* s, char ch) {

	while (*s != '\0')
		if (*s == ch)
			return s;
		else
			s++;
	return NULL;
}

//versão2
char* strchr2(char* s, char ch) {
	int i;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == ch)
			return &s[i];
	return NULL;
}

int prog0806() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char s[100], c;
	printf("Introduza uma string: ");
	gets_s(s, 100);
	printf("Introduza o carácter: ");
	c = getchar();

	puts(strchr2(s, c));

	return 0;
}