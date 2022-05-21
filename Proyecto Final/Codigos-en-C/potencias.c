#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
main(){
setlocale(LC_ALL, "spanish");
int base,exponente, i, factorial=1, acumulador;

printf("Calcula la potencia de un numero\n\n");
printf("Ingresa la base: \n");
scanf("%d", &base);

printf("Ingresa el exponente: \n");
scanf("%d", &exponente);

for(i=0; i<exponente; i++){
	acumulador=acumulador*base;
}
printf("el resultado es: %d\n\n", acumulador);

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
