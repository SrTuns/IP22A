#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");

	int numero1, numero2;

	printf("Operadores de comparación\n");
	printf("Comparación de dos números\n\n");

	printf("Ingresa un número entero:\n");
	scanf("%d", &numero1);

	printf("Ingresa otro número entero:\n");
	scanf("%d", &numero2);

	if(numero1<numero2) {
		printf("%d es menor que %d\n", numero1, numero2);
	} else if(numero1>numero2) {
		printf("%d es mayor que %d\n", numero1, numero2);
	} else if (numero1==numero2) {
		printf("%d es igual de %d\n", numero1, numero2);
	}
	
	system("pause");
	return 0;
}
