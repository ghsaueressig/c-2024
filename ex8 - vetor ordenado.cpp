#include <stdio.h>
#include <locale.h>

// Função para ordenar o vetor usando o algoritmo Bubble Sort
void bubbleSort(int vetor[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
	setlocale(LC_ALL,"");
    int vetor[10];
    
    // Leitura dos números do usuário
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    // Ordena o vetor
    bubbleSort(vetor, 10);
    
    // Exibe o vetor ordenado
    printf("Vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
