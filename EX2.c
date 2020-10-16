#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num_id = 0, idade = 0, cont = 0;
	float nota = 0;
	float media = 0 ,somadasnotas = 0;
	char conceito;
	int alunosA = 0, alunosE = 0;
	int alunos = 0;
	
	printf("DIGITE SUA IDENTIFICAÇÃO PARA INFORMAR AS NOTAS OU 0 PARA SAIR\n\n");
	
	printf("Qual o número de identificção:\n");
	fflush(stdin);
	scanf("%d",&num_id);
	
	while(num_id > 0){
		
		for(cont = 0; cont < 12; cont++){
			printf("Qual sua %dª nota( de 0 a 100):\n",cont + 1);
			fflush(stdin);
			scanf("%f",&nota);
			
		somadasnotas = somadasnotas + nota;
			
		}
		
		alunos++;
		media = somadasnotas / 12;
		
		printf("Sua ID é %d\n",num_id);
		printf("Sua média é = %.2f\n",media);
		
		if(media >= 90){
			conceito = 'A';
			alunosA++;
			printf("Conceito = %c\n\n",conceito);
		}
		else{
			if(media >= 75 && media < 90){
				conceito = 'B';
				printf("Conceito = %c\n\n",conceito);
			}
			else{
				if(media >= 60 && media < 75){
						conceito = 'C';
						printf("Conceito = %c\n\n",conceito);
				}
				else{
					if(media >= 40 && media < 60){
							conceito = 'D';
							printf("Conceito = %c\n\n",conceito);
					}
					else{
						if(media < 40){
								conceito = 'E';
								alunosE++;
								printf("Conceito = %c\n\n",conceito);
						}
					}
				}
			}
		}
		printf("DIGITE SUA IDENTIFICAÇÃO PARA INFORMAR AS NOTAS OU 0 PARA SAIR\n");
		printf("Qual o número de identificção:\n");
		fflush(stdin);
		scanf("%d",&num_id);
		
		somadasnotas = 0;	
	}
	printf("%d aluno(s) calculados\n",alunos);
	printf("%d aluno(s) tiraram A\n",alunosA);
	printf("%d aluno(s) tiraram E\n",alunosE);
}
