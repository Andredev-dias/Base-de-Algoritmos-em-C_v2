#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int codlanche, codbebida,pedidos = 0;
	float precolanche = 0, precobebida = 0 , pedidototal = 0, total_dos_pedidos = 0;
	
printf("Digite o código do lanche:\n");
fflush(stdin);
scanf("%d",&codlanche);
printf("Digite o código da bebida:\n");
fflush(stdin);
scanf("%d",&codbebida);	

while(codlanche > 0 || codbebida > 0){
	
	
	pedidos++;
	if(codlanche == 100){
		precolanche = 1.20;
		printf("Cachorro quente a %.2f\n",precolanche);
	}
	else{
		if(codlanche == 101){
			precolanche = 1.30;
			printf("Bauru a %.2f\n",precolanche);
		}
		else{
			if(codlanche == 102){
				precolanche = 1.50;
				printf("Hamburguer a %.2f\n",precolanche);
			}
			else{
				if(codlanche != 100 || codlanche != 101 || codlanche != 102){
					precolanche = 0;
				}
			}
		}
	}
	
	if(codbebida == 5){
		precobebida = 5;
		printf("Coca a %.2f\n",precobebida);
	}
	else{
		if(codbebida == 3){
			precobebida = 3;
			printf("Agua a %.2f\n",precobebida);
		}
		else{
			if(codbebida != 5 || codbebida != 3){
				precobebida = 0;
			}
		}	
	}
	
pedidototal = precobebida + precolanche;
printf("%.2f  reais total do combo\n\n",pedidototal);
total_dos_pedidos = total_dos_pedidos + pedidototal;
	
printf("Digite o código do lanche:\n");
fflush(stdin);
scanf("%d",&codlanche);
printf("Digite o código da bebida:\n");
fflush(stdin);
scanf("%d",&codbebida);	
}

printf("\n\n%d , pedidos diferentes feitos\n",pedidos);
printf("%.2f , total dos pedidos\n",total_dos_pedidos);
	
system("pause");
return 0;
}
