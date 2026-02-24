/*Nome: Carregandovetorfuncao.cpp 
Author: Luciene Celestino
data: 21/04/2025
descrição: um programa que carrega um vetor, e depois é colocado em uma função*/
#include <stdio.h>
 
void  carregarVet(int *numvet, int tamanho);
void exibirVetInverso(int *numvet, int tamanho);
int main()
{
    int numvet[10];
    int i;
    int tamanho = 10;
    i = 0;
     puts("\nDigite 10 numeros para carregar o vetor");
     carregarVet(numvet, tamanho);
     puts("\nVetor na ordem inversa:");
     exibirVetInverso(numvet, tamanho);
}// fim do programa
 
 
// copro das funcoes
void carregarVet(int *numvet, int tamanho )
{
    // carregando o vetor com uma função
     int i= 0;  
    do{
    printf("\nDigite o %do numero ", i +1 );
    scanf("%d", &numvet[i]);
    i++;
    }  while(i < tamanho);
    puts("\n");
}    
void exibirVetInverso(int *numvet, int tamanho)
{
    	  // mostrando o vetor com ordem inversa com uma função
    	int i = tamanho -1;
    	 do{
    	     printf(" |%d| ", numvet[i]);
    	     i--;
    	 } while(i >= 0);
    	 puts("\n");
}