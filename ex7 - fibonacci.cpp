#include <stdio.h>
#include <locale.h>

// Fun��o para gerar e imprimir a sequ�ncia de Fibonacci at� o n�mero n
void fibonacciAteN(int n) {
    int a = 0, b = 1, proximo;
    
    // Imprime os primeiros n�meros da sequ�ncia
    if (n >= 0) {
        printf("%d ", a);
    }
    if (n >= 1) {
        printf("%d ", b);
    }
    
    // Calcula e imprime a sequ�ncia at� o n�mero n
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
    
    // Leitura do n�mero do usu�rio
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);
    
    // Verifica se o n�mero � negativo
    if (numero < 0) {
        printf("Erro: O n�mero deve ser positivo.\n");
    } else {
        // Gera e imprime a sequ�ncia de Fibonacci at� o n�mero fornecido
        fibonacciAteN(numero);
    }
    
    return 0;
}
