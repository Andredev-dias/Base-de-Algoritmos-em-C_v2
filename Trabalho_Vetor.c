#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	char inicio; //Op��o para votar(S) ou sair(N)
	int presidente[15];
	int governador[12];
	int voto;
	int cont=0;

	// La�o for para zerar todos os valores dentro dos vetores presidente[15] e governador[12]
	for (cont=0; cont<15; cont++){
		presidente[cont] = 0;
		if (cont<12) {
			governador[cont] = 0;
		}
	}
	
	printf("\nDigite S para votar, ou N para sair.");
	fflush(stdin);
	scanf("%c", &inicio);
	
	while (inicio != 'N' && inicio != 'n') {
		if (inicio == 'S' || inicio == 'S') {
			
			// Vota��o para presidente.
			printf("\nInforme seu voto para a presid�ncia: ");
			fflush(stdin);
			scanf("%d", &voto);
			
			switch (voto) {
				case 0:
					presidente[0] = presidente[0] + 1;
					printf("\nVoc� votou branco.");
					break;
				case 1:
					presidente[1] = presidente[1] + 1;
					printf("\nVoc� votou em Alvaro Dias (Podemos).");
					break;
				case 2:
					presidente[2] = presidente[2] + 1;
					printf("\nVoc� votou em Cabo Daciolo (Patriota).");
					break;
				case 3:
					presidente[3] = presidente[3] + 1;
					printf("\nVoc� votou em Ciro Gomes (PDT).");
					break;
				case 4:
					presidente[4] = presidente[4] + 1;
					printf("\nVoc� votou em Eymael (DC).");
					break;
				case 5:
					presidente[5] = presidente[5] + 1;
					printf("\nVoc� votou Fernando Haddad (PT).");
					break;
				case 6:
					presidente[6] = presidente[6] + 1;
					printf("\nVoc� votou em Geraldo Alckmin (PSDB).");
					break;
				case 7:
					presidente[7] = presidente[7] + 1;
					printf("\nVoc� votou em Guilherme Boulos (PSOL).");
					break;
				case 8:
					presidente[8] = presidente[8] + 1;
					printf("\nVoc� votou em Henrique Meirelles (MDB).");
					break;
				case 9:
					presidente[9] = presidente[9] + 1;
					printf("\nVoc� votou em Jair Bolsonaro (PSL).");
					break;
				case 10:
					presidente[10] = presidente[10] + 1;
					printf("\nVoc� votou em Jo�o Amoedo (Novo).");
					break;
				case 11:
					presidente[11] = presidente[11] + 1;
					printf("\nVoc� votou em Jo�o Vicente Goulart (PPL).");
					break;
				case 12:
					presidente[12] = presidente[12] + 1;
					printf("\nVoc� votou em Marina Silva (REDE).");
					break;
				case 13:
					presidente[13] = presidente[13] + 1;
					printf("\nVoc� votou em Vera L�cia (PSTU).");
					break;
				case 14:
					presidente[14] = presidente[14] + 1;
					printf("\nVoc� votou nulo.");
					break;
				default:
					printf("\nN�mero invalido.");
					break;
					/*
					From The C programming language - Second edition (K&R 2):
					Chapter 3.4 Switch
					"As a matter of good form, put a break after the last case (the default here) 
					even though it's logically unnecessary. Some day when another case gets added at the end,
					this bit of defensive programming will save you."
					*/
					
			}
			
			// Vota��o para governador.
			printf("\nInforme seu voto para governador(a): ");
			fflush(stdin);
			scanf("%d", &voto);
			
			switch (voto) {
				case 0:
					governador[0] = governador[0] + 1;
					printf("\nVoc� votou branco.");
					break;
				case 1:
					governador[1] = governador[1] + 1;
					printf("\nVoc� votou em Cida Borghetti (Progressista).");
					break;
				case 2:
					governador[2] = governador[2] + 1;
					printf("\nVoc� votou em Doutor Rosinha (PT).");
					break;
				case 3:
					governador[3] = governador[3] + 1;
					printf("\nVoc� votou em Geon�sio Marinho (PRTB).");
					break;
				case 4:
					governador[4] = governador[4] + 1;
					printf("\nVoc� votou em Jo�o Arruda (MDB).");
					break;
				case 5:
					governador[5] = governador[5] + 1;
					printf("\nVoc� votou Jorge Bernardi (REDE).");
					break; 
				case 6:
					governador[6] = governador[6] + 1;
					printf("\nVoc� votou em Ogier Buchi (PSL).");
					break;
				case 7:
					governador[7] = governador[7] + 1;
					printf("\nVoc� votou em Priscila Ebara (PCO).");
					break;
				case 8:
					governador[8] = governador[8] + 1;
					printf("\nVoc� votou em Professor Ivan Bernardo (PSTU).");
					break;
				case 9:
					governador[9] = governador[9] + 1;
					printf("\nVoc� votou em Professor Piva (PSOL).");
					break;
				case 10:
					governador[10] = governador[10] + 1;
					printf("\nVoc� votou em Ratinho Junior (PSD).");
					break;
				case 11:
					governador[11] = governador[11] + 1;
					printf("\nVoc� votou nulo.");
					break;
				default:
					printf("\nN�mero invalido.");
					break;
			}
			
			// Repeti��o do La�o
			printf("\nDigite 'S' para votar ou 'N' para sair e exibir os resultados.");
			fflush(stdin);
			scanf("%c", &inicio);
		} else {
			// Para entradas diferentes de 'S', 's', 'N' e 'n'
			printf("\nDigite 'S' para votar ou 'N' para sair e exibir os resultados.");
			fflush(stdin);
			scanf("%c", &inicio);
		}
	}
		
		
		// Exibi��o da contagem de votos para a presid�ncia
		printf("\n\nContagem de votos para a presid�ncia:");
		printf("\n     - Alvaro Dias (Podemos): %d", presidente[1]);
		printf("\n     - Cabo Daciolo (Patriota): %d", presidente[2]);
		printf("\n     - Ciro Gomes (PDT): %d", presidente[3]);
		printf("\n     - Eymael(DC): %d", presidente[4]);
		printf("\n     - Fernando Haddad (PT): %d", presidente[5]);
		printf("\n     - Geraldo Alckmin (PSDB): %d", presidente[6]);
		printf("\n     - Guilherme Boulos (PSOL): %d", presidente[7]);
		printf("\n     - Henrique Meirelles (MDB): %d", presidente[8]);
		printf("\n     - Jair Bolsonaro (PSL): %d", presidente[9]);
		printf("\n     - Jo�o Amo�do (Novo): %d", presidente[10]);
		printf("\n     - Jo�o Vicente Goulart (PPL): %d", presidente[11]);
		printf("\n     - Marina Silva (Rede): %d", presidente[12]);
		printf("\n     - Vera L�cia (PSTU): %d", presidente[13]);
		printf("\n");
		printf("\n     - Votos Brancos: %d", presidente[0]);
		printf("\n     - Votos Nulos: %d", presidente[14]);
		
		
		
		// C�lculo e exibi��o do(a) vencedor(a) para a presid�ncia
		int max;
		int empate;
		
		max = 1;
		empate = 0;
		
 		for (cont=2; cont<14; cont++) { //cont=1 e cont<14 para deixar de lado votos brancos e nulos
 			
 			if (presidente[cont] > presidente[max]) {
				max = cont;
			}
			else {
				if (presidente[cont] == presidente[max]) {
					empate = cont;
				}
			} 
		}
		 
		// Para vencedor �nico:
		if (max > empate) {
		 	switch (max) {
		 		case 1:
					printf("\n\nO pr�ximo presidente da rep�blica ser� Alvaro Dias (Podemos), com %d votos.", presidente[1]);
					break;
				case 2:
					printf("\n\nO pr�ximo presidente da rep�blica ser� Cabo Daciolo (Patriota), com %d votos.", presidente[2]);
					break;
				case 3:
					printf("\n\nO pr�ximo presidente da rep�blica ser� Ciro Gomes (PDT), com %d votos.", presidente[3]);
					break;
				case 4:
					printf("\n\nO pr�ximo presidente da rep�blica ser� Eymael (DC), com %d votos.", presidente[4]);
					break;
				case 5:
					printf("\n\nVoc� votou Fernando Haddad (PT), com %d votos.", presidente[5]);
					break;
				case 6:
					printf("\n\nO pr�ximo presidente da rep�blica ser� Geraldo Alckmin (PSDB), com %d votos.", presidente[6]);
					break;
				case 7:
					printf("\n\nO pr�ximo presidente da rep�blica ser� Guilherme Boulos (PSOL), com %d votos.", presidente[7]);
					break;
				case 8:
					printf("\n\nO pr�ximo presidente da rep�blica ser� Henrique Meirelles (MDB), com %d votos.", presidente[8]);
					break;
				case 9:
					printf("\n\nO pr�ximo presidente da rep�blica ser� Jair Bolsonaro (PSL), com %d votos.", presidente[9]);
					break;
				case 10:
					printf("\n\nO pr�ximo presidente da rep�blica ser� Jo�o Amoedo (Novo), com %d votos.", presidente[10]);
					break;
				case 11:
					printf("\n\nO pr�ximo presidente da rep�blica ser� Jo�o Vicente Goulart (PPL), com %d votos.", presidente[11]);
					break;
				case 12:
					printf("\n\nA pr�xima presidenta da rep�blica ser� Marina Silva (REDE), com %d votos.", presidente[12]);
					break;
				case 13:
					printf("\n\nA pr�xima presidenta da rep�blica ser� Vera L�cia (PSTU), com %d votos.", presidente[13]);
					break;
			 }
		}
			 // Em caso de empate
			 else {
			 	if (max == empate) {
			 		printf("a");
			 		printf("b");
				 }
			 }
		 	
}
