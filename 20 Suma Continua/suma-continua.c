#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");
	int acumulador, numero;
	acumulador=0;
	char pregunta;

	printf("Suma continua de número\n\n");

	do {
		printf("Introduzca un número: ");
		scanf("%d", &numero);

		acumulador+=numero;

		printf("\nDesea sumar otro número (s/n)");
		fflush(stdin); //Limpia (vacia) el buffer del teclado
		scanf("%c", &pregunta);
	} while(pregunta!='n');

	printf("\nLa suma de los números es: %d", acumulador);

	system("pause");
	return 0;
}