#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define hora 10.00
#define horaextra 15.00

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float horas_normais = 0, horas_extras = 0, horasnorm_resul = 0, horasext_resul = 0, resul = 0, poup = 0;
	
	printf("Informe o numero de horas normais trabalhadas no ano:\n");
	fflush(stdin);
	scanf("%f",&horas_normais);
	
	printf("Informe o numero de horas extras trabalhadas no ano:\n");
	fflush(stdin);
	scanf("%f",&horas_extras);
	
	horasnorm_resul = horas_normais * hora;
	horasext_resul = horas_extras * horaextra;
	resul = horasnorm_resul + horasext_resul;
	
	poup = resul * 0.08;
	
	printf("______________________________________________________\n");
	printf("Valor de horas normais: %.2f reais\n\n",horasnorm_resul);
	printf("Valor de horas extras: %.2f reais\n\n",horasext_resul);
	printf("Total de ganho no ano = %.2f reais\n\n", resul);
	printf("Valor a guardar na poupança = %.2f reais\n\n", poup);
	printf("______________________________________________________\n");
	
	
	system("pause");
	return 0;
}
