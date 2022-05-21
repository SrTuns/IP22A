#include <stdio.h>
#include <locale.h>
#include <stdlib.h>   //control de procesos
#include <windows.h>
#define SEMANA 7   // constantes siempre van en mayuscula y no terminan en ;

main (){
	setlocale(LC_ALL, "spanish");
	
	printf("\nARRAYS - ARREGLOS EN LENGUAJE\n\n");
	printf("Arreglos numéricos\n\n");
	
	int valores[5], i;
	valores[0]=100;
	valores[1]=543;
	valores[2]=524;
	valores[3]=901;
	valores[4]=372;
	
	for(i=0; i<5; i++){
	
	printf("%d\n", valores[i]);
}

	printf("\nArreglos alfabéticos\n\n");
	
	char datosP[7][50]={"Nombre: Gerardo Cuevas", "Edad: 19", "Altura:1.85", "Hobbies: Rapear", "Color: Rojo", "Pelicula: Sonic 2", "Nivel Steam: 20" }; //datosp=datos personales
	
	for(i=0; i<7; i++){
		printf("%s\n", datosP[i]);
	
	}
	
	printf("\n\nArrays unidimencionales\n\n");
	float ventas[SEMANA]={
		3000.50, 2000.42, 4000.37, 4500.28, 4500.28, 1200.94, 1000.10
	};
	
	float total=0;
	
	printf("\n-------\n");
	for(i=0; i<SEMANA; i++){
	total+=ventas[i];
	printf("%.2f\n",ventas[i]);
    }
    printf("-------\n");
    
    printf("Total= %.2f\n\n", total);
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

