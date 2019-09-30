/*
Função: Calcular o preço de venda de um terreno retangular, vendo dadas as medidas de frente e de um dos lados do terreno (em metros) e o preço do metro quadrado.
Autor: Fernando Carreira dos Santos
Data de criação: 28/09/2019
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int frente=0, lado=0, mq=0, area=0, valor=0;
	printf("Insira a quantia de Metros na Frente: \n");
	scanf("%i", &frente);
	printf("Insira a quantia de Metros do Lado: \n");
	scanf("%i", &lado);
	printf("Insira o valor do metro quadrado: \n");
	scanf("%i", &mq);
	area = frente * lado;
	valor = area * mq;
	printf("O valor do terreno é : %i\n",valor);
	return 0;
}
