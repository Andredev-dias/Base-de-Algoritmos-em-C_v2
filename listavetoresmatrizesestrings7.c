#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valores[10], par[5], impar[5];
	int cont, y = 0, x = 0;
	
	for(cont = 0;cont<10;cont++){
		printf("informe o %dº valor:",cont);
		fflush(stdin);
		scanf("%d",&valores[cont]);
	}
	
	for(cont = 0;cont<10;cont++){

		if(valores[cont] % 2 == 0){
			par[x] = valores[cont];
			x++;
		}
		else{
			impar[y] = valores[cont];
			y++;
		}
		
	}
	printf("NUMEROS PARES *0,02:\n");
	for(cont = 0;cont< x;cont++){
		printf("\n %d \n",par[cont]);
	}
	printf("NUMEROS IMPARES *0,05:\n");
		for(cont = 0;cont< x;cont++){
		printf("\n %d \n",impar[cont]);
	}
	
	
	system("pause");
	return 0;
}
