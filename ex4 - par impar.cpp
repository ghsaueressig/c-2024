#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	// Declara��o da vari�vel para armazenar o n�mero
    int numero;

    // Leitura do n�mero do usu�rio
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    // Verifica��o se o n�mero � par ou �mpar
    if (numero % 2 == 0) {
        printf("O n�mero %d � par.\n", numero);
    } else {
        printf("O n�mero %d � �mpar.\n", numero);
    }

    return 0;
}

