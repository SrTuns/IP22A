#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "spanish");
	
	int cantidad;
	float precio, iva, total, descuento;

	printf("Total de Compras\n\n");

	cantidad=2;
	precio=128;
	total=cantidad*precio;

	descuento=total*.15;
	total=total-descuento;

	iva=total*.16;
	total=total+iva;

	printf("El total es: $%.2f\n\n", total);

	system("pause");
	return 0;
}
