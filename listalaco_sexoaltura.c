#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "PORTUGUESE");

    int i, somamulher, somaturma, genero[4];
    float maioralt=0, menoralt=999, mediaaltmulher, medaltturma, altura[4];


    printf("\n\n #######################################");
    printf("\n\n           AN�LISE DE FICHAS");
    printf("\n\n #######################################");


    for(i=0; i<4; i++)
    {
        printf("\n\n ------------------------------------------------------------------");
        printf("\n\n (%i) - Qual seu g�nero (1 - Masculino / 2 - Feminino): ", i+1);
        scanf("%i", &genero[i]);

        printf("\n (%i) - Insira sua altura: ", i+1);
        scanf("%f", &altura[i]);

        somaturma = somaturma + altura[i];
        system("cls");
    }

    //MEDIA MULHER
    if(genero[i] = 2)
    {
        somamulher = somamulher + 1;
    }

    mediaaltmulher = somamulher / 4;

    //MAIOR ALTURA TURMA
    for(i=0; i<4; i++)
    {
        if(altura[i] > maioralt)
        {
            maioralt = altura[i];
        }
    }

    //MENOR ALTURA TURMA    
    for(i=0; i<4; i++)
    {
        if(altura[i] < menoralt)
        {
            menoralt = altura[i];
        }
    }

    //MEDIA ALTURA TURMA
    medaltturma = somaturma / 4;


    printf("\n\n ****************************************************");
    printf("\n\n               R E S U L T A D O S");
    printf("\n\n ****************************************************");
    printf("\n A m�dia de altura das mulheres �: %0.1f", mediaaltmulher);
    printf("\n A maior altura da turma �: %0.1f", maioralt);
    printf("\n A menor altura da turma �: %0.1f", menoralt);
    printf("\n A m�dia de altura da turma �: %0.1f", medaltturma);    
	
system("pause");
return 0;
}
