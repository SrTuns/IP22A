#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
main(){

	setlocale(LC_ALL, "spanish");
	FILE *archivo; //obejto capaz de almacenar informacion	
	
	char caracter;
	
	archivo = fopen("frases.txt", "a");// r=read w=wipe a=add
	printf("\n\n Introduce texto sobre el archivo:");
		
		while((caracter=getchar()) != '\n'){ // getchar devuelve el caracter que se encuentra en la entrada estandar
		
		printf("%c", fputc(caracter, archivo));
		}
	
	
	fclose(archivo);
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

