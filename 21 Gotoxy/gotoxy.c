#include <stdio.h>
#include <locale.h>
#include <windows.h> //Sirve para las coordenadas

void gotoxy(int x, int y) {
	HANDLE hcon;
	hcon =GetStdHandle (STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon, dwPos);
}

main() {
	setlocale(LC_ALL, "spanish");
	system("color 91"); //Para poner color de fondo

	gotoxy(10,10); //Ubicación del texto
	printf("ossasqpknqipdqwipdnqipdnqwpdnqwpndpqwd\n");


	system("pause");
	return 0;
}
