#include <stdio.h>

// nombre - codigo - edad - domicilio - email

main () {

    char nombre[50];

    printf("\nIngresa tu Nombre:\n");
    gets(nombre); //capturar dato

    char codigo[15];

    printf("\nIngresa tu Codigo:\n");
    gets(codigo);

    char edad[3];

    printf("\nIngresa tu edad:\n");
    gets(edad);

    char domicilio[50];

    printf("\nIngresa tu Domicilio:\n");
    gets(domicilio);

    char email[50];

    printf("\nIngresa tu Email:\n");
    gets(email);

    puts("\nTu Nombre es:");
    puts(nombre);

    puts("\nTu Codigo es:");
    puts(codigo);

    puts("\nTu Edad es:");
    puts(edad);

    puts("\nTu Domicilio es:");
    puts(domicilio);

    puts("\nTu Email es:");
    puts(email);

    system("pause");
    return 0;

}
