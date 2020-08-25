#include <stdio.h>

int main(void) {
	
	int linhasA = 3, linhasB = 1, linhasM = 3, colunasA = 1, colunasB = 3, colunasM = 3, i, j, q, r, aux,*p;
	
	int **matrizA, **matrizB, **matrizM;
	
	matrizA = (int **) malloc(linhasA * sizeof(int *));
	matrizB = (int **) malloc(linhasB * sizeof(int *));
	matrizM = (int **) malloc(linhasM * sizeof(int *));
	
	for(i = 0; i < linhasA; i++){
		matrizA[i] = (int *) malloc(colunasA * sizeof(int));
		matrizM[i] = (int *) malloc(colunasM * sizeof(int));
	}
	
	matrizB[0] = (int *) malloc(colunasB * sizeof(int));
	
	p = matrizA;
    *(*(matrizA + 0) + 0) = 7;
    *(*(matrizA + 1) + 0) = 0;
    *(*(matrizA + 2) + 0) = 1;
	
	p = matrizB;
    *(*(matrizB) + 0) = 7;
    *(*(matrizB) + 1) = 0;
    *(*(matrizB) + 2) = 1;
	
	for(q = 0; q < linhasA; q++){
		for(r = 0; r < colunasB; r++){
			aux = 0;
			for(i = 0; i < colunasA; i++){
				aux = aux + matrizA[q][i] * matrizB[i][r];
			}
			matrizM[q][r] = aux;
		}
	}
	

	for(i = 0; i < linhasM; i++){
		for(j = 0; j < colunasM; j++){
			printf("%d \t", matrizM[i][j]);
		}
		printf("\n");
	}
	

	free(matrizA);
	free(matrizB);
	free(matrizM);
	
	return 0;
}
