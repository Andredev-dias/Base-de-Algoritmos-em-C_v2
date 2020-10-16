#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>



struct imovel{
	int cadastro;
	float iptu;
	int mesesatrasado;
	float multa;
};



int main(){
	setlocale(LC_ALL,"Portuguese");
	
	struct imovel iptu;
	
	
	fflush(stdin);
	printf("\nInforme o cadastro:");
	scanf("%d", &iptu.cadastro);
	
	fflush(stdin);
	printf("\nInforme o o imposto(IPTU):");
	scanf("%f", &iptu.iptu);
	
	fflush(stdin);
	printf("\nInforme quanto meses atrasado:");
	scanf("%d", &iptu.mesesatrasado);
	
	iptu.multa = iptu.mesesatrasado * 50.00;
	
	printf("\n%d", iptu.cadastro);
	printf("\n%.2f", iptu.iptu);
	printf("\n%d", iptu.mesesatrasado);
	printf("\n%.2f", iptu.multa);
	
	
	
system("pause");
return 0;
}

