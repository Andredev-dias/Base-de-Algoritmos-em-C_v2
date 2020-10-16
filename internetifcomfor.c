#include<stdio.h>
#include<stdlib.h>


main(){
    int sx,_homens = 0;
    float i,alt,maior,menor,_mulheres = 0.00,media_mulher = 0.00,alt_mulheres = 0.00;
    for(i=1;i<=2;i++){
        printf("Digite o genero\nUse 0 - Feminino 1 - Masculino\n: ");
        scanf("%d",&sx);

        printf("Informe a Altura\n");
        scanf("%f",&alt);

        if(i==1){
            maior=alt;
            menor=alt;
        }

        if(alt>maior){
            maior=alt;
        }
        if(alt<menor){
            menor=alt;
        }
        //Se for mulher, equivale a false ou 0
        if(!sx){
            alt_mulheres+=alt;
            _mulheres++;
        }else _homens++;
    }
    //Se existir mulheres
    if(_mulheres){
        media_mulher = alt_mulheres/_mulheres;
        printf("Media -> Mulheres: %1.2f", media_mulher);
    }else printf("\nNenhuma mulher inserida para obter uma media!");

    printf("\nQuantidade-> Homens: %d", _homens);
    printf("\n%1.2f Menor Altura e Maior Altura %1.2f\n",menor,maior);

    system("pause");
    return 0;
}
