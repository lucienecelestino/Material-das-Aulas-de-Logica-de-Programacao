/*
	Name: TrocaTroca.cpp
	Copyright: 
	Author: Luciene Celestino
	Date: 02/06/25 10:44
	Description: Programa para demosntrar TROCA entre
				variáveis na memória
*/

#include <stdio.h>

main(){
	
	int a,b;
	a = 10;
	b = 7;
	
	printf("\nA: %d",a);
	printf("   B: %d",b);
	
	a = a + b;
	b = a -b;
	a = a - b;
	
	printf("\nA: %d",a);
	printf("   B: %d",b);
}//fim do programa
