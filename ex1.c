#include <stdio.h>

// Função para verificar se um número pertence à sequência de Fibonacci
int pertenceFibonacci(int numero) {
    int a = 0, b = 1, c = 0;
    
    // Continua gerando a sequência até encontrar um número maior ou igual ao informado
    while (c < numero) {
        c = a + b;
        a = b;
        b = c;
    }
    
    // Se o número gerado for igual ao informado, ele pertence à sequência
    return (c == numero || numero == 0);
}

int main() {
    int numero;

    // Entrada do número a ser verificado
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verifica se o número pertence à sequência de Fibonacci
    if (pertenceFibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}