#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");
	char usuario[50];
	int codigo;

	printf("Operador Distinto De !=\n");
	printf("Ingresa tu usuario:\n");
	scanf("%s", &usuario);

	printf("Ingresa tu código de acceso\n");
	scanf("%d", &codigo);

	if(codigo!=1234) { //
		printf("Código Incorrecto!\n");
	} else {
		printf("Bienvenido %s\n", usuario);
	}

	system("pause");
	return 0;
}