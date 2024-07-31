#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    // Declaração das variáveis para armazenar os três números
    float num1, num2, num3;

    // Leitura dos três números do usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    // Determinar o maior número
    if (num1 >= num2 && num1 >= num3) {
        printf("O maior número é: %.2f\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("O maior número é: %.2f\n", num2);
    } else {
        printf("O maior número é: %.2f\n", num3);
    }

    return 0;
}

