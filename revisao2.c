#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct func{
	int codfunc;
	char nome[30];
	float sal;
	char email[50];
};

int main(){
	setlocale(LC_ALL,"Portuguese");

	struct func funcionario[3];
	int cont;

for(cont = 0;cont < 3; cont++){
	printf("QUAL O CODIGO DO FUNCIONARIO:\n");
	fflush(stdin);
	scanf("%d",&funcionario[cont].codfunc);
	
	printf("QUAL O NOME DO FUNCIONARIO:\n");
	fflush(stdin);
	gets(funcionario[cont].nome);
	
	printf("QUAL O SALARIO DO FUNCIONARIO:\n");
	fflush(stdin);
	scanf("%f",&funcionario[cont].sal);
	
	printf("QUAL E-MAIL DO FUNCIONARIO:\n");
	fflush(stdin);
	gets(funcionario[cont].email);
	
	printf("\n%dº funcionario cadastrado.\n\n\n",cont+1);
}
for(cont = 0;cont < 3; cont++){

printf("____________________________________________________\n");
printf("Codigo: %d\n",funcionario[cont].codfunc);
printf("Nome: %s\n",funcionario[cont].nome);
printf("Salario: %.2f\n",funcionario[cont].sal);
printf("E-mail: %s\n",funcionario[cont].email);
printf("____________________________________________________\n");
}

int pesquisa = 0;

printf("\n\nConsulte o FUncionario digitando seu còdigo:\n");
fflush(stdin);
scanf("%d",&pesquisa);

cont = 0;
	
for(cont = 0; cont < 3;cont++){
		if(pesquisa == funcionario[cont].codfunc){
			
			
			printf("Funcionario %s cadastrado\n",funcionario[cont].nome);
			printf("Salario: %.2f\n",funcionario[cont].sal);
			printf("E-mail: %s\n",funcionario[cont].email);
			
			break;
		}
	}

	if(cont == 3){
		printf("NAO CADASTRADo\n");
	}
		

	
system("pause");
return 0;
}

