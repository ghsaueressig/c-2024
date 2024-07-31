#include <stdio.h>
#include <locale.h>

// Função para gerar e imprimir a sequência de Fibonacci até o número n
void fibonacciAteN(int n) {
    int a = 0, b = 1, proximo;
    
    // Imprime os primeiros números da sequência
    if (n >= 0) {
        printf("%d ", a);
    }
    if (n >= 1) {
        printf("%d ", b);
    }
    
    // Calcula e imprime a sequência até o número n
    while (b <= n) {
        proximo = a + b;
        if (proximo > n) {
            break;
        }
        printf("%d ", proximo);
        a = b;
        b = proximo;
    }
    
    printf("\n");
}

int main() {
	setlocale(LC_ALL,"");
    int numero;
    
    // Leitura do número do usuário
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    // Verifica se o número é negativo
    if (numero < 0) {
        printf("Erro: O número deve ser positivo.\n");
    } else {
        // Gera e imprime a sequência de Fibonacci até o número fornecido
        fibonacciAteN(numero);
    }
    
    return 0;
}
