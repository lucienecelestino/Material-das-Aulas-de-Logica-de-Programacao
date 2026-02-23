/*
 	nome:Polindromo.cpp
 	autor: lucine celestino
 	descrição: Programa para verificar se uma sequencia de caracteres é um polindromo
*/
	#include<stdio.h>
	#include<conio.h> //getch
	#include<string.h> //manipula strings
 	main()
 	{
 		char letra = ' '; 
 		char palavra[10];// vetor de caracteres para armazenar uma string(conjunto de caracteres)
 		
 		printf("Digite uma palavra, para verificação de polindromo:");
 		gets(palavra); //gets pega uma strig
 		
 		puts("Pressione qualquer tecla para continuar...");
 		letra = getch();// para a execução e captura o valor da tecla pressionada
 		printf("\nA tecla digitada foi: %c = %d da tabela ASCII\n\n", letra, letra);
 		
 		
 		printf("A palavra digitada foi: %s\n \n",palavra);
 		
 		//laço de repetiçaõ para mostrar o conteudo do vetor, carcter por caracter
 		for(int i = 0; i < strlen(palavra); i++)
 		{
 			printf("%c|", palavra[i]); //%c vai imprimir caracter por caracter
		 }
	 }//fim do programa
 	
 	
