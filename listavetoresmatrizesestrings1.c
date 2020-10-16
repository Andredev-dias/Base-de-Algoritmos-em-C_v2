#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[5][30];
	float reais[5];
	int cont = 0;
	
	for(cont = 0;cont < 5; cont++){
		printf("Informe o %dº nome:",cont +1);
		fflush(stdin);
		gets(nome[cont]);
		
		printf("Informe o %dº valor a ser calculado:",cont+1);
		fflush(stdin);
		scanf("%f",&reais[cont]);
		
	}
	
	printf("___________________________________\n");
	for(cont = 0;cont<5;cont++){
		printf("%s com o valor x2 = %.2f \n",nome[cont],reais[cont]*2);
	}
	
	
	
system("pause");
return 0;
}
