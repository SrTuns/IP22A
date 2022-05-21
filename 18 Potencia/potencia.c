#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");

	int i, acumulador=1, exponente, base;

	printf("Calcular la potencia de un número\n\n");

	printf("Ingresa la base\n");
	scanf("%d", &base);

	printf("Ingresa el exponente:\n");
	scanf("%d", &exponente);

	for(i=0; i<exponente; i++) {
		acumulador=acumulador*base;
	}

	printf("El resultado es: %d\n", acumulador);

	system("pause");
	return 0;
}
