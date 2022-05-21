#include <stdio.h>
#include <locale.h>
#include <math.h>

main() {
	setlocale(LC_ALL, "spanish");

	float base, exponente, resultado;

	printf("Ingresa la base: ");
	scanf("%f", &base);

	printf("Ingresa el exponente: ");
	scanf("%f", &exponente);

	resultado=pow(base, exponente);
	printf("El resultado es: %.2f\n", resultado); // %(.2)f indica el numero de decimales que quieres en tu resultado

	system("pause");
	return 0;
}