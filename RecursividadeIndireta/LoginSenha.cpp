/*
	Name: LoginSenha.cpp
	Author: luciene Celestino
	Date: 26/05/25 10:04
	Description: Programa para demonstrar o uso de
				 Funções Recursivas INDIRETAS
*/

#include<stdio.h>
#include<string.h>

//Prototipação das Funções
void verificacaoLogin();
void verificacaoSenha();

//Variaveis Globais
char login[] = "luciene";
int senha = 1234;

main(){
	
	puts("Sistema de Login e Senha com Recursividade Indireta");
	puts("===========================================================");
	
	verificacaoLogin(); //invoke para entrar na Recursão
	
}//fim do programa

//Função para pedir a Senha do Usuário
void verificacaoLogin(){
	
	char usuario[20];
	printf("Login: ");
	gets(usuario); //salva oq o usuario digitar  PARALEITURA DE VETOR, SEMPREEEEEE GETS
    //	scanf("%s, usuario"); // isso aqui não funciona com o tipo char
	//	printf(" ===> %s\n", usuario); // não é %c pq só pegaria um unico caracter
	
		if (strcmp(usuario, login) == 0){
		
			verificacaoSenha();
		}
		else
		//verificacaoLogin();
		verificacaoLogin();
}

//Função para validar a senha do usuário
void verificacaoSenha(){
	int pwd = 0; //password
	printf("Senha: ");  
	scanf("%d", &pwd);

	
	if(pwd == senha){
		puts("Login Efetuado com Sucesso!!!!");
		return;
	}
	else{ // FAZER se errar 3 vezes pedir o login de novo
		fflush(stdin); // limpa o buffer 
		verificacaoLogin();
	}
	
}


