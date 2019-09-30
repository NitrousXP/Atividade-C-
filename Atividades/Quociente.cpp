/*
Função: Um algoritmo que exiba o quociente e o resto da divisão de um número por outro
(Lembre-se, inteiro dividido por inteiro é igual inteiro).
Autor: Fernando Carreira dos Santos
Data de criação: 29/09/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int divD=0,div=0,quo=0,resto=0,vezes=0;
	printf("Informe o dividendo: ");
	scanf("%i",&divD);
	printf("Informe o divisor: ");
	scanf("%i",&div);
	quo = divD/div;
	vezes = (div * quo);
	resto = divD - vezes;
	printf("O quociente é: %i",resto);
}
