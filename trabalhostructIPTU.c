#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

struct imovel_dados{
	int numcad ;
	float valorIPTU ;
	int mesesatrasado;
	float valorMulta;
};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	struct imovel_dados ap[3];
	int cont,calculos = 0;


	for(cont = 0; cont < 3; cont++){
			
		printf("\nINFOME O NUMERO DE CADASTRO(%dº imovel):\n",cont+1);
		fflush(stdin);
		scanf("%d",&ap[cont].numcad);
		printf("\nINFOME O VALOR DO IPTU:\n");
		fflush(stdin);
		scanf("%f",&ap[cont].valorIPTU);
		printf("\nINFOME QUANTOS MESES ATRASADO:\n");
		fflush(stdin);
		scanf("%d",&ap[cont].mesesatrasado);
		
		ap[cont].valorMulta = 50.00 * ap[cont].mesesatrasado;
		calculos++;

	}
	for(cont = 0;cont<3;cont++){
	printf("\nCADASTRO: %d\nVALOR IPTU: %.2f\nMESES EM ATRASO: %d\nMULTA: %.2f\n\n\n",ap[cont].numcad, ap[cont].valorIPTU, ap[cont].mesesatrasado ,ap[cont].valorMulta);
	
}
	printf("Numero de imoveis calculados: %d imovéis.\n\n",calculos);
	system("pause");
	return 0;
}
