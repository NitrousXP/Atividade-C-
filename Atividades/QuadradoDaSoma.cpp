/*
Fun��o: Efetuar a leitura de 3 valores inteiros e apresentar como o resultado finalo quadrado da soma dos n�meros.
Autor: Fernando Carreira dos Santos
Data de cria��o: 25/09/2019
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int num1=0, num2=0, num3=0,soma=0, quad=0;
	printf("Insira o Primeiro N�mero: ");
	scanf("%i", &num1);
	printf("Insira o Segundo N�mero: ");
	scanf("%i", &num2);
	printf("Insira o Terceiro N�mero: ");
	scanf("%i", &num3);
	soma = num1+num2+num3;
	quad = soma * soma;
	printf("O quadrado � : %i\n", quad);
}
