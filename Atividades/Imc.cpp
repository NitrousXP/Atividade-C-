/*
Função: Um programa que calcula o IMC de um aluno
Autor: Fernando Carreira dos Santos
Data de criação: 29/09/2019
*/

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float peso=0, altura=0, resultado=0;
	printf("Insira o peso do aluno: ");
	scanf("%f",peso);
	printf("Insira a altura do aluno: ");
	scanf("%f",altura);
	resultado = peso / altura * altura;
	printf("O IMC do aluno é de: %f",resultado);
}
