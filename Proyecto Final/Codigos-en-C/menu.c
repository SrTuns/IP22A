#include <stdio.h>
#include <locale.h>
main(){
	int opcion;
	setlocale(LC_ALL, "spanish");
	printf("\n ejemplos aplicados de  bucles\n");
	printf("Menu con bucle do while\n\n");
	
	
	
	do{
	system("cls");
	printf("Selecciona una opicion\n\n");
	printf("1. opcion 1\n\n");
	printf("2. opcion 2\n\n");
	printf("3. opcion 3\n\n");	
	printf("4. salir\n\n");	
	scanf("%d", &opcion);
	
	switch(opcion) {
		case 1:
		printf("soy la variable 1\n\n");
		getch();
		break;
		
		case 2:
		printf("soy la variable 2\n\n");
		getch();
		break;
				
		case 3:
		printf("soy la variable 3\n\n");
		getch();
		break;	
			
	}
	
	}while(opcion!=4);
	
	
	
	
	
	
	system("pause");
	return 0;
	
}
