#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int edad,pulsaciones,continuar;
	fflush(stdin);
	system("color 0F");
	do{
	printf("\t\tCalcular el n%cmero de pulsaciones que una persona debe tener por cada 10 segundos de ejercicio\t\t",163);
	printf("\n\n\t\tIntroduce tu edad: ");
	scanf("%d",&edad);
	pulsaciones=(220-edad)/10;
	printf("\n\t\tDebes tener %d pulsaciones por cada 10 segundos de ejercicio",pulsaciones);
	printf("\n\n\tSi quiere seguir calculando presiona (0) presiona otra tecla para salir: ");
	scanf("%d",&continuar);
	system("cls");
	}
	while(continuar==0);
	printf("\t\tCalcular el n%cmero de pulsaciones que una persona debe tener por cada 10 segundos de ejercicio\t\t",163);
	printf("\n\n\t\t\t\tHasta luego\t\t\t\t\t");
	return 0;
}
