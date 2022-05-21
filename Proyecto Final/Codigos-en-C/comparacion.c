#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "spanish");
	int n1, n2;
	printf("operadores de comparacion\n\n");
	printf("ingresa dos numeros\n\n");
	
	printf("ingresa un numero:\n\n");
	scanf("%d", &n1);

	printf("ingresa otro numero:\n\n");
	scanf("%d", &n2);
	
	if(n1<n2){
		printf("%d es menor que %d\n", n1, n2);
	}	else if(n1>n2){
		printf("%d es mayor que %d\n", n1, n2);
	}	else if(n1==n2){
		printf("%d es igual que %d\n", n1, n2);
	}
	
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
