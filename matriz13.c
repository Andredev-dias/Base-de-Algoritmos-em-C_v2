#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int mat1[5][3];
	int mat2[5][3];
	int matresul[5][3];
	int l, c;
	
	for(l = 0; l < 5; l++){
		for(c = 0; c < 3; c++){
			printf("informe a posição da linha %d, e da coluna %d da matriz.\n", l+1,c+1);
			scanf("%d", &mat1[l][c]);
		}
	}
	printf("\nSegunda Matriz\n"); 
	for(l = 0; l < 5; l++){
		for(c = 0; c < 3; c++){
			printf("informe a posição da linha %d, e da coluna %d da matriz.\n", l+1,c+1);
			scanf("%d",&mat2[l][c]);
		}
	}
	
	for(l = 0; l < 5; l++){
		for(c = 0; c < 3; c++){
		matresul[l][c] = mat1[l][c] + mat2[l][c];
		}
	}
	for(l = 0; l < 5; l++){
		for(c = 0; c < 3; c++){
			printf("%d",matresul[l][c]);
		}
		printf("\n");
	}
	
	
	system("pause");
	return 0;
}
