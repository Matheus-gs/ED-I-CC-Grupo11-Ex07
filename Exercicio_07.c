// Arquivo Exercicio_07.c
// Autor: Matheus Gomes Santos - RGM:26136805
// Turma: 3/N1

#include <stdio.h>
#include <stdlib.h>


//void bubbleSort(int vet[], int qtd);
void quickSort(int *a, int left, int right);


int main() {
	
	int i, j;
	int notas[5] = {10, 9, 12, 25, 25};
		
		
	// Exibindo valores do vetor (desordenado)
	printf("\n ===== Exibindo os valores do vetor (desordenado) ===== \n");
	
	for(i = 0; i < 5; i++){
		printf("\n %d \n", notas[i]);
	}
	
	
	// Função para ordenar vetor
	//	bubbleSort(notas, 5);
	quickSort(notas, 0, 5 - 1);
	
	
	// Exibindo valores do vetor (ordenado)
	printf("\n ===== Vetor ordenado ===== \n");
	
	for(j = 5 - 1; j >= 0; j--){
		printf("\n %d \n", notas[j]);
	}
	
	
	return 0;
}


//void bubbleSort(int vet[], int qtd){
//	
//	int i, j, aux;
//	
//	for(i = 1; i < qtd; i++){
//		
//		for(j = 0; j < i; j++){
//			
//			if(vet[i] >= vet[j]){
//				
//				aux = vet[i];
//				
//				vet[i] = vet[j];
//				vet[j] = aux;
//			}
//			
//		}
//		
//	}
//		
//}

void quickSort(int *a, int left, int right){
	
	int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
    	
        while(a[i] < x && i < right) {
            i++;
        }
        
        while(a[j] > x && j > left) {
            j--;
        }
        
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quickSort(a, left, j);
    }
    
    if(i < right) {
        quickSort(a, i, right);
    }
	
}
