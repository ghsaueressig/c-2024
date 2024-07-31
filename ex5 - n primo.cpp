#include <stdio.h>
#include <locale.h>

// Fun��o para verificar se um n�mero � primo
bool ehPrimo(int n) {
    // N�meros menores ou iguais a 1 n�o s�o primos
    if (n <= 1) {
        return false;
    }
    
    // Verifica se n � divis�vel por qualquer n�mero de 2 at� a raiz quadrada de n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
    // Se n�o for divis�vel por nenhum n�mero, � primo
    return true;
}

int main() {
	setlocale(LC_ALL,"");
    int numero;
    
    // Leitura do n�mero do usu�rio
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);
    
    // Verifica se o n�mero � primo e exibe o resultado
    if (ehPrimo(numero)) {
        printf("%d � um n�mero primo.\n", numero);
    } else {
        printf("%d n�o � um n�mero primo.\n", numero);
    }
    
    return 0;
}
