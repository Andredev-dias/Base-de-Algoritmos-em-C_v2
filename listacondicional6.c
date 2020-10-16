#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int id = 0;
	float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;
	char conceito;
	
	printf("Qual sua matricula?\n");
	fflush(stdin);
	scanf("%d", &id);
	printf("Informe dua 1ª nota:\n");
	fflush(stdin);
	scanf("%f", &nota1);
	printf("Informe dua 2ª nota:\n");
	fflush(stdin);
	scanf("%f", &nota2);
	printf("Informe dua 3ª nota:\n");
	fflush(stdin);
	scanf("%f", &nota3);
	
	media = (nota1+nota2+nota3) / 3;
	printf("\n");
	printf("Média: %.2f .\n",media);	
	
	if(media >= 9){
		conceito = 'A';
		printf("Conceito: %c , APROVADO.\n",conceito);
	}
	else{
		if(media >= 7.5 && media < 90){
			conceito = 'B';
			printf("Conceito: %c , APROVADO.\n",conceito);
		}
		else{
			if(media >= 6 && media < 7.5){
				conceito = 'C';
				printf("Conceito: %c , APROVADO.\n",conceito);	
			}
			else{
				if(media >= 4 && media < 6){
					conceito = 'D';
					printf("Conceito: %c , REPROVADO.\n",conceito);
				}
				else{
					if(media < 4){
						conceito = 'E';
						printf("Conceito: %c , BURRO.\n",conceito);
					}
				}
			}
		}
	}
		
	system("pause");
	return 0;
}
