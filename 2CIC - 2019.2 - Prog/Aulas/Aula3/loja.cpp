#include<stdio.h>

#include<stdlib.h>
#include<locale.h>

int main(){
	//declara��o das vari�veis
	float vProd, vFinal, vParc;
	int qParc;
		
	setlocale(LC_ALL,"");
	printf("*** PROGRAMA LOJA ***\n\n");
	
	printf("Valor do Produto: ");
	scanf("%f", &vProd);
	
	printf("N�mero de parcelas: ");
	scanf("%d", &qParc);
	
	vFinal = vProd + (vProd * 0.15);
	vParc = vFinal / qParc;
	
	printf("\n\n");
	printf("Valor das parcelas: R$ %.2f\n", vParc);
	printf("Valor Final da Compra: R$ %.2f", vFinal);
	
	printf("\n\n");
	system("pause");
	
}
