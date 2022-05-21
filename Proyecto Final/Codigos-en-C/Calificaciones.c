#include <stdio.h>
#include <locale.h> 

main(){
	setlocale(LC_ALL, "spanish");
	
	int pre, log, fis, pro, exp, ing, total, total2;

	printf("\n> Programa para sacar tu promedio <\n");
	
	
	printf("\n>> Introduce tu calificación de Precalculo: \n", pre);
	scanf("%d", &pre);
	
	printf("\n>> Introduce tu calificación de Lógica: \n", log);
	scanf("%d", &log);
	
	printf("\n>> Introduce tu calificación de Física: \n", fis);
	scanf("%d", &fis);
	
	printf("\n>> Introduce tu calificación de Progamación: \n", pro);
	scanf("%d", &pro);
	
	printf("\n>> Introduce tu calificación de Expresión: \n", exp);
	scanf("%d", &exp);
	
	printf("\n>> Introduce tu calificación de Ingeniería: \n", ing);
	scanf("%d", &ing);
	
	total=pre+log+fis+pro+exp+ing;
	total2=total/6;

	printf("\n>> Tu calificación total es: %d <<\n", total2);

	if(total2<=60) {
		printf("\n>> Tu promedio es de %d, por lo que has reprobado! <<\n\n", total2);
	} else if(total2<89) {
		printf("\n>> Tu promedio es de %d, felicidades!, tienes una calificación decente <<\n\n", total2);
	} else if (total2<99) {
		printf("\n>> Tu promedio es de %d, Felicidades!, tu calificación es muy buena! <<\n\n", total2);
	} else if (total2==100) {
		printf("\n>> Tu promedio es de %d..., ¿Seras Albert Einstein o quizas usaste photomath? <<\n\n");
	} else if (total2>=101) {
		printf("\n¿ Ja,ja,ja, chistosito ?\n\n");
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
