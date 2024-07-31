#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

// Função para verificar se a string é um palíndromo
bool ehPalindromo(const char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    
    while (inicio < fim) {
        // Ignora caracteres não alfabéticos e converte para minúsculas
        while (!isalpha(str[inicio]) && inicio < fim) {
            inicio++;
        }
        while (!isalpha(str[fim]) && inicio < fim) {
            fim--;
        }
        
        // Compara caracteres
        if (tolower(str[inicio]) != tolower(str[fim])) {
            return false;
        }
        
        // Move os ponteiros para verificar o próximo par de caracteres
        inicio++;
        fim--;
    }
    
    return true;
}

int main() {
	setlocale(LC_ALL,"");
    char str[100];
    
    // Leitura da string do usuário
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove o caractere de nova linha do final da string, se existir
    str[strcspn(str, "\n")] = '\0';
    
    // Verifica e exibe se a string é um palíndromo
    if (ehPalindromo(str)) {
        printf("\"%s\" é um palíndromo.\n", str);
    } else {
        printf("\"%s\" não é um palíndromo.\n", str);
    }
    
    return 0;
}

