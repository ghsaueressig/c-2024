#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    // Declara��o das vari�veis para armazenar os tr�s n�meros
    float num1, num2, num3;

    // Leitura dos tr�s n�meros do usu�rio
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro n�mero: ");
    scanf("%f", &num3);

    // Determinar o maior n�mero
    if (num1 >= num2 && num1 >= num3) {
        printf("O maior n�mero �: %.2f\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("O maior n�mero �: %.2f\n", num2);
    } else {
        printf("O maior n�mero �: %.2f\n", num3);
    }

    return 0;
}

