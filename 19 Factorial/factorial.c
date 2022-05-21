#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");
	
	int numero, factorial=1, i;

	printf("Calcular el Factorial de un Número\n\n");

	printf("Ingresa un número para calcular su factorial:\n");
	scanf("%d", &numero);

	for(i=numero; i>1; i--) {
		factorial=factorial*i;
	}

	printf("El factorial de %d es: %d\n", numero, factorial);
	
	system("pause");
	return 0;
}
