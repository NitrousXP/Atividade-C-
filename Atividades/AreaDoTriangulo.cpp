/*
Fun��o: Calcular a �rea de um tri�ngulo
Autores: Fernando Carreira dos Santos
Data de cria��o:27/09/2019
*/

#include <stdio.h>

int main(){
	int b=0,h=0,area=0;
	printf("Informe o valor da Base:\n");
	scanf("%i", &b);
	printf("Informe o valor da Altura:\n");
	scanf("%i", &h);
	area=b*h/2;
	printf("Area: %i",area);
}
