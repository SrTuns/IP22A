#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h> 

#define MenuInicio 1 
#define MenuFin 26 
#define LineaDeInicio 8

void goy(int y); 

main() {
       setlocale(LC_ALL, "spanish");
       system("color 1F");
       FILE *archivo;
       char caracter;
       int Menu;
       
       printf("\t\t\t+------------------------------------------------------------------------+\n");
       printf("\t\t\t¦\t\t\t\t\t\t\t\t\t ¦");
       printf("\n\t\t\t¦\t\t\t  --MENU DE CONCEPTOS--\t\t\t\t ¦\n\t\t\t¦\t\t\t\t\t\t\t\t\t ¦");
       printf("\n\t\t\t¦\t\t\t  Seleccione una opción:\t\t\t ¦\n\t\t\t¦\t\t\t\t\t\t\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t\t\t\t\t\t\t ¦\n");
       printf("\t\t\t¦\t\t+-----------------------------------+\t\t\t ¦\n");
       goy(LineaDeInicio);
       printf("\t\t\t¦\t\t¦      1 Lenguaje de Programación C ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      2 Estructura General         ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      3 Comentario                 ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      4 Palabras Reservadas        ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      5 Identificadores            ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      6 Tipos de Datos Lenguaje C  ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      7 Calificadores de Datos     ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      8 Variables en Lenguaje C    ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      9 Constantes                 ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      10 Secuencias de Escape      ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      11 Inclusión de archivos     ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      12 Operadores Aritméticos    ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      13 Printf y Scanf            ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      14 Operaciones relacionales  ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      15 if, else, elseif y switch ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      16 Operadores lógicos y tabla¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      17 Bucles while, DoWhile For ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      18 V. locales y globales     ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      19 Declaración y sintaxis    ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      20 Arrays y Vectores         ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      21 Matrices 2D y 3D          ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      22 Punteros                  ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      23 Estructuras y uniones     ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      24 fopen y fclose            ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      25 Pilas y colas             ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t¦      -Regresar al Menú Principal- ¦\t\t\t ¦\n");
       printf("\t\t\t¦\t\t+-----------------------------------+\t\t\t ¦\n");
       printf("\t\t\t¦\t\t\t\t\t\t\t\t\t ¦\n");
       printf("\t\t\t+------------------------------------------------------------------------+\n");
       
       Menu = 1;
       goy(LineaDeInicio);
       printf("\t\t\t¦\t\t¦  ==>");
       
       while(1) {
                sleep(200); 
                if(GetAsyncKeyState(VK_UP)){ 
                Menu = Menu == MenuInicio ? MenuFin: --Menu;
                printf("\r\t\t\t¦\t\t¦     "); 
                goy(LineaDeInicio + Menu-1); 
                printf("\t\t\t¦\t\t¦  ==>");
                }else if(GetAsyncKeyState(VK_DOWN)){ 
                Menu = Menu == MenuFin ? MenuInicio: ++Menu;
                printf("\r\t\t\t¦\t\t¦     ");
                goy(LineaDeInicio + Menu-1);
                printf("\t\t\t¦\t\t¦  ==>");
                }else if(GetAsyncKeyState(VK_RETURN)){ 
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
                   archivo = fopen("1 Lenguaje de Programación C.txt", "r");
	if(archivo==NULL) {
		printf("El archivo no se abrio correctamente\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {
			//La función: feof Comprueba el indicador al final del archivo

			caracter=fgetc(archivo);
			//La función fgetc obtiene el siguiente caracter
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
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
                   archivo = fopen("2 Estructura General de un Programa.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==3)
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
                   archivo = fopen("3 Comentario.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   } 
       if (Menu==4)
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
                   archivo = fopen("4 Palabras Reservadas.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==5)
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
                   archivo = fopen("5 Identificadores.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==6)
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
                   archivo = fopen("6 Tipos de Datos en Lenguaje C.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==7)
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
                   archivo = fopen("7 Calificadores de Datos.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==8)
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
                   archivo = fopen("8 Variables en Lenguaje C.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==9)
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
                   archivo = fopen("9 Constantes.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==10)
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
                   archivo = fopen("10 Secuencias de Escape.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==11)
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
                   archivo = fopen("11 Inclusión de archivos de cabecera.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==12)
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
                   archivo = fopen("12 Operadores Aritméticos.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==13)
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
                   archivo = fopen("13 Printf y Scanf.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==14)
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
                   system("cls");//by Chris
                   archivo = fopen("14 Operaciones relacionales o de comparación.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==15)
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
                   archivo = fopen("15 if, else, elseif y switch.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==16)
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
                   archivo = fopen("16 Operadores lógicos y tabla de verdad.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==17)
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
                   archivo = fopen("17 Bucles while, Do while y For.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==18)
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
                   archivo = fopen("18 Variantes locales y globales.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==19)
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
                   archivo = fopen("19 Declaración y sintaxis.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==20)
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
                   archivo = fopen("20 Arrays y Vectores.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==21)
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
                   archivo = fopen("21 Matrices bidimensionales y tridimensionales.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==22)
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
                   archivo = fopen("22 Punteros.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==23)
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
                   archivo = fopen("23 Estructuras y uniones.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==24)
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
                   archivo = fopen("24 fopen y fclose.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==25)
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
                   archivo = fopen("25 Pilas y colas.txt", "r");
	if(archivo==NULL) {
		printf("Tu desta no jala\n");
	} else {
		printf("Texto\n\n\n\n");
		while(feof(archivo)==0) {

			caracter=fgetc(archivo);
			printf("%c", caracter);
		}
	}
	fclose(archivo);
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
                   system("menuconceptos.exe");
                   return 0;
                   }
       if (Menu==26)
       {
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
