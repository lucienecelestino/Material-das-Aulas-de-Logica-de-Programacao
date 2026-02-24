/*

	Name: recursividadeDireta1.cpp

	Author: Luciene Celestino

	Date: 12/05/25 10:06

	Description: Demonstrar o uso de funções recursivas diretas

*/
 
#include <stdio.h>
 
void contagemRegressiva(int);
 
main()

{

	int num=0;

	printf("Digite um numero para iniciar a contagem regressiva: ");

	scanf("%d",&num);

	contagemRegressiva(num);

}//fim do programa
 
void contagemRegressiva(int x)

{
	if(x <= 0){
		printf("%d\n",x);
		puts("Fogo!!!\n");
		return;
	}

	printf("%d\n",x);
	//x--;

	contagemRegressiva(--x);//invoke recursivo
	printf ("%d\n", x);

}
 
 
