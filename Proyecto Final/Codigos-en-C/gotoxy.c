#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y){
	HANDLE hcon;
	hcon =GetStdHandle (STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon, dwPos);
	
}

main(){
	
	setlocale(LC_ALL, "spanish");
	
	gotoxy(10,10);
	printf("\nEstoy en la fila 10, columna 10\n\n");
	
	
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
