#include <stdio.h>
#include <ctype.h>  // Para a função tolower

int main() {
    char string[100]; // Tamanho máximo da string
    int contador = 0;

    // Entrada da string
    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    // Verifica a ocorrência de 'a' ou 'A'
    for (int i = 0; string[i] != '\0'; i++) {
        if (tolower(string[i]) == 'a') {
            contador++;
        }
    }

    // Exibe o resultado
    if (contador > 0) {
        printf("A letra 'a' aparece %d vezes na string.\n", contador);
    } else {
        printf("A letra 'a' não aparece na string.\n");
    }

    return 0;
}