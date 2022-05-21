#include <stdio.h>
#include <locale.h>
//char variableGlobal[25]="soy la variable global";

	main(){
	setlocale(LC_ALL, "spanish");	
	char variableLocal[25]="";	
	funcionPropia();	
    //segundaFuncion();
	printf("\n%s\n", variableLocal);
//	printf("\n%s\n", variableGlobal);    
    
    
    
    
    
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
	funcionPropia() {
		char tacos[6];
		fgets(tacos,6,stdin);
		puts(tacos);
		printf("Soy una funcion propia\n");
	//	printf("\n%s\n", variableGlobal);
	}
//segundaFuncion(){
//	puts("Segunda funcion");

funcion() {
	char dato[300];
	scanf("%s", &dato);
	printf(dato);
}
