#include <stdio.h>

int main() {
    int opcao = 1;
    int numero;

    // Laço principal que mantém o programa rodando até o usuário escolher 0
    while (opcao != 0) {
        printf("Digite um numero para ver a sua tabuada: ");
        scanf("%d", &numero);

        printf("\n--- Tabuada do %d ---\n", numero);
        
        // Laço for para calcular e exibir a tabuada de 1 a 10
        for (int i = 1; i <= 10; i++) {
            printf("%d x %2d = %d\n", numero, i, numero * i);
        }

        // Pergunta se o usuário deseja continuar
        printf("\nDeseja ver outra tabuada? (1-Sim / 0-Nao): ");
        scanf("%d", &opcao);
        printf("\n");
    }

    printf("Programa encerrado. Ate mais!\n");

    return 0;
}
