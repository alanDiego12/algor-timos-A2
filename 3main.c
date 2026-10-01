#include <stdio.h>

int main() {
    float nota;
    int aprovados = 0;
    int exame = 0;
    int reprovados = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a nota final do %dº aluno: ", i);
        scanf("%f", &nota);

        // Validação simples para evitar notas fora do intervalo [0, 10]
        while (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Digite um valor entre 0 e 10: ");
            scanf("%f", &nota);
        }

        // Incrementa o contador correspondente de acordo com a nota
        if (nota >= 6.0) {
            aprovados++;
        } else if (nota >= 4.0) {
            exame++;
        } else {
            reprovados++;
        }
    }

    // Exibição dos resultados acumulados nos contadores
    printf("\n--- Resumo Final ---\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Em Exame:  %d\n", exame);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}

