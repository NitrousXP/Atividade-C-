/*
Função: Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula:
PRESTACAO = VALOR+(VALOR*(TAXA/100)*TEMPO).
Autor: Fernando Carreira dos Santos
Data de criação: 28/09/2019
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int prestacao=0,valor=0,taxa=0,tempo=0;
	printf("Insira o Valor da prestação comum: \n");
	scanf("%i", &valor);
	printf("Insira o Valor da taxa a ser paga: \n");
	scanf("%i", &taxa);
	printf("Insira o Tempo demorado: \n");
	scanf("%i", &tempo);
	prestacao = valor+(valor*(taxa/100)*tempo);
	printf("O valor da prestação é de: %i\n:",prestacao);
}
