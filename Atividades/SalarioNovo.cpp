/*
Função: Le o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do novo salário.
Autor: Fernando Carreira dos Santos
Data de criação: 28/09/2019
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int salario=0,percentual=0,nsalario=0;
	printf("Insira o valor do salário atual: ");
	scanf("%i", &salario);
	printf("Insira o percentual de aumento");
	scanf("%i", &percentual);
	nsalario = salario + (salario/percentual) * salario));
	printf("O Novo salário é de: %i",nsalario);
}
