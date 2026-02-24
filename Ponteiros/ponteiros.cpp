/*
	Name: Ponteiro.cpp
	Author: Luciene Celestino
	Date: 02/06/25 09:58
	Description: Programa para demonstrar a utilização
				básica dos ponteiros em linguagem c
*/

#include <stdio.h>

main(){
	
	int a, b, soma;
	char resposta;
	float total;
	float valor;
	int vetor[5];
//	a = b = 0;
	
	printf("\nA: %d\n", a);
	printf("\nB: %d", b);	
	printf("\nSoma: %d", soma);
	printf("\nResposta: %c", resposta);
	printf("\nTotal: %f", total);	
	printf("\nValor: %f", valor);
	printf("\nConteudo do vetor");
		for(int i=0; i<5; i++){
		printf("|%d| ", vetor[i]);
	}		
	
	puts("\n Endereço de Memoria/ Ponteiros:");
	printf("\n A: %d", &a);
	printf("\n B: %d", &b);
	printf("\n Soma: %d", &soma);
	printf("\n Resposta: %d", &resposta);
	printf("\n Total: %d", &total);	
	printf("\n Valor: %d\n", &valor);		
	printf("\nEndereco de Memoria do vetor");
		for(int i=0; i<5; i++){
		printf("|%d| ", &vetor[i]);
	}
	
	
	puts("\n Ponteiros de:");
	printf(" A: %p", &a);
	printf("\n B: %p", &b);
	printf("\n Soma: %p", &soma);
	printf("\n Resposta: %p", &resposta);
	printf("\n Total: %p", &total);	
	printf("\n Valor: %p", &valor);	
	printf("\nConteudo do vetor");
	for(int i=0; i<5; i++){
		printf("|%p| ", &vetor[i]);
	}
}
		
// variaveis do tipo int ocupa 4 bites de memoria
// a do tipo char ocupa 1 bite
// do tipo float ocupa 4 bytes
// a ordem é determinada pelo HERP
// espaços contiguos na memoria, um ao lado do outro

