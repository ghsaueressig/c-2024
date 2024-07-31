#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    // Declara��o das vari�veis para armazenar os n�meros e os resultados
    float num1, num2;
    float soma, subtracao, multiplicacao, divisao;

    // Leitura dos dois n�meros do usu�rio
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);

    // C�lculo das opera��es
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;

    // Verifica��o para evitar divis�o por zero
    if (num2 != 0) {
        divisao = num1 / num2;
    } else {
        printf("Erro: Divis�o por zero n�o � permitida.\n");
    }

    // Impress�o dos resultados
    printf("Soma: %.2f\n", soma);
    printf("Subtra��o: %.2f\n", subtracao);
    printf("Multiplica��o: %.2f\n", multiplicacao);

    // Verifica se a divis�o foi realizada
    if (num2 != 0) {
        printf("Divis�o: %.2f\n", divisao);
    }

    return 0;
}

