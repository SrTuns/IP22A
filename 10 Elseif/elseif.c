#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");
	int edad;

	printf("Condicional else if (Sino entonces)\n");
	printf("Ingresa tu edad:\n");
	scanf("%d", &edad);

	if(edad<=12) {
		printf("Hola Niño\n");
	} else if(edad<=17) {
		printf("Hola Joven\n");
	} else if(edad<60) {
		printf("Hola Adulto\n");
	} else if(edad>=60) {
		printf("Hola Viejito\n");
	}

	system("pause");
	return 0;
}
