#include <stdio.h>

int main() {
    int opcao = 0;
    float num1, num2, resultado;

    // Repete o menu enquanto a opcao escolhida for diferente de 5 (Sair)
    while (opcao != 5) {
        // Exibicao do menu
        printf("\n=============================\n");
        printf("     MENU DA CALCULADORA     \n");
        printf("=============================\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("-----------------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Processamento das opcoes de calculo (1 a 4)
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);

            if (opcao == 1) {
                resultado = num1 + num2;
                printf("\nResultado da Soma: %.2f\n", resultado);
            } 
            else if (opcao == 2) {
                resultado = num1 - num2;
                printf("\nResultado da Subtracao: %.2f\n", resultado);
            } 
            else if (opcao == 3) {
                resultado = num1 * num2;
                printf("\nResultado da Multiplicacao: %.2f\n", resultado);
            } 
            else if (opcao == 4) {
                // Tratamento para divisao por zero
                if (num2 == 0) {
                    printf("\nErro: Nao e possivel dividir por zero!\n");
                } else {
                    resultado = num1 / num2;
                    printf("\nResultado da Divisao: %.2f\n", resultado);
                }
            }
        } 
        // Encerramento
        else if (opcao == 5) {
            printf("\nSaindo da calculadora... Ate logo!\n");
        } 
        // Opcao invalida
        else {
            printf("\nOpcao invalida! Por favor, escolha um numero entre 1 e 5.\n");
        }
    }

    return 0;
}
