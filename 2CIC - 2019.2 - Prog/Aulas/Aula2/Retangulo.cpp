#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){ //inicio
	float base, alt, area; //declara��o das variaveis
	
	setlocale(LC_ALL,"");//compatibilizando caracteres
	
	printf("** PROGRAMA RET�NGULO **\n\n\n");
	
	/***ENTRADA DE DADOS******/
	
	printf("Informe medida da base: ");
	scanf("%f", &base);
	
	printf("Informe medida da altura: ");
	scanf("%f", &alt);
	
	/*** PROCESSAMENTO ***/
	area = base * alt;
	
	/*** SAIDA DE DADOS ***/
	printf("\n\nA medida da �rea � %.2f.",area);
	
	printf("\n\n");
	system("pause");//impede o programa de encerrar automaticamente
	
} //fim do programa

