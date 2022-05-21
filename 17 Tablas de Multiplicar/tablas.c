#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/* Libreria estándar de propósito general.
contiene prototipos de funcuines del lenguaje C para
- Gestión de memoria
- Control de procesos
- Generación de números aleatorios
- Busqueda, clasificación y conversión */

main() {
	setlocale(LC_ALL, "spanish");

	int tabla, i;

	printf("Tablas de Multiplicar con Bucles\n\n");
	printf("Indique la tabla que desea mostrar: ");
	scanf("%d", &tabla);

	printf("\n\nTabla del %d\n", tabla);
	printf("-------------\n");
	for(i=1; i<=10; i++) {
		printf("%d x %d = %d\n", tabla, i, tabla*i);
	}
	printf("-------------\n");


	system("pause");
	return 0;
}