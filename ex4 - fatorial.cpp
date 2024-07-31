#include <stdio.h>
#include <locale.h>

// Fun��o para calcular o fatorial de um n�mero
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
    
    // Leitura do n�mero do usu�rio
    printf("Digite um n�mero inteiro n�o negativo: ");
    scanf("%d", &numero);
    
    // Verifica se o n�mero � n�o-negativo
    if (numero < 0) {
        printf("Erro: O n�mero deve ser n�o negativo.\n");
    } else {
        // Calcula e exibe o fatorial
        printf("O fatorial de %d � %llu.\n", numero, fatorial(numero));
    }
    
    return 0;
}

