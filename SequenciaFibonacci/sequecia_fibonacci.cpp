/*
	Name: Programa de Fibonacci
	Author: Luciene Celestino
	Date: 14/04/25 10:14
	Description: progama que o usuário decide quantos numeros de fibonacci quer ver
*/
#include<stdio.h>

int main()
{
	long int atual = 1;
	long int anterior = 0;
	long int proximo = 1;
	long int elementos = 0;
	int i = 0;
	
	
	printf("Quantos numeros de Fibonacci, voce deseja ver?");
	scanf("%d",&elementos);
	
	do 
	{
		printf(" %d ",proximo);
		proximo = atual + anterior;
		anterior = atual;
     	atual = proximo;
     	i++;

	}while(i < elementos);
	
	

	
	
}//fim do programa
