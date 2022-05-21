#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h> //bibliotecas necesarias

#define MenuInicio 1 //1er num del menu
#define MenuFin 3 //ultimo numero del menu
#define LineaDeInicio 8 //la linea donde aparecera el cursor

void goy(int y); //llama a la funcion declarada abajo

main() {
       setlocale(LC_ALL, "spanish"); //Que esta en español :)
       system("color 1F");
       int Menu;
       printf("\t\t\t+------------------------------------------------------------------------+\n");
       printf("\t\t\t¦\t\t\t\t\t\t\t\t\t ¦");
       printf("\n\t\t\t¦\t\t--TRABAJO FINAL FUNDAMENTOS DE PROGRAMACION--\t\t ¦\n\t\t\t¦\t\t\t\t\t\t\t\t\t ¦");
       printf("\n\t\t\t¦\t\t\t  Seleccione una opción:\t\t\t ¦\n\t\t\t¦\t\t\t\t\t\t\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t\t\t\t\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t+------------------------+\t\t\t ¦\n");
       goy(LineaDeInicio);
       printf("\t\t\t¦\t\t\t¦      1.Conceptos       ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      2.Ejercicios      ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      3.Salir           ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t+------------------------+\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t\t\t\t\t\t\t ¦\n\t\t\t¦\t\t\t\t\t\t\t\t\t ¦\n\t\t\t¦\t\t\t\t\t\t\t\t\t ¦\n");
       printf("\t\t\t+------------------------------------------------------------------------+\n");
       
       Menu = 1;
       goy(LineaDeInicio);//Aqui es donde aparere el cursor
       printf("\t\t\t¦\t\t\t¦  ==>");
       
       while(1) {
                sleep(200); //retrasa un poco el programa
                if(GetAsyncKeyState(VK_UP)){ //cuando presionas arriba
                Menu = Menu == MenuInicio ? MenuFin: --Menu;
                printf("\r\t\t\t¦\t\t\t¦     "); //borra el cursor si no esta seleccionado
                goy(LineaDeInicio + Menu-1); 
                printf("\t\t\t¦\t\t\t¦  ==>");
                }else if(GetAsyncKeyState(VK_DOWN)){ //cuando presionas abajo
                Menu = Menu == MenuFin ? MenuInicio: ++Menu;
                printf("\r\t\t\t¦\t\t\t¦     ");
                goy(LineaDeInicio + Menu-1);
                printf("\t\t\t¦\t\t\t¦  ==>");
                }else if(GetAsyncKeyState(VK_RETURN)){ //cuando presionas enter
                break;
                }
                }
       if (Menu==1)
       {
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
                   system("menuconceptos.exe");
                   }
       if (Menu==2)
       {
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
                   }
       if (Menu==3)
       {
                   system("cls");
                   printf("Saliendo del programa.");
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
                   system("Logo-out.exe");
                   } 
       return 0;
}
void goy(int y) { //funcion declarada
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD pos;
     pos.X = 0;
     pos.Y = y;
     SetConsoleCursorPosition(hConsole, pos);
}
