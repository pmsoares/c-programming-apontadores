#include <stdio.h>
#include <locale.h>

int prog0802() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	// Escreva um programa que mostre uma string no ecrã pela ordem 
	// em que está escrita e pela ordem contrária.

	char s[100];
	char* ptr = s;

	puts("Introduza uma String:");
	gets_s(s, 100);

	if (*ptr == '\0')
		return 0;

	//Mostrar a string normalmente:
	while (*ptr != '\0')
		putchar(*ptr++);

	putchar('\n');
	//Mostrar a string ao contrário:
	ptr--;
	while (ptr >= s)
		putchar(*ptr--);

	return 0;
}