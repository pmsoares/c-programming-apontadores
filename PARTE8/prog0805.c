#include <stdio.h>
#include <locale.h>

int prog0805() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	//int x;
	//int* ptr_x; //apontador para x

	//int** ptr_ptr_x; //apontador para o apontador de x

	//Declarar:
	int x = 5;
	int* ptr_x;
	int** ptr_ptr_x;

	//Inicializar:
	ptr_x = &x;
	ptr_ptr_x = &ptr_x;

	//Mostrar:
	//printf("x = %d --> &x = %ld\n", x, &x);
	//printf("x = %d --> &x = %ld\n", *ptr_x, ptr_x);
	//printf("x = %d --> &x = %ld\n", **ptr_ptr_x, *ptr_ptr_x);

	return 0;
}