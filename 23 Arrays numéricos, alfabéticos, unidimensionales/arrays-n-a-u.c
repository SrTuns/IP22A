#include <stdio.h>
#include <locale.h>
#include <stdlib.h> //Control de procesos
#define SEMANA 7 //Declaración de constantes siempre en mayúsculas y no se le pone ;

main() {
	setlocale(LC_ALL, "spanish");

	printf("ARRAYS - ARREGLOS EN LENGUAJE\n");
	printf("Arreglos numéricos\n");

	int i, valores[5];
	valores[0]=100;
	valores[1]=543;
	valores[2]=524;
	valores[3]=901;
	valores[4]=372;

	for(i=0; i<5; i++){
		printf("%d\n", valores[i]);
	}

	printf("\nArreglos alfabéticos\n\n");

	char datosPersonales[7][50]={ "Nombre: ****** ******", "Edad: **", "Altura: *.**", "Hobbies: *****", "Color: ****", "Pelicula: ***** *", "Nivel Steam: **"};
	//el [50] indica el limite de caracteres por cada "", no en general
	for(i=0; i<7; i++) {
		printf("%s\n", datosPersonales[i]);
	}

	printf("\nArrays unidimensionales\n");

	float ventas[SEMANA]= {
		3000.01, 2000.69, 4000.37, 4500.28, 4500.28, 1200.94, 1000.10
	};
	float total=0;

		printf("\n---------\n");
		for(i=0; i<SEMANA; i++) {
			total+=ventas[i];
			printf("%.2f\n", ventas[i]);
		}
		printf("---------\n");
		printf("TOTAL: %.2f\n", total);
	system("pause");
	return 0;
}
