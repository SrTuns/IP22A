#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");

	int opcion;
	float numero1, numero2, resultado;

	printf("\nCalculadora B�sina con Operadores Arim�ticos\n");

	printf("\nSeleciona la operaci�n que desea hacer\n");
	printf("  #-------------------------------------------------#\n");
	printf("  #                     Calculadora                 #\n");
	printf("  #                                                 #\n");
	printf("  #       1. Suma                       2. Resta    #\n");
	printf("  #        (10+5)                         (10-5)    #\n");
	printf("  #                                                 #\n");
	printf("  #  3. Multiplicaci�n                 4. Divisi�n  #\n");
	printf("  #        (10*5)                         (10/5)    #\n");
	printf("  #                                                 #\n");
	printf("  #                      5. M�dulo                  #\n");
	printf("  #                                                 #\n");
	printf("  #-------------------------------------------------#\n\n\n");
	printf(">> Escoge una opci�n: ");
	scanf("%d", &opcion);

	if(opcion==5) {
		printf("\n>> A�n se esta trabajando en esto, usa otro metodo >//<\n\n");

	system("pause");
	return 0;

	}

	if(opcion>=6) {
		printf("\n>> Esa opci�n no existe, favor de escoger alguna de las opciones existentes! <<\n\n");

	system("pause");
	return 0;

	}

/*	if(opcion==1) {
		printf("\n>> (Suma) Ingresa un n�mero entero: ");
	} else 	if(opcion==2) {
		printf("\n>> (Resta) Ingresa un n�mero entero: ");
	} else 	if(opcion==3) {
		printf("\n>> (Multiplicaci�n) Ingresa un n�mero entero: ");
	} else 	if(opcion==4) {
		printf("\n>> (Divisi�n) Ingresa un n�mero entero: ");
	}	scanf("%f %f", &numero1, &numero2); */

	printf("\n>> (Opci�n %d) Ingresa un N�mero entero: ", opcion);
	scanf("%f", &numero1);

	printf("\n>> (Opci�n %d) Intresa otro N�mero entero: ", opcion);
	scanf("%f", &numero2); 

/*	if(opcion==1) { //Calculadora con if
		resultado=numero1+numero2;
		printf("%.2f + %.2f = %.2f\n", numero1, numero2, resultado);
	} else if (opcion==2) {
		resultado=numero1-numero2;
		printf("%.2f - %.2f = %.2f\n", numero1, numero2, resultado);
	} else if (opcion==3) {
		resultado=numero1*numero2;
		printf("%.2f * %.2f = %.2f\n", numero1, numero2, resultado);
	} else if (opcion==4) {
		resultado=numero1/numero2;
		printf("%.2f / %.2f = %.2f\n", numero1, numero2, resultado);
	} */

	switch(opcion) { //Calculadora con switch
		case 1:
			resultado=numero1+numero2;
			printf("\n>> El resultado de (%.2f) mas (%.2f) es (%.2f) <<\n\n", numero1, numero2, resultado);
		break;

		case 2:
			resultado=numero1-numero2;
			printf("\n>> El resultado de (%.2f) menos (%.2f) es (%.2f) <<\n\n", numero1, numero2, resultado);
		break;
		
		case 3:
			resultado=numero1*numero2;
			printf("\n>> El resultado de (%.2f) por (%.2f) es (%.2f) <<\n\n", numero1, numero2, resultado);
		break;	
		
		case 4:
			resultado=numero1/numero2;
			printf("\n>> El resultado de (%.2f) entre (%.2f) es (%.2f) <<\n\n", numero1, numero2, resultado);
		break;
		
		case 5:
			printf("\n>> Circuito en Proceso <<\n");
		break;

		default:
			printf("\n>> No existe esa opci�n <<\n");
		break;

	}

	system("pause");
	return 0;
}
