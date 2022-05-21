#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
main(){

	setlocale(LC_ALL, "spanish");
	FILE *archivo; //obejto capaz de almacenar informacion	
	
	char caracter;
	
	archivo = fopen("frases.txt", "r");
	if(archivo==NULL){
		printf("\nError en la apertura de archivo\n\n");
	} else{
		printf("El contenido del archivo es:\n\n");
		while(feof(archivo)==0){ // feof comprueba el indicador final del archivo
		caracter=fgetc(archivo);// fgetc obntiene el siguiente caracter
		printf("%c", caracter);
		}
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

