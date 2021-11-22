#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ordenar(int vetor[]) {
	
	int i, j, pivo;
	
	for(i = 1; i < 1000; i++) {
		pivo = vetor[i];
		j = i - 1;
		while(j >= 0 && vetor[j] > pivo) {
			vetor[j + 1] = vetor[j];
			j = j - 1;
		}
		vetor[j + 1] = pivo;
	}
}

int main(int argc, char *argv[]) {
	
	int vetor[1000], c;
	FILE* arquivo;
	
	srand(time(NULL));
	
	for(c = 0; c < 1000; c++) {
		vetor[c] = rand() % 1000;
	}
	
	for(c = 0; c < 1000; c ++) {
		printf("%d ", vetor[c]);
	}
	
	ordenar(vetor);
	
	arquivo = fopen("Organizado.txt", "w");
	
	for(c = 0; c < 1000; c++) {
		fprintf(arquivo, "%d ", vetor[c]);
	}
	
	return 0;
}
