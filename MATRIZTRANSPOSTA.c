//MATRIZ TRANSPOSTA
#include <stdio.h>

int main () {

	int linha, coluna, contadorLinha, contadorColuna;
	
	//pega o número de linhas e colunas que a matriz terá
	//printf("Digite o número de linhas e colunas: ");
	scanf("%d %d", &linha, &coluna); 

	//se houver mais que 20 linhas ou menos que 1 linha, tamanho inválido
	if (linha<20 && linha>1){
		//se houver mais que 20 colunas ou menos que 1 coluna, tamanho inválido
		if (coluna<20 && coluna>1){
			//declaração da matriz
			float matriz[linha][coluna];
			int aux;
			//pegando os elementos da matriz por linha
			for (contadorLinha = 0 ; contadorLinha < linha ; contadorLinha++){
				//pegando os elementos da matriz por coluna
				for(contadorColuna = 0; contadorColuna < coluna; contadorColuna++){
					//printf("Digite o valor da posição na coluna %d, da linha %d: ", contadorColuna+1, contadorLinha+1);
					scanf("%f", &matriz[contadorLinha][contadorColuna]);
				}
			}
			for (contadorLinha = 0 ; contadorLinha < linha ; contadorLinha++){
				//pegando os elementos da matriz por coluna
				for(contadorColuna = 0; contadorColuna < coluna; contadorColuna++){
					aux=matriz[contadorLinha][contadorColuna];
					if(aux==matriz[contadorLinha][contadorColuna]){
						//OK
					}
					else {
						printf("Insercao de elementos da matriz de forma incorreta\n");
						return 0;
					}
					aux=0;
				}
			}
			//Mostra a matriz dada
			//printf("\nA matriz é:\n");
			//pega os elementos da matriz por linha
			for (contadorLinha = 0 ; contadorLinha < linha ; contadorLinha++){
				//pega os elementos da matriz por coluna
				for(contadorColuna = 0; contadorColuna < coluna; contadorColuna++){
					//printf("%d ", matriz[contadorLinha][contadorColuna]);
				}
				//printf("\n");
			}
			//Mostra a matriz transposta
			//printf("\nJá a matriz transposta é:\n");
			//pega os elementos da matriz por linha e muda para coluna
			for (contadorLinha = 0 ; contadorLinha < coluna ; contadorLinha++){
				//pega os elementos da matriz por coluna e muda para linha
				for(contadorColuna = 0; contadorColuna < linha; contadorColuna++){
					printf("%.0f", matriz[contadorColuna][contadorLinha]);
					if (contadorColuna!=linha-1){
						printf(" ");
					}
				}
				printf("\n");
			}
			//printf("\n");
		}else{
			printf("O tamanho %d para a coluna esta fora do limite permitido.\n", coluna);
		}
	}else{
		printf("O tamanho %d para a linha esta fora do limite permitido.\n", linha);
	}

	return 0;
}


