#include <stdio.h>
#include <locale.h>

// Fun��o para calcular a soma dos d�gitos de um n�mero
int somaDosDigitos(int n) {
    int soma = 0;
    
    // Usa o valor absoluto para ignorar o sinal
    n = (n < 0) ? -n : n;
    
    // Calcula a soma dos d�gitos
    while (n > 0) {
        soma += n % 10;  // Adiciona o d�gito mais � direita
        n /= 10;         // Remove o d�gito mais � direita
    }
    
    return soma;
}

int main() {
	setlocale(LC_ALL,"");
    int numero;   
    
    // Leitura do n�mero do usu�rio
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);
    
    // Calcula e exibe a soma dos d�gitos
    printf("A soma dos d�gitos de %d � %d.\n", numero, somaDosDigitos(numero));
    
    return 0;
}
