#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define salmin 998

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salbruto = 0, desc = 0, respliq = 0;
	
	printf("Informe o Salario bruto:\n");
	fflush(stdin);
	scanf("%f",&salbruto);
	printf("Informe o Imposto a ser pago:\n");
	fflush(stdin);
	scanf("%f",&desc);
	

	desc = salbruto * desc;
	respliq = salbruto - desc;
	
	
	if(desc <= salmin){
		printf("O salario liquido � %.2f e seus impostos est�o MENORES que um salario minimo. ",respliq);
	}
	else{
		printf("O salario liquido � %.2f e seus impostos est�o MAIORES que um salario minimo. ",respliq);
	}
	
	system("pause");
	return 0;
}
