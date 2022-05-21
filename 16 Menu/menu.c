#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");

	int opcion;

	printf("Ejemplos aplicados en Bucles\n");
	printf("Menú con bucle Do While\n\n");

	do {
	system("cls"); //limpiar pantalla / clear screen
	printf("Selecciona una opción:\n");
	printf("1. Opción\n");
	printf("2. Opción\n");
	printf("3. Opción\n");
	printf("4. Salir\n");
	scanf("%d", &opcion);

	switch(opcion) {
		case 1:
		printf("Soy opción 1\n");
		getch();
		break;

		case 2:
		printf("Soy opción 2\n");
		getch();
		break;

		case 3:
		printf("Soy opción 3\n");
		getch();
		break;
	}
} while(opcion!=4); //opcion es distinto de 4

	system("pause");
	return 0;
}