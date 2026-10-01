#include <stdio.h>

int main() {
    int numero;
    int eh_primo = 1; // 1 indica que é primo (verdadeiro), 0 indica que não é (falso)

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Números menores ou iguais a 1 não são considerados primos
    if (numero <= 1) {
        eh_primo = 0;
    } else {
        // Testa divisibilidade por todos os números de 2 até (numero - 1)
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                eh_primo = 0; // Encontrou um divisor além de 1 e ele mesmo
                break;        // Interrompe o loop pois já provou que não é primo
            }
        }
    }

    // Exibição do resultado
    printf("\n--- Resultado ---\n");
    if (eh_primo) {
        printf("O numero %d eh PRIMO.\n", numero);
    } else {
        printf("O numero %d NAO eh primo.\n", numero);
    }

    return 0;
}
