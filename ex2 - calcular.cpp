#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    // Declaração das variáveis para armazenar os números e os resultados
    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;

    // Leitura dos dois números do usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Cálculo das operações
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    // Verificação para evitar divisão por zero
    if (num2 != 0) {
        divisao = num1 / num2;
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
    }

    // Impressão dos resultados
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);

    // Verifica se a divisão foi realizada
    if (num2 != 0) {
        printf("Divisão: %.2f\n", divisao);
    }

    return 0;
}

