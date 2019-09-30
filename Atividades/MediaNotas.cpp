/*
Função: Recebe 4 notas de um aluno e calcula a média das notas
Autor: Fernando Carreira dos Santos
Data de criação: 29/09/2019
*/

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "");
	int n1=0,n2=0,n3=0,n4=0,media=0;
	printf("Insira a primeira nota");
	scanf("%i", &n1);
	printf("Insira a segunda nota");
	scanf("%i", &n2);
	printf("Insira a terceira nota");
	scanf("%i", &n3);		
	printf("Insira a quarta nota");
	scanf("%i", &n4);
	media = n1 + n2 + n3 + n4 / 4;
	printf("A média das notas é de: %i",media);
}
