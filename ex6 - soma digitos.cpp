#include <stdio.h>
#include <locale.h>

// Função para calcular a soma dos dígitos de um número
int somaDosDigitos(int n) {
    int soma = 0;
    
    // Usa o valor absoluto para ignorar o sinal
    n = (n < 0) ? -n : n;
    
    // Calcula a soma dos dígitos
    while (n > 0) {
        soma += n % 10;  // Adiciona o dígito mais à direita
        n /= 10;         // Remove o dígito mais à direita
    }
    
    return soma;
}

int main() {
	setlocale(LC_ALL,"");
    int numero;   
    
    // Leitura do número do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    // Calcula e exibe a soma dos dígitos
    printf("A soma dos dígitos de %d é %d.\n", numero, somaDosDigitos(numero));
    
    return 0;
}
