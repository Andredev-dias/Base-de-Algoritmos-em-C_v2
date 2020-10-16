#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float sal = 0, total = 0, media = 0;
	int cont = 0;
	


	for(cont = 0; cont < 5; cont++){
		printf("qual seu salario?\n");
		fflush(stdin);
		scanf("%f",&sal);
		total = total + sal;
	}
	media = total / 5;
	printf("Total dos salarios:%.2f.\n",total);
	printf("Media dos salarios:%.2f.\n",media);

system("pause");
return 0;			
}
