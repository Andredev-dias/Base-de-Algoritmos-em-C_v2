#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char entrada;
	int pres[15];
	int gov[12];
	int num1 = 0, num2 = 0;
	int cont;
	/*for(cont=0; cont<12; cont++){
		gov[12] = 0;
	}*/
		// Laço for para zerar todos os valores dentro dos vetores presidente[15] e governador[12]
	for (cont=0; cont<15; cont++){
		pres[cont] = 0;
		if (cont<12) {
			gov[cont] = 0;
		}
	}
	printf("\n\nLista de Candidatos para Presidencia:");
		printf("\n - Alvaro Dias (Podemos):1");
		printf("\n - Cabo Daciolo (Patriota): 2");
		printf("\n - Ciro Gomes (PDT): 3");
		printf("\n - Eymael(DC): 4");
		printf("\n - Fernando Haddad (PT): 5");
		printf("\n - Geraldo Alckmin (PSDB): 6");
		printf("\n - Guilherme Boulos (PSOL): 7");
		printf("\n - Henrique Meirelles (MDB): 8");
		printf("\n - Jair Bolsonaro (PSL): 9");
		printf("\n - João Amoêdo (Novo): 10");
		printf("\n - João Vicente Goulart (PPL): 11");
		printf("\n - Marina Silva (Rede): 12");
		printf("\n - Vera Lúcia (PSTU): 13");
		printf("\n - Votos BRANCOS: 0");
		printf("\n - Votos NULOS: 14\n\n");
		printf("__________________________________________________");
		printf("\n\nLista de Candidatos para Governador:");
		printf("\n - Cida Borghetti (Progressista): 1");
		printf("\n - Doutor Rosinha (PT):2");
		printf("\n - Geonísio Marinho (PRTB): 3");
		printf("\n - João Arruda (MDB): 4");
		printf("\n - Jorge Bernardi (Rede):5");
		printf("\n - Ogier Buchi (PSL):6");
		printf("\n - Priscila Ebara (PCO): 7");
		printf("\n - Professor Ivan Bernardo (PSTU): 8");
		printf("\n - Professor Piva (PSOL): 9");
		printf("\n - Ratinho Junior (PSD):10");
		printf("\n - Votos BRANCOS: 0");
		printf("\n - Votos NULOS: 11\n\n");
	
	printf("\nDigite S para entrar e votar, ou N para sair do sistema.\n");
	fflush(stdin);
	scanf("%c", &entrada);
	
	while(entrada == 'S'){
	
	printf("\nInforme o número para presidência: ");
	fflush(stdin);
	scanf("%d", &num1);
	
		switch(num1){
		
		case 0:
		printf("BRANCO\n\n\n");
		pres[0] = pres[0] + 1;
		break;
			
		case 1:
		printf("Alvari Dias(Podemos) \n\n\n");
		pres[1] = pres[1] + 1;
		break;
		
		case 2:
		printf("Cabo Daciolo(Patriota) \n\n\n");
		pres[2] = pres[2] + 1;
		break;
		
		case 3:
		printf("Ciro Gomes(PDT) \n\n\n");
		pres[3] = pres[3] + 1;
		break;
		
		case 4:
		printf("Eymael(CD) \n\n\n");
		pres[4] = pres[4] + 1;
		break;
		
		case 5:
		printf("Fernando Haddad(deuPTnobrasil) \n\n\n");
		pres[5] = pres[5] + 1;
		break;
		
		case 6:
		printf("Geraldo tavivo?(PSDB) \n\n\n");
		pres[6] = pres[6] + 1;
		break;
		
		case 7:
		printf("Guilherme Anarquia(Psol) \n\n\n");
		pres[7] = pres[7] + 1;
		break;
		
		case 8:
		printf("Henrique Meirelles(MDB) \n\n\n");
		pres[8] = pres[8] + 1;
		break;
		
		case 9:
		printf("Jair quefasebrasil(PSL) \n\n\n");
		pres[9] = pres[9] + 1;
		break;
		
		case 10:
		printf("João Amoêdo(Novo) \n\n\n");
		pres[10] = pres[10] + 1;
		break;
		
		case 11:
		printf("João Vicente Goulart(PPL) \n\n\n");
		pres[11] = pres[1] + 1;
		break;
		
		case 12:
		printf("Marina Silva(Rede) \n\n\n");
		pres[12] = pres[12] + 1;
		break;
		
		case 13:
		printf("Vera Lúcia(PSTU) \n\n\n");
		pres[13] = pres[13] + 1;
		break;	
		
		case 14:
		printf("NULO\n\n\n");
		pres[14] = pres[14] + 1;
		break;
		
		default:
		printf("Número Inválido - NULO\n");
		num1 = 14;
	}
		printf("\nO presidente votado foi: %d \n\n",num1);
		
	printf("\nInforme o número para governador: ");
	fflush(stdin);
	scanf("%d", &num2);
		
		switch(num2){
		
		case 0:
		printf("VOTO BRANCO\n\n\n");
		gov[0] = gov[0] + 1;
		break;
		
		case 1:
		printf("Cida Borghetti (Progressista) \n\n\n");
		gov[1] = gov[1] + 1;
		break;
		
		case 2:
		printf("Doutor Rosinha (PT) \n\n\n");
		gov[2] = gov[2] + 1;
		break;
		
		case 3:
		printf("Geonísio Marinho (PRTB) \n\n\n");
		gov[3] = gov[3] + 1;
		break;
		
		case 4:
		printf("João Arruda (MDB) \n\n\n");
		gov[4] = gov[4] + 1;
		break;
		
		case 5:
		printf("Jorge Bernardi (Rede) \n\n\n");
		gov[5] = gov[5] + 1;
		break;
		
		case 6:
		printf("Ogier Buchi (PSL) \n\n\n");
		gov[6] = gov[6] + 1;
		break;
		
		case 7:
		printf("Priscila Ebara (PCO) \n\n\n");
		gov[7] = gov[7] + 1;
		break;
		
		case 8:
		printf("Professor Ivan Bernardo (PSTU)  \n\n\n");
		gov[8] = gov[8] + 1;
		break;
		
		case 9:
		printf("Professor Piva (PSOL) \n\n\n");
		gov[9] = gov[9] + 1;
		break;
		
		case 10:
		printf("Ratinho Junior (PSD) \n\n\n");
		gov[10] = gov[10] + 1;
		break;
		
		case 11:
		printf("NULO\n\n\n");
		gov[11] = gov[11] + 1;
		break;
	
		default:
		printf("Número Inválido - NULO\n");
		num2 = 11;
	
	}
	
			
	printf("\nO governador votado foi: %d \n\n",num2);	
	printf("\nDigite S para continuar a votar, ou N para sair do sistema.\n");
	fflush(stdin);
	scanf("%c", &entrada);
	
}
	
		printf("\n\nLista de Votos para Presidencia:");
		printf("\n - Alvaro Dias (Podemos): %d", pres[1]);
		printf("\n - Cabo Daciolo (Patriota): %d", pres[2]);
		printf("\n - Ciro Gomes (PDT): %d", pres[3]);
		printf("\n - Eymael(DC): %d", pres[4]);
		printf("\n - Fernando Haddad (PT): %d", pres[5]);
		printf("\n - Geraldo Alckmin (PSDB): %d", pres[6]);
		printf("\n - Guilherme Boulos (PSOL): %d", pres[7]);
		printf("\n - Henrique Meirelles (MDB): %d", pres[8]);
		printf("\n - Jair Bolsonaro (PSL): %d", pres[9]);
		printf("\n - João Amoêdo (Novo): %d", pres[10]);
		printf("\n - João Vicente Goulart (PPL): %d", pres[11]);
		printf("\n - Marina Silva (Rede): %d", pres[12]);
		printf("\n - Vera Lúcia (PSTU): %d", pres[13]);
		printf("\n - Votos BRANCOS: %d", pres[0]);
		printf("\n - Votos NULOS: %d\n\n", pres[14]);
		printf("__________________________________________________");
		printf("\n\nLista de Votos para Governador:");
		printf("\n - Cida Borghetti (Progressista): %d", gov[1]);
		printf("\n - Doutor Rosinha (PT): %d", gov[2]);
		printf("\n - Geonísio Marinho (PRTB): %d", gov[3]);
		printf("\n - João Arruda (MDB): %d", gov[4]);
		printf("\n - Jorge Bernardi (Rede): %d", gov[5]);
		printf("\n - Ogier Buchi (PSL): %d", gov[6]);
		printf("\n - Priscila Ebara (PCO): %d", gov[7]);
		printf("\n - Professor Ivan Bernardo (PSTU): %d", gov[8]);
		printf("\n - Professor Piva (PSOL): %d", gov[9]);
		printf("\n - Ratinho Junior (PSD): %d", gov[10]);
		printf("\n - Votos BRANCOS: %d", gov[0]);
		printf("\n - Votos NULOS: %d\n\n", gov[11]);
	
	int maior = 0;
	int indice_maiorpres = 0;
	
	for(cont = 0;cont<15;cont++){
		if(pres[cont] > maior){
			maior = pres[cont];
			indice_maiorpres = cont;
		}
	}
	
	switch(indice_maiorpres){
		case 0:
		printf("BRANCO com %d votos.\n\n\n",maior);
		
		break;
			
		case 1:
		printf("Alvari Dias(Podemos) com %d votos. \n\n\n",maior);
		
		break;
		
		case 2:
		printf("Cabo Daciolo(Patriota) com %d votos.\n\n\n",maior);
		
		break;
		
		case 3:
		printf("Ciro Gomes(PDT)com %d votos. \n\n\n",maior);
	
		break;
		
		case 4:
		printf("Eymael(CD) com %d votos.\n\n\n",maior);
		
		break;
		
		case 5:
		printf("Fernando Haddad(deuPTnobrasil)com %d votos.\n\n\n",maior);
		
		break;
		
		case 6:
		printf("Geraldo tavivo?(PSDB)com %d votos.\n\n\n",maior);
		
		break;
		
		case 7:
		printf("Guilherme Anarquia(Psol)com %d votos. \n\n\n",maior);
		
		break;
		
		case 8:
		printf("Henrique Meirelles(MDB) com %d votos.\n\n\n",maior);
		
		break;
		
		case 9:
		printf("Jair quefasebrasil(PSL) com %d votos.\n\n\n",maior);
		
		break;
		
		case 10:
		printf("João Amoêdo(Novo) com %d votos.\n\n\n",maior);
		
		break;
		
		case 11:
		printf("João Vicente Goulart(PPL) com %d votos.\n\n\n",maior);
		
		break;
		
		case 12:
		printf("Marina Silva(Rede) com %d votos.\n\n\n",maior);
		
		break;
		
		case 13:
		printf("Vera Lúcia(PSTU) com %d votos.\n\n\n",maior);
		
		break;	
		
		case 14:
		printf("NULO com %d votos.\n\n\n",maior);
		
		break;
		
		default:
		printf("Número Inválido - NULO\n");
		num1 = 14;
		
	}
	int maiorgov = 0;
	int indice_maiorgov = 0;
	
	for(cont = 0;cont<12;cont++){
		if(gov[cont] > maiorgov){
			maiorgov = gov[cont];
			indice_maiorgov = cont;
		}
	}
		switch(indice_maiorgov){
		
		case 0:
		printf("VOTO BRANCO com %d votos.\n\n\n",maiorgov);
		
		break;
		
		case 1:
		printf("Cida Borghetti (Progressista ) com %d votos. \n\n\n",maiorgov);
		
		break;
		
		case 2:
		printf("Doutor Rosinha (PT) com %d votos.\n\n\n",maiorgov);
		
		break;
		
		case 3:
		printf("Geonísio Marinho (PRTB) com %d votos.\n\n\n",maiorgov);
		
		break;
		
		case 4:
		printf("João Arruda (MDB) com %d votos.\n\n\n",maiorgov);
		
		break;
		
		case 5:
		printf("Jorge Bernardi (Rede) com %d votos.\n\n\n",maiorgov);
		
		break;
		
		case 6:
		printf("Ogier Buchi (PSL) com %d votos.\n\n\n",maiorgov);
		
		break;
		
		case 7:
		printf("Priscila Ebara (PCO) com %d votos.\n\n\n",maiorgov);
		
		break;
		
		case 8:
		printf("Professor Ivan Bernardo (PSTU)  com %d votos.\n\n\n",maiorgov);
		
		break;
		
		case 9:
		printf("Professor Piva (PSOL) com %d votos.\n\n\n",maiorgov);
		
		break;
		
		case 10:
		printf("Ratinho Junior (PSD) com %d votos.\n\n\n",maiorgov);
		
		break;
		
		case 11:
		printf("NULO com %d votos.\n\n\n",maiorgov);
		
		break;
	
		default:
		printf("Número Inválido - NULO\n");
}
	
	system("pause");
	return 0;
}
