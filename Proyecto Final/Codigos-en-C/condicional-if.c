#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "spanish");
	
	int cl, n1, n2;
	
	puts("Operadores condicionales");
	puts("Condicional IF (si)");
	puts("\n¿Comó esta el clima?\n");
	
	printf("1. Soleado\n\n");
	printf("2. Lloviendo\n\n");
	scanf ("%d", &cl);
	
	if(cl==1) {
		printf("\nLleva Agua\n\n");
	}else{
		printf("\nLleva Paraguas\n\n");
	}
	
	/*
	printf("\nnumeros divisibles\n\n");
	printf("Escribe dos numeros enteros\n\n");
	scanf("%d %d", &n1, &n2);
	if(n1%n2==0){
		printf("%d es divisible por %d\n\n", n1, n2);
	} else {
	printf("No son divisibles\n");
		}
	//estructuras de seleccion, secuencias, selecivas, repeticion */
	
	
	
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
