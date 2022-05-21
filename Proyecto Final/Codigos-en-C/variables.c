#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "spanish");
	
	int cantidad, precio, total, precio2, cantidad2;
	puts("Uso de variable en C");
	precio=18;
	cantidad=20;	
	precio2=12;
	cantidad2=20;
	total=(precio*cantidad)+(precio2*cantidad2);
	printf("El total es: %d\n", total);
	
	
	
	
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
