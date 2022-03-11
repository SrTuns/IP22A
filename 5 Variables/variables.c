#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");
	
	int hotdog, precio, total, coca, cantidad, total2, totalf; //poner variables enteros como terminos

	printf("USO DE VARIABLES EN C\n\n");
	coca=12;
	hotdog=18;
	cantidad=20;
	total=coca*cantidad;
	total2=hotdog*cantidad;
	//totalf=total+total2;
	printf("El total es: $%d\n", total+total2); //imprimir el resultado de la suma

	system("pause");
	return 0;
}