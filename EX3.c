#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct estagiarios{
	int cod;
	char nome[30];
	int ano;
	float sal[12];
	float sal_anual;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	struct estagiarios ficha[2];
	int cont = 0, qtos = 0, i = 0;
	
	for(cont = 0;cont < 2;cont++){
		
			printf("QUAL O CODIGO DO ESTAGIARIO:\n");
			fflush(stdin);
			scanf("%d",&ficha[cont].cod);
	
			printf("QUAL O NOME DO ESTAGIARIO:\n");
			fflush(stdin);
			gets(ficha[cont].nome);
			
			printf("QUAL O ANO DE NASCIMENTO DO ESTAGIARIO:\n");
			fflush(stdin);
			scanf("%d",&ficha[cont].ano);
			
			for(i = 0; i < 12; i++){
					printf("QUAL O %dº SALARIO DO ESTAGIARIO:\n",i+1);
					fflush(stdin);
					scanf("%f",&ficha[cont].sal[i]);
							
					ficha[cont].sal_anual = ficha[cont].sal_anual + ficha[cont].sal[i];		
			}
			
	qtos++;
	printf(" %dº estagiario\n",qtos);
			
	}
	for(cont = 0;cont < 2; cont++){

printf("____________________________________________________\n");
printf("Codigo: %d\n",ficha[cont].cod);
printf("Nome: %s\n",ficha[cont].nome);
printf("Ano: %d\n",ficha[cont].ano);
printf("Salario Anual: %.2f\n",ficha[cont].sal_anual);
printf("____________________________________________________\n");
}
system("pause");
return 0;
}
