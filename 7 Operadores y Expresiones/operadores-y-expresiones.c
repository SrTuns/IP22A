#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");

	int a,b,c,resultado;
	a=b=c=10; //Asignación múltiple

	printf("El valor de la variable a es: %d\n", a);

	printf("\nOperadores Aritméticos\n");

	a=8;
	b=3;

	a+=b;
	printf("El resultado es: %d\n", a);

	printf("\nDonde a=8; b=3;\n");
	a=8;

	resultado=a+b;
	printf("El resultado es: %d+%d=%d\n\n", a,b,resultado);

	resultado=a-b;
	printf("El resultado es: %d-%d=%d\n\n", a,b,resultado);
	
	resultado=a*b;
	printf("El resultado es: %d*%d=%d\n\n", a,b,resultado);
	
	resultado=a/b;
	printf("El resultado es: %d/%d=%d\n\n", a,b,resultado);

	resultado=a%b;
	printf("El resultado es: %d%%%d=%d\n\n", a,b,resultado);

	system("pause");
	return 0;
}