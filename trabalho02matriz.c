#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int mat1[5][5];
	int mat2[5][5];
	int matresul[5][5];
	int l, c;
	
	for(l = 0; l < 5; l++){
		for(c = 0; c < 5; c++){
			printf("informe a posição da linha %d, e da coluna %d da matriz.\n", l,c);
			scanf("%d", &mat1[l][c]);
		}
	}
	printf("\nSegunda Matriz\n"); 
	for(l = 0; l < 5; l++){
		for(c = 0; c < 5; c++){
			printf("informe a posição da linha %d, e da coluna %d da matriz.\n", l,c);
			scanf("%d", &mat2[l][c]);
		}
	}
	
	for(l = 0; l < 5; l++){
		for(c = 0; c < 5; c++){
		matresul[l][c] = mat1[l][c] + mat2[l][c];
		}
	}
	for(l = 0; l < 5; l++){
		for(c = 0; c < 5; c++){
			printf("| %d |",matresul[l][c]);
		}
		printf("\n");
	}
	
	int diagonal = 0;
	int cont = 0;
	
	for(cont = 0; cont < 5; cont++){
		diagonal = diagonal + matresul[cont][cont];
	}
//  diagonal = matresul[0][0] + matresul[1][1] + matresul[2][2] + matresul[3][3] + matresul[4][4];
	printf("\n\n O valor da Diagonal Principal é %d\n\n", diagonal);
	
	system("pause");
	return 0;
}
