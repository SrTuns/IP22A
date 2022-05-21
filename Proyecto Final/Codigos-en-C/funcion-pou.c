#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
main(){
	float base, exponente, resultado;

	setlocale(LC_ALL, "spanish");
	
	printf("\nIngresa la base: \n");
	scanf("%f", &base);
	
	printf("\nIngresa el exponente: \n");
	scanf("%f", &exponente);
	
	resultado=pow(base, exponente);
	printf("\nEl resultado es: %.2f\n\n", resultado );
	
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
