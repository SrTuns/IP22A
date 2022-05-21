#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "spanish");
	char dia;
	printf("\nOperador switch\n");
	printf("\nSeleciona un dia de la semana\n");
	printf("1. Lunes\n");		
	printf("2. Martes\n");	
	printf("3. Miercoles\n");	
	printf("4. Jueves\n");	
	printf("5. Viernes\n");	
	printf("6. Sabado\n");
	printf("7. Domingo\n");
	scanf("%d", &dia);
	
	switch(dia){
		case 1:
		printf("hola\n");
		break;
		case 2:
		printf("martes de frescura paps\n");
		break;
		case 3:
		printf("miercoles de plaza mirrey\n");
		break;
		case 4:
		printf("Feliz jueves\n");
		break;
		case 5:
		printf("descanso\n");
		break;
		case 6:
		printf("sabado de pollo\n");
		break;
		case 7:
		printf("a repetirlo\n");
		break;
		default:
		printf("Graciosito, escribe bien\n");
		break;
	}
	
		
	system("pause");
	system("cls");
                   printf("Cargando.");
                   sleep(300);
                   printf(".");
                   sleep(300);
                   printf(".");
                   sleep(300);
                   printf(".");
                   sleep(300);
                   printf(".");
                   sleep(300);
                   printf(".");
                   sleep(300);
                   printf(".");
                   system("cls");
	system("menuejercicios.exe");
	return 0;
}
