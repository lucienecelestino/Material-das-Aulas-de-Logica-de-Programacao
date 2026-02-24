/*
	Name: TrocaporPonteiros.cpp
	Copyright: 
	Author: Luciene Celestino
	Date: 02/06/25 10:44
	Description: Programa que troca o conteudo de 
				variaveis na memoria feito por meio
				 de uma funções usando ponteiros
*/

#include <stdio.h>
void troca(int * , int *); // tem que identificar que esta sendo por ponteiro ou seja o "*"
main(){
	
	int a,b;
	a = 10;
	b = 7;
	
	printf("\nA: %d",a);
	printf("   B: %d",b);
	
	troca(&a,&b); //estamos passando por referencia
	
	printf("\nA: %d",a);
	printf("   B: %d",b);
}//fim do programa

// função para trocar conteudo de memoria de duas variaveis
// isso faz vc não mais declarar uma variavel comum e sim o endereço da memoria;
void troca(int *a, int *b)// PASSAGEM DE PARAMETRO POR REFERENCIA
{
	
    int	aux = 0;
    aux = *b;
	*b = *a; //EH ASSIM QUE SE LÊ: o endereço de b aponta para a
	*a = aux;
	
	// FAZENDO A TROCA DE ENDEREÇOS, NÃO MAIS A TROCA DE VALORES, EXAMENETE PQ ESTAMOS USANDO O PONTEIRO
}
