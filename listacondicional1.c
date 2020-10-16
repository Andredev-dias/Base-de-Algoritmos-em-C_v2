#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	char sexo = 0;
	char nome[60];
	int idade = 0;
	
	printf("Qual seu nome?\n");
	fflush(stdin);
	gets(nome);
	printf("Qual sua idade?\n");
	fflush(stdin);
	scanf("%d",&idade);
	printf("Informe seu sexo(M-masculino / F-feminino):\n");
	fflush(stdin);
	scanf("%c",&sexo);

	printf("O nome fornecido foi: %s \n",nome);
	printf("A idade fornecida foi: %d \n",idade);
	printf("O sexo informado foi: %c \n\n\n",sexo);
	
	if(sexo =='M'){
		if(idade >= 18 && idade <= 65){
			printf("%s , está compreendido(a) entre 18 e 65 anos de idade e é do sexo masculino.\n",nome);
		}
	}
	else{
		printf("%s ,ou não está entre 18 e 65 anos de idade e/ou não é masculino. \n",nome);
	}
	
	getch();
	system("pause");
	return 0;
}
