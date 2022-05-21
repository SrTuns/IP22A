#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "spanish");
	int op;// op=operacion
	float ttl;//ttl=total, 
	int n1, n2;

	printf("que quieres hacer?\n\n");
	printf("1. suma\n");
	printf("2. resta\n");
	printf("3. multipicacion\n");
	printf("4. divicion\n");
	printf("5. modulo\n");		

	
	scanf("%.2f", &op);
	
	printf("ingresa un numero\n\n");
		scanf("%d", &n1);
	printf("ingresa un numero\n\n");
		scanf("%d", &n2);	
	
			
	switch(op){
		case 1:
			
			ttl=n1+n2;
			printf("%d + %d =%.2f", n1, n2, ttl);
		break;
		case 2:
			
			ttl=n1-n2;
			printf("%d - %d =%.2f", n1, n2, ttl);
		break;
		case 3:
			
			ttl=n1*n2;
			printf("%d * %d =%.2f", n1, n2, ttl);
		break;
		case 4:
			
			ttl=n1/n2;
			printf("%d / %d =%.2f", n1, n2, ttl);
		break;
		case 5:
			
//			ttl=n1%n2;
//			printf("%.2f %% %.2f =%.2f", n1, n2, ttl);
//		break;
	




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
}
