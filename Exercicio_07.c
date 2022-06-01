
// Arquivo Exercicio_07.c
// Autor: Matheus Gomes Santos - RGM:26136805
// Turma: 3/N1

#include <stdio.h>
#include <stdlib.h>

int ordenaVetor(int vet[], int qtd);

int main() {
	
	int i, j;
	int notas[5] = {10, 8, 12, 25, 25};
	int resultado;
		
	// Exibindo valores do vetor (desordenado)
	printf("\n ===== Exibindo os valores do vetor ===== \n");
	for(i = 0; i <= 5; i++){
		printf("\n %d \n", notas[i]);
	}
	
	// Função para ordenar vetor
	resultado = ordenaVetor(notas, 5);
	
	// Exibindo valores do vetor (ordenado)
	printf("\n ===== Vetor ordenado ===== \n");
	for(j = 0; j<=5; j++){
		printf("\n %d \n", notas[j]);
	}
	
	return 0;
}

int ordenaVetor(int vet[], int qtd){
	
	int i, j;
	int aux;
	
	for(i = 1; i < qtd; i++){
		for(j = 0; j < i; j++){
			if(vet[i] >= vet[j]){
				aux = vet[i];
				vet[i] = vet[j];
				vet[j]  =aux;
			}
		}
	}
	
}
