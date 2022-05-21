#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
main(){
setlocale(LC_ALL, "spanish");
int num, i,acumulador;
char pregunta;
acumulador=0;

printf("Suma continua de numeros\n\n");

do{
	printf("\nIntroduzca un numero: \n");
	scanf("%d", &num);
	acumulador+=num;
	
	printf("\n¿Desea sumar otro numero?(s/n)\n");
	fflush(stdin);
	scanf("%c", &pregunta);
	
} while (pregunta!='n');

printf("\nLa suma de tus numeros es: %d\n\n", acumulador);

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
