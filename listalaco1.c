#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade = 0, cont = 0;
	float sal;
	
	printf("informe a idade:");
	fflush(stdin);
	scanf("%d",&idade);
	printf("informe seu salario:");
	fflush(stdin);
	scanf("%f",&sal);
	
	for(cont = 1; cont < 11; cont++){
		printf("%d anos e ganha %.2f reais. (%d) \n",idade,sal,cont);
	}

system("pause");
return 0;
}
