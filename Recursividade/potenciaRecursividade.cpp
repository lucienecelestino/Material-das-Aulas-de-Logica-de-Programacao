/*	Name: recursividadeDireta1.cpp

	Author: Luciene Celestino

	Date: 12/05/25 10:06

	Description: Demonstrar o uso de funções recursivas diretas

*/
 
#include <stdio.h>
 
int potenciaRecursividade(int, int);
 
main(){
	
	
	int expoente = 0;
	int base = 0;
	int potencia = 0;
	
	
	printf("Digite a base da potencia");
	scanf("%d", base);
	printf("Digite o expoente da potencia");
	scanf("%d", expoente);
	
	potencia = potenciaRecursividade(base,expoente);
}//fim 

int potenciaRecursividade(int base, int expoente){
	int potencia;
	if(expoente <= 1){
		printf("%d", potencia);
		return;
	}
	printf("%d", potencia);
	expoente--;
	potenciaRecursividade(expoente);
	return;
}
