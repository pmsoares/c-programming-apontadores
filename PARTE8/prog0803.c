#include <stdio.h>
#include <locale.h>

int strlen(char* s) {
	char* ptr = s;
	while (*ptr != '\0')
		ptr++;

	return (int)(ptr - s);
}

int prog0803() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char s[100];
	char* ptr = s;

	puts("Introduza uma String:");
	gets_s(s, 100);

	printf("%d\n", strlen(s));

	return 0;
}