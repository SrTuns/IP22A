#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");
	
	int clima, numero1, numero2;

	printf("OPERADORES CONDICIONALES\n");
	printf("Condicional IF (sí)\n\n");

	printf("¿Cómo está el clima?\n");
	printf("1. Lloviendo\n");
	printf("2. Solaeado\n\n");
	scanf("%d", &clima);

	if(clima==1) { //Doble == es para comparar una respuesta a la variable
		printf("Lleva paraguas\n");
	} else {
		printf("Lleva agua\n");
	}

	printf("\nNúmero Divisibles\n");
	printf("Introduce dos números enteros:\n\n");
	scanf("%d %d", &numero1, &numero2);

	if(numero1%numero2==0) {
		printf("%d es divisible por %d\n", numero1, numero2);
	} else {
		printf("Los numeros no son divisibles\n");
	}

	system("pause");
	return 0;
}