#include<stdio.h> //fun��es de entrada e saida
#include<stdlib.h> //comandos do sistema
#include<locale.h>

int main(){ //Inicio do programa
	
	/***DECLARA��O DE VARIAVEIS***/
	char nome[16]; //variavel do tipo texto
	
	
	setlocale(LC_ALL,"");//reconhece caracteres especiais
	
	printf("UNIVERSIDADE GUARULHOS - CI�NCIAS DA COMPUTA��O\n\n");
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);//armazenando na variavel nome
	
	system("cls");//limpa a tela
	
	printf("BEM-VINDO %s \n\n",nome);
	
	system("pause");//pressionar qualquer tecla para continuar a execu��o
	

	
	
}//fim do programa
