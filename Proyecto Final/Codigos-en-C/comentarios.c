#include <stdio.h>
#include <locale.h> //Libreria para poner una idioma

main() {
	setlocale(LC_ALL, "spanish");
	//Indica el idioma locar a utilizar

	printf("COMENTARIOS EN LENGUAJE C\n");
	printf("Propósitos de los comentarios\n\n");

	printf("1. Documentar el código fuente\n");
	printf("2. Desactivar líneas de código\n");
	printf("\nLease \"Conceptos/comentarios\" para mas información\n\n");
	
	//prinft("FunciÃ³n printf desactivada");

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
