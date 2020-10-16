#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int cont;
	int num[20];
	
	for(cont = 0;cont < 20; cont++){
		printf("informe o %dº numero:\n",cont+1);
		fflush(stdin);
		scanf("%d",&num[cont]);
	}
	printf("\nNumeros informados listados inverso:\n");
	for(cont = 19; cont >=0; cont--){
		printf("%d \n",num[cont]);
	}
	
	system("pause");
	return 0;
}
