/*
Fun��o: Um algoritmo que exiba o quociente e o resto da divis�o de um n�mero por outro
(Lembre-se, inteiro dividido por inteiro � igual inteiro).
Autor: Fernando Carreira dos Santos
Data de cria��o: 29/09/2019
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
	printf("O quociente �: %i",resto);
}
