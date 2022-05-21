#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
main(){
	setlocale(LC_ALL, "spanish");	
	int tabla, i;
	
	printf("Tablas de multiplicacion con bucle\n\n");
	printf("Indique la tabla que desea ver: \n");
	scanf("%d", &tabla);
	printf("\nTabla del %d\n\n", tabla);
	printf("----------\n");
	for(i=1; i<=10; ++i){
		printf("%d x %d = %d\n", tabla, i, tabla*i);
	}
	printf("----------\n\n");
	
	system ("pause");
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
