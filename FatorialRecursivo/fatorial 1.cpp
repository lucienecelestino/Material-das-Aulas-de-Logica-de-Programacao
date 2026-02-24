/*
	Name: Fatorial.cpp
	Author: luciene Celestino
	Date: 19/05/25 08:01
	Description: Progrma para calcular o fatorial, por meio de uma função recursiva direta
*/

#include <stdio.h>
#include <conio.h>
//Prototipação

//afuncao recursiva vai me trazer um valor, ou seja a resposta
int fatorial(int);

//Variaveis globais
int fat = 1;
main(){
	
	int num, result;
	printf("Digite um numero para calcular o fatorial: \n");
	scanf("%d", &num);
	printf("%d! = ", num);
	result = fatorial(num);
	printf("= %d", result);
	
}//fim do programa

//Funçao recursiva para calcular o fatorial de um numero
int fatorial(int num){
	
	
	if(num == 1){
		printf(" %d ", num);
		return 1;	
	}	
	
	

//primeira forma

//	fat = fat * num;
//	num--;
//fatorial(num-1); //invoke recursivo	
	printf(" %d x", num);

	//colocando tudo isso que esta comentado em uma unica linha, ficando tudo pwndurado
	return num * fatorial(num-1); //invoke recursivo
}
