#include<stdio.h>
#include<string.h>
#include<locale.h>

struct tipo_endereco{
	char rua[50];
	int numero;
	char bairro[20];
	char cidade[30];
	char sigla_estado[3];
	long int CEP;
};


struct ficha_pessoal{
	char nome[50];
	int telefone;
	struct tipo_endereco endereco;
};

void main(){
	
	struct ficha_pessoal ficha;
	
	printf("qual seu nome?\n");
	fflush(stdin);
	gets(ficha.nome);
	
	printf("qual seu telefone?\n");
	fflush(stdin);
	scanf("%d",&ficha.telefone);
	
	printf("qual o nome da rua?\n");
	fflush(stdin);
	gets(ficha.endereco.rua);
	
	printf("qual o numero da rua?\n");
	fflush(stdin);
	scanf("%d",&ficha.endereco.numero);
	
	//tem q terminar as perguntas...
	
	
	
	
	printf("________________________________________________\n");
	printf("________________________________________________\n");
	printf("________________________________________________\n\n");
	
	printf("%s\n",ficha.nome);
	
	printf("%d\n",ficha.telefone);
	
	printf("%s\n",ficha.endereco.rua);
	
	printf("%d\n",ficha.endereco.numero);
	
	printf("\n%s", ficha.endereco.bairro);
	
	printf("\n%s", ficha.endereco.cidade);
	
 	printf("\n%s", ficha.endereco.sigla_estado);
 	
	printf("\n%s", ficha.endereco.CEP); 
	
	system("pause");
}
