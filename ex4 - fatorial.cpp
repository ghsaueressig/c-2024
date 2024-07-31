#include <stdio.h>
#include <locale.h>

// Função para calcular o fatorial de um número
unsigned long long fatorial(int n) {
    unsigned long long resultado = 1;
    
    // Calcula o fatorial usando um loop
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    
    return resultado;
}

int main() {
	setlocale(LC_ALL,"");
    int numero;
    
    // Leitura do número do usuário
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);
    
    // Verifica se o número é não-negativo
    if (numero < 0) {
        printf("Erro: O número deve ser não negativo.\n");
    } else {
        // Calcula e exibe o fatorial
        printf("O fatorial de %d é %llu.\n", numero, fatorial(numero));
    }
    
    return 0;
}

