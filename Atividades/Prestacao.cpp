/*
Fun��o: Efetuar o c�lculo e a apresenta��o do valor de uma presta��o em atraso, utilizando a f�rmula:
PRESTACAO = VALOR+(VALOR*(TAXA/100)*TEMPO).
Autor: Fernando Carreira dos Santos
Data de cria��o: 28/09/2019
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int prestacao=0,valor=0,taxa=0,tempo=0;
	printf("Insira o Valor da presta��o comum: \n");
	scanf("%i", &valor);
	printf("Insira o Valor da taxa a ser paga: \n");
	scanf("%i", &taxa);
	printf("Insira o Tempo demorado: \n");
	scanf("%i", &tempo);
	prestacao = valor+(valor*(taxa/100)*tempo);
	printf("O valor da presta��o � de: %i\n:",prestacao);
}
