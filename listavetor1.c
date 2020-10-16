#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
	
	float notas[5];
	int cont = 0, maisque7 = 0;
	char nome[5][40];
	
	
	for(cont = 0; cont < 5; cont++){
		printf("Qual seu nome?\n");
		fflush(stdin);
		gets(nome[cont]);
		
		printf("Qual sua %dª nota:",cont+1);
		fflush(stdin);
		scanf("%f",&notas[cont]);
	}
	
	printf("\nNOTAS ACIMA DE 7,5:\n");
	
	for(cont = 0; cont < 5; cont++){
		if(notas[cont] >=7.5){
			printf("%dª nota = %.1f Do aluno(a) %s\n",cont+1,notas[cont],nome[cont]);
			maisque7 = maisque7 + 1;
			
		}
	}
			
	printf("%d alunos tiraram acima de 7,5.", maisque7);


//	getch();
	system("pause");
	return 0;
	
}
