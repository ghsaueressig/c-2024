#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	// Declaração da variável para armazenar o número
    int numero;

    // Leitura do número do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verificação se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}

