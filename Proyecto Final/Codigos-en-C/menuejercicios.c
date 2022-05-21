#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h> 

#define MenuInicio 1 
#define MenuFin 24 
#define LineaDeInicio 8

void goy(int y); 

main() {
       setlocale(LC_ALL, "spanish"); 
       system("color 1F");
       int Menu;
       printf("\t\t\t+------------------------------------------------------------------------+\n");
       printf("\t\t\t¦\t\t\t\t\t\t\t\t\t ¦");
       printf("\n\t\t\t¦\t\t\t  --MENU DE EJERCICIOS--\t\t\t ¦\n\t\t\t¦\t\t\t\t\t\t\t\t\t ¦");
       printf("\n\t\t\t¦\t\t\t  Seleccione una opción:\t\t\t ¦\n\t\t\t¦\t\t\t\t\t\t\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t\t\t\t\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t+-------------------------+\t\t\t ¦\n");
       goy(LineaDeInicio);
       printf("\t\t\t¦\t\t\t¦      1. Arrays          ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      2. Bucles          ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      3. Calculadora     ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      4. Calificaciones  ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      5. Comentarios     ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      6. Comparación     ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      7. Condicional-if  ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      8. Contraseña      ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      9. E. de Archivo   ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      10. Estrella       ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      11. Funciones de C ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      12. Función Pow    ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      13. gotoxy         ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      14. L. de Archivo  ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      15. Menú           ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      16. Potencias      ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      17. Promedio       ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      18. Else           ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      19. Suma Continua  ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      20. Switch         ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      21. Tablas         ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      22. Titulo         ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦      23. Variables      ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t¦         Regresar        ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t+-------------------------+\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t\t\t\t\t\t\t ¦\n");
       printf("\t\t\t+------------------------------------------------------------------------+\n");
       
       Menu = 1;
       goy(LineaDeInicio);
       printf("\t\t\t¦\t\t\t¦  ==>");
       
       while(1) {
                sleep(200); 
                if(GetAsyncKeyState(VK_UP)){ 
                Menu = Menu == MenuInicio ? MenuFin: --Menu;
                printf("\r\t\t\t¦\t\t\t¦     "); 
                goy(LineaDeInicio + Menu-1); 
                printf("\t\t\t¦\t\t\t¦  ==>");
                }else if(GetAsyncKeyState(VK_DOWN)){ 
                Menu = Menu == MenuFin ? MenuInicio: ++Menu;
                printf("\r\t\t\t¦\t\t\t¦     ");
                goy(LineaDeInicio + Menu-1);
                printf("\t\t\t¦\t\t\t¦  ==>");
                }else if(GetAsyncKeyState(VK_RETURN)){ 
                break;
                }
                }
       if (Menu==1){
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
                   system("arrays.exe");
	               return 0;
                   }
       if (Menu==2){
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
                   system("bucles.exe");
	               return 0;
                   }
       if (Menu==3){
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
                   system("calculadora1.1.exe");
	               return 0;
                   } 
       if (Menu==4){
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
                   system("Calificaciones.exe");
	               return 0;
                   }
       if (Menu==5){
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
                   system("comentarios.exe");
	               return 0;
                   }
       if (Menu==6){
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
                   system("comparacion.exe");
	               return 0;
                   }
       if (Menu==7){
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
                   system("condicional-if.exe");
	               return 0;
                   }
       if (Menu==8){
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
                   system("Contrasena.exe");
	               return 0;
                   }
       if (Menu==9){
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
                   system("escritura-archivo.exe");
	               return 0;
                   }
       if (Menu==10){
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
                   system("Estrella.exe");
	               return 0;
                   }
       if (Menu==11){
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
                   system("funciones_de_c.exe");
	               return 0;
                   }
       if (Menu==12){
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
                   system("funcion-pou.exe");
	               return 0;
                   }
       if (Menu==13){
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
                   system("gotoxy.exe");
	               return 0;
                   }
       if (Menu==14){
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
                   system("Lectura-archivo.exe");
	               return 0;
                   }
       if (Menu==15){
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
                   system("menu.exe");
	               return 0;
                   }
       if (Menu==16){
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
                   system("potencias.exe");
	               return 0;
                   }
       if (Menu==17){
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
                   system("promedio.exe");
	               return 0;
                   }
       if (Menu==18){
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
                   system("prueba-else.exe");
	               return 0;
                   }
       if (Menu==19){
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
                   system("suma-continua.exe");
	               return 0;
                   }
       if (Menu==20){
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
                   system("switch.exe");
	               return 0;
                   }
       if (Menu==21){
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
                   system("tablas.exe");
	               return 0;
                   }
       if (Menu==22){
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
                   system("titulo.exe");
	               return 0;
                   }
       if (Menu==23){
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
                   system("variables.exe");
	               return 0;
                   }
       if (Menu==24){
                   system("cls");
                   printf("Regresando al menú anterior.");
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
                   }
       system("cls");
       system("menu-test.exe");
       return 0;
}
void goy(int y) { 
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD pos;
     pos.X = 0;
     pos.Y = y;
     SetConsoleCursorPosition(hConsole, pos);
}
