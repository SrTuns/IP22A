#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");

	int programacion, ingenieria, fisica, expresion, precalculo, logica, promedio;

	printf("\nBienvenido a la Capturadora de Calificaciones de Materias\n\n");

	printf("Introduce la calificación de Programación: \n");
	scanf("%d", programacion);

	printf("Introduce la calificación de Ingenieria: \n");
	scanf("%d", ingenieria);

	printf("Introduce la calificación de Física: \n");
	scanf("%d", fisica);

	printf("Introduce la calificación de Expresión: \n");
	scanf("%d", expresion);

	printf("Introduce la calificación de Precalculo: \n");
	scanf("%d", precalculo);

	printf("Introduce la calificación de Lógica: \n");
	scanf("%d", logica);

	promedio=(materias)/6;

	printf("El promedio es: %d", promedio);

	if(promedio<60) {
		printf("Tu promedio es de %d, por lo que has reprobado!\n", promedio);
	} else if(promedio<80) {
		printf("Tu promedio es de %d, felicidades!, tienes una calificación decente", promedio);
	} else if (promedio>=90) {
		printf("Tu promedio es de %d, Felicidades!, tienes una calificación es muy buena!", promedio);
	}
	

	system("pause");
	return 0;

}