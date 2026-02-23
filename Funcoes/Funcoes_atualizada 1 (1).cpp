/*
	Name: Funcoes.cpp
	Author: Luciene Celestino
	Date: 24/03/25 09:59
	Description: Programa para demonstrar o uso de funcoes 
*/
#include<stdio.h>
#include<math.h>
/*//COLOCANDO A FUNCAO AQUI VOCE NAO PRECISA COLOCAR O PROTOTIPO
float calcularMedia(int x, int y)
{
	float media = 0.0;
	media = (float)(x + y) / 2;  //casting para float
	return media;
}
*/

// SESSAO DE PROTOTIPAÇÃO (AQUI "DECLARO" A FUNÇÃO)
float calcularMedia(int,int);

int calcularSubtracao(int, int);

int calcularMult(int, int);

float calcularDiv(int, int);

//int calcularPotencia(int, int);

int calcularPotencia(int, int);

//mostrando linhas
void linha();

void trocarVariaveis(int, int);

void trocarVariaveis_sem_aux(int, int);

int calcularRaiz_quadrada(int );

main()
{
	int a, b, subtracao; float result;
	a = b = 0;
	result = 0.0;
	
	printf("Digite um valor para A:\n"); scanf("%d", &a);
	printf("Digite um valor para B:\n");
	scanf("%d", &b);
	linha();
	//tendo que criar variaveis para guardar o resultado da funcao para mostrar para o usuario
	result = calcularMedia(a,b);
	printf("A media eh: %.2f\n", result);
	linha();
	subtracao = calcularSubtracao(a,b);
	printf("A subtracao de A por B eh: %d\n", subtracao);
	linha();
	 /*sem precisar criar uma variavel, pois passamos o proprio retorno da funcao 
	 no printf ou seja invocamos a funcao e ja mostra para o usuario */
	 printf("A Multiplicacao de A por B eh: %d\n", calcularMult(a,b));
	 linha();
	 printf("A Divisao de A por B eh: %.2f\n", calcularDiv(a,b));
	 linha();
	// fz tres funçoes essa é usando o pow
	//printf("\n O Numero A elevado a B eh: %d\n", calcularPotencia(a,b));
	
	//usando o pow da forma certa
	//printf("calculo da potencia com pow: %f", pow(a,b));
	
	// fz tres funçoes essa é usando laço de repetiçao
 	printf("O Numero A elevado ao B eh: %d\n", calcularPotencia(a,b));
 	linha();
 //	printf("Calculo da raiz Quadrada %d", sqrt(a,b));
	trocarVariaveis(a,b);
	linha();
	int calcularRaiz_quadrada(int o, int p);
	printf("A raiz quadrada de A: %d\n", calcularRaiz_quadrada(a);
	linha();
	
	 
}//fim do programa

//AQUI É O CORPO DA PROTOTIPAÇÃO
float calcularMedia(int x, int y)
{
	float media = 0.0;
	media = (float)(x + y) / 2;  //casting para float
	return media;
}

int calcularSubtracao(int c, int d)
{
	int subtracao = 0;
	subtracao = (c - d);
	return subtracao;
	
	//return c-d; //poderia ser assim tambem
}
//nesse formato vc economiza espaço na memoria
int calcularMult(int e, int f)
{
	return e*f;
}

float calcularDiv(int g, int h)
{
	return (float)g/h;
}

/*int calcularPotencia(int i, int j)
{
	return pow (i, j);
}
*/
/*
	//calculando poetencia com pow dse outra forma
	
	
*/
//calculando potencia pelo laço de repetiçao
int calcularPotencia(int base, int expoente)
{
	int i, result;
	i = 0;
	result = 1;
	
	do
	{
		result = result * base;
		i++;
		
	}while(i < expoente);
	
	return result;
}

void linha()
{
	puts("\n-------------------------------------------------------");
}

//função para trocar os valores das variaveis em memoria
void trocarVariaveis (int k, int l)
{
	int aux = 0;
	
	aux = k;
	k = l;
	l = aux;
	printf("\n Agora o valor de A eh %d, e o valor de B eh %d:", k, l);

}

void trocarVariaveis_sem_aux (int m, int n)
{
	m = m + n;
	n = m - n;
	m = m - n;
	
	printf("\n o valor de A eh %d e B eh %d",m, n);
}

int calcularRaiz_quadrada(int o);
{
	sqrt o;
}
