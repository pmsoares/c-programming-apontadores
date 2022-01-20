#include <stdio.h>
#include <locale.h>

char* strcpy(char* dest, char* orig) {
	char* tmp = dest;
	while (*dest++ = *orig++)
		;

	//semelhante a ter:
	//while (*dest = *orig) {
	//	dest++;
	//	orig++;
	//}

	return tmp;
}

int prog0804() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char s[100];
	char* ptr = s;

	puts("Introduza uma String:");
	gets_s(s, 100);

	//copiar para outra string

	return 0;
}