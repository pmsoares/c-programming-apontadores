#include <stdio.h>
#include <locale.h>

int testes() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	//Declaração de Apontadores
	// tipo * nome;
	//char a, b, * p, c, * q;
	//int* p_idade, idade;

	//Declaração e Inicialização automática de Apontadores
	//int x = 5;
	//float pi2 = 3.14;
	//int* ptr_x = &x;
	//float* ptr_pi2 = &pi2;
	//float* teste = NULL;

	//int a = 5, b = 7;
	//int* ptr = NULL;
	//ptr = &a;

	///*
	//	a		--> 5
	//	ptr		--> 1002
	//	*ptr	--> 5
	//*/

	//printf("%d\n", a);
	////é equivalente
	//printf("%d\n", *ptr);

	//printf("%d %d %d\n", a, b, *ptr);
	//ptr = &b;
	//printf("%d %d %d\n", a, b, *ptr);
	//*ptr = 20;
	//printf("%d %d %d\n", a, b, *ptr);

	//int* p2;
	//p2 = &b;
	//p2 = ptr;
	//printf("%d\n", *p2);


	//char a = 'Z';
	//int n = 1234;
	//float pi = 3.1415;

	//char* ptr_a = &a;
	//int* ptr_n = &n;
	//float* ptr_pi = &pi;

	//char v[10];

	////&v[0] --> v

	///*
	//NOTA:
	//	O nome de um vetor corresponde ao endereço
	//	do seu primeiro elemento, isto é,
	//	se v é um vetor, v == &v[0]
	//*/

	//int v2[3] = { 10,20,30 };
	//int* ptr;

	//ptr = v2;
	//printf("%d %d\n", v2[0], *ptr);
	//ptr = &v2[2];
	//printf("%d %d\n", v2[2], *ptr);


	//char s[] = "OlaOleOli";
	//char* ptr = s;

	//s[2];
	//*(ptr + 2);
	//*(s + 2);
	//ptr[2];
	/*
	char vetor[100];
	vetor[0] == *vetor
	vetor[1] == *(vetor+1)

	v[n] == *(v+n)

	*/








	return 0;
}