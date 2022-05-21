#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");
	int dia;

	printf("Operador Switch()\n\n");
	printf("Selecciona un día de la semana:\n\n");
	printf("1. Lunes\n");
	printf("2. Martes\n");
	printf("3. Miercoles\n");
	printf("4. Jueves\n");
	printf("5. Viernes\n");
	printf("6. Sabado\n");
	printf("7. Domingo\n\n");
	scanf("%d", &dia);

	switch(dia) {
		case 1:
			printf("Buen inicio de semana\n");
		break;

		case 2:
			printf("Martes de frescura\n");
		break;
		
		case 3:
			printf("Miercoles de tianguis\n");
		break;
		
		case 4:
			printf("Juevez\n");
		break;
		
		case 5:
			printf("Día de descanzo\n");
		break;

		case 6:
			printf("amonos resio\n");
		break;
		
		case 7:
			printf("Día de misa\n");
		break;
		
		default:
			printf("\nNomas existen 7 días mamaguevo\n");
		break;
	}

	system("pause");
	return 0;
}
