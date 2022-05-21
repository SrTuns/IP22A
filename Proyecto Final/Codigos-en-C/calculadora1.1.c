//Calculadora de operaciones basicas.
#include<stdio.h>
#include<locale.h>

main(){
       setlocale(LC_ALL, "spanish");
       int operacion, num1, num2, resultado, y;
       
do {
       printf("\nCALCULADORA\n\n");
       
       printf("1. SUMA.\n");
       printf("2. RESTA.\n");
       printf("3. MULTIPLICACION.\n");
       printf("4. DIVISION.\n");
       printf("5. MODULO.\n\n");
       
       printf("ELIGE LA OPERACIÓN A REALIZAR:");
       scanf("%d", &operacion);
       
       switch(operacion){
                   case 1:
                        printf("\nEscribe un número\n");
                        scanf("%d", &num1);
                        printf("Ingresa otro número:\n");
                        scanf("%d", &num2);
                        resultado=num1+num2;
                        printf("El resultado de la suma es: %d\n", resultado);
                        
                   break;
                   
                   case 2:
                        printf("\nEscribe un número\n");
                        scanf("%d", &num1);
                        printf("Ingresa otro número:\n");
                        scanf("%d", &num2);
                        resultado=num1-num2;
                        printf("El resultado de la resta es: %d\n", resultado);
                        
                   break;
                   
                   case 3:
                        printf("\nEscribe un número\n");
                        scanf("%d", &num1);
                        printf("Ingresa otro número:\n");
                        scanf("%d", &num2);
                        resultado=num1*num2;
                        printf("El resultado de la multiplicación es: %d\n", resultado);
                        
                   break;
                   
                   case 4:
                        printf("\nEscribe un número\n");
                        scanf("%d", &num1);
                        printf("Ingresa otro número:\n");
                        scanf("%d", &num2);
                        resultado=num1/num2;
                        printf("El resultado de la división es: %d\n", resultado);
                        
                   break;
                   
                   case 5:
                        printf("\nEscribe un número\n");
                        scanf("%d", &num1);
                        printf("Ingresa otro número:\n");
                        scanf("%d", &num2);
                        resultado=num1%num2;
                        printf("El residuo de la división es: %d\n", resultado);
                        
                   break;
                   
                   default:
                        printf("\nIntenta otra vez\n");
                   break;
					}
       printf("\nPresione 1 para salir:\n");
       scanf("%d", &y);
//Vuelve al inicio si se preciona una opción diferente a 1.     
           }while(y!=1);
              
       puts("\n-------------by Chris----------------");
       
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
