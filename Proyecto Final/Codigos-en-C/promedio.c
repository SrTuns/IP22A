#include <stdio.h>
#include <locale.h> 
#include<stdlib.h>
#include<string.h>
#include<math.h>


main(){
	setlocale(LC_ALL, "spanish");
	
	int pre, log, fis, pro, exp, ing, total,stotal;
	
	
	printf("Introduce tu calificación de precalculo: \n", pre) ;
	scanf("%d", &pre);
	
	printf("Introduce tu calificación de logica: \n", log) ;
	scanf("%d", &log);
	
	printf("Introduce tu calificación de fisisca: \n", fis);
	scanf("%d", &fis);
	
	printf("Introduce tu calificación de progamación: \n", pro);
	scanf("%d", &pro);
	
	printf("Introduce tu calificación de expresión: \n", exp);
	scanf("%d", &exp);
	
	printf("Introduce tu calificación de ingenieria: \n", ing);
	scanf("%d", &ing);
	
	total=pre+log+fis+pro+exp+ing;
	stotal=total/6;
	printf("Tu calificacion total es: %d\n", stotal);
	
	if(total<=59){
		printf("Lo siento estas reprobado\n\n");
	} else if(total<80){
		printf("Felicidades estas aprobado\n\n");
	} else if(total>90){
		printf("Felicidades  exentaste\n\n");
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

