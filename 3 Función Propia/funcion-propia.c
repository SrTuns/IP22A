#include <stdio.h>
#include <locale.h>

char variableGlobal[25]="Soy la variable global"; //Sirve para poner una variente por todo el codigo

main() {
	setlocale(LC_ALL, "spanish");
	char variableLocal[25]="Soy la variable local"; //Sirve solo para ponerlo dentro de main

	funcionPropia();
	segundaFuncion();
	printf("\n%s\n", variableLocal);
	printf("\n%s\n", variableGlobal);

	system("pause");
	return 0;
}
funcionPropia() {
	printf("Soy la función propia\n");
	printf("\n%s\n", variableGlobal);

}
segundaFuncion() {
	printf("Segunda Función\n");
	printf("\n%s\n", variableGlobal);
}