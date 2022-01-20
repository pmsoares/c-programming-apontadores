#include <stdio.h>
#include <locale.h>

/*
	Implemente a fun��o:
		char *strchr(char *s, char ch)
	que retorna o endere�o da primeira ocorr�ncia de ch em s.
	Caso n�o exista retorna NULL. (Note que � o endere�o, e n�o o �ndice.)

	Escreva ainda um programa que solicite uma string e um car�cter e mostre no ecr� os caracteres da string
	original que se encontram a partir do car�cter lido (inclusive).
*/

//vers�o1
char* strchr1(char* s, char ch) {

	while (*s != '\0')
		if (*s == ch)
			return s;
		else
			s++;
	return NULL;
}

//vers�o2
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
	printf("Introduza o car�cter: ");
	c = getchar();

	puts(strchr2(s, c));

	return 0;
}