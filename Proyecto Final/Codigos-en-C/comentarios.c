#include <stdio.h>
#include <locale.h> //Libreria para poner una idioma

main() {
	setlocale(LC_ALL, "spanish");
	//Indica el idioma locar a utilizar

	printf("COMENTARIOS EN LENGUAJE C\n");
	printf("Prop�sitos de los comentarios\n\n");

	printf("1. Documentar el c�digo fuente\n");
	printf("2. Desactivar l�neas de c�digo\n");
	printf("\nLease \"Conceptos/comentarios\" para mas informaci�n\n\n");
	
	//prinft("Función printf desactivada");

	/*
	Esto sirve
		para poner comentarios
			de varias lineas
	*/
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
