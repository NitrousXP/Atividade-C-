/*
Fun��o: Calcular a �rea de um C�rculo
Autores: Fernando Carreira dos Santos
Data de cria��o:27/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int area=0,raio=0;
	printf("Digite o raio do circulo:\n");
	scanf("%i", &raio);
	area = (raio*raio)*3.14;
	printf("A area �: %i\n ",area);
}
