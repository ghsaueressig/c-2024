#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

// Fun��o para verificar se a string � um pal�ndromo
bool ehPalindromo(const char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    
    while (inicio < fim) {
        // Ignora caracteres n�o alfab�ticos e converte para min�sculas
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
        
        // Move os ponteiros para verificar o pr�ximo par de caracteres
        inicio++;
        fim--;
    }
    
    return true;
}

int main() {
	setlocale(LC_ALL,"");
    char str[100];
    
    // Leitura da string do usu�rio
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove o caractere de nova linha do final da string, se existir
    str[strcspn(str, "\n")] = '\0';
    
    // Verifica e exibe se a string � um pal�ndromo
    if (ehPalindromo(str)) {
        printf("\"%s\" � um pal�ndromo.\n", str);
    } else {
        printf("\"%s\" n�o � um pal�ndromo.\n", str);
    }
    
    return 0;
}

