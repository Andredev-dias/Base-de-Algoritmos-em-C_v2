#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int codtime = 0;
	char nome[30];
	int idade = 0,idadesoma = 0;
	int cont = 0;
	float media = 0;
	int numtimes = 0;
	
	printf("Qual o C�digo do seu Time:\n");
	fflush(stdin);
	scanf("%d",&codtime);
	
	while(codtime > 0){
		
		for(cont = 0;cont < 3;cont++){
			
			printf("Qual seu Nome:\n");
			fflush(stdin);
			gets(nome);
			
			printf("Qual sua idade:\n");
			fflush(stdin);
			scanf("%d",&idade);
			
			printf("Obrigado pelo cadastro %s\n\n",nome);
			idadesoma = idadesoma + idade;
		}
		numtimes++;
		media = ((float)idadesoma / 3);
		printf("A media de idade deste time � de %.2f anos.\n",media);
		printf("%d� time calculado.\n\n",numtimes);
		
		idadesoma = 0;
		
		printf("Qual o C�digo do seu Time:\n");
		fflush(stdin);
		scanf("%d",&codtime);
	}
	printf("\nO n�mero de times cadastrados � de : %d times.\n\n",numtimes);
	
	
	system("pause");
	return 0;
}
