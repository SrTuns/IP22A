#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");
	int x, i;

	printf("\nBucles en Lenguajes C\n");
	printf("\n-----------------------\n");
	printf("Bucles While (Mientras)");
	printf("\n-----------------------\n\n");

	x=1;
	while(x<=10) {
		printf("El valor de x es: %d\n", x++);
	}

	printf("\n----------------------\n");
	printf("Contador en decremento");
	printf("\n----------------------\n\n");

	x=10;
	while(x>=1) {
		printf("El valor de x es: %d\n", x--);
	}

	printf("\n--------------------------------\n");
	printf("Contador en incremento de 2 en 2");
	printf("\n--------------------------------\n\n");

	x=0;
	while(x<=10) {
		printf("El valor de x es: %d\n", x=x+2);
	}

	printf("\n--------------------------------\n");
	printf("Contador en decremento de 2 en 2");
	printf("\n--------------------------------\n\n");

	x=10;
	while(x>=0) {
		printf("El valor de x es: %d\n", x=x-2);
	}

	printf("\n\nBucle for (para)\n\n");

	printf("\n----------------------\n");
	printf("Contador en incremento");
	printf("\n----------------------\n\n");

	for (i=1; i<=10; i++){
		printf("El valor de i es: %d\n", i);
	}

	printf("\n----------------------\n");
	printf("Contador en decremento");
	printf("\n----------------------\n\n");

	for (i=10; i>=1; i--){
		printf("El valor de i es: %d\n", i);
	}

	printf("\n\nBucle Do While (Hacer mientras)\n\n\n");

	x=11; //Aunque este el valor mas alto que en while, imprime el valor
	do {
		printf("El valor de x es: %d\n\n", x++);
	} while(x<=10);

	system("pause");
	return 0;
}
