#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "spanish");
	
	char usuario[50];
	int codigo;
	
	printf("operador distinto de!\n\n");
	printf("ingresa tu usuario\n\n");
	scanf("%s", &usuario);
	
	printf("Ingresa tu codigo de acceso\n\n");
	scanf("%d", &codigo);
	
	if(codigo!=3843){
		printf("codigo incorrecto\n\n");
	} else {
		printf("bienvenido %s\n\n", usuario);
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
