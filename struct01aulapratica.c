#include<stdio.h>
#include<string.h>

struct ficha_aluno{
	int codigo;
	char nome[50];
	int telefone;
	char mail[50];
};

int main(){
	
	struct ficha_aluno aluno;
	
	fflush(stdin);
	printf("\nInforme o codigo:");
	scanf("%d", &aluno.codigo);
	
	fflush(stdin);
	printf("\nInforme o nome:");
	gets(aluno.nome);
	
	fflush(stdin);
	printf("\nInforme o telefone:");
	scanf("%d", &aluno.telefone);
	
	fflush(stdin);
	printf("\nInforme o Mail:");
	gets(aluno.mail);
	
	printf("****************************************************\n");
	printf("****************************************************\n");
	printf("****************************************************\n");
	
	printf("\n%d", aluno.codigo);
	printf("\n%s", aluno.nome);
	printf("\n%d", aluno.telefone);
	printf("\n%s", aluno.mail);
	
	system("pause");
	return 0;
}
