#include <stdio.h>
#include <locale.h>

// Função para verificar se um número é primo
bool ehPrimo(int n) {
    // Números menores ou iguais a 1 não são primos
    if (n <= 1) {
        return false;
    }
    
    // Verifica se n é divisível por qualquer número de 2 até a raiz quadrada de n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    // Se não for divisível por nenhum número, é primo
    return true;
}

int main() {
	setlocale(LC_ALL,"");
    int numero;
    
    // Leitura do número do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    // Verifica se o número é primo e exibe o resultado
    if (ehPrimo(numero)) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }
    
    return 0;
}
