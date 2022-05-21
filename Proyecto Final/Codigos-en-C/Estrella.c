#include<stdio.h>
#include<conio.h>
int main()
{
int n, s, i, j;
printf("Ingrese el número de filas: ");
scanf("%d",&n);
for(i = 0; i <= n; i++)
{
for(s = n; s > i; s--)
printf(" ");
for(j=0; j<i; j++)
printf("* ");
printf("\n");
}
for(i = 1; i < n; i++)
{
for(s = 0; s < i; s++)
printf(" ");
for(j = n; j > i; j--)
printf("* ");
// línea final después de cada fila
printf("\n");
}
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
