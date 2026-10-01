#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float media, soma_pesos;

    //leitura das notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a tercceira nota: ");
    scanf("%f", &nota3);

    //leitura dos pesos
    printf("\nDigite o peso da primeira nota: ");
    scanf("%f", &peso1);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);
    printf("Digite o peso da terceira nota: ");
    scanf("%f", &peso3);

    //Validção: verifica se algum peso é igual a zero antes de calcular
    if (peso1 == 0 || peso2 == 0 || peso3 == 0){
        printf("\nErro: Nenhum peso pode ser igual a zero!\n");
        return 1; //Encerra o programa indicando erro
    }

    //Cálculo da média ponderada
    soma_pesos = peso1 + peso2 + peso3;
    media = (nota1*peso1+nota2*peso2+nota3*peso3) / soma_pesos;

    //Exibição do resultado
    printf("\nMédia Ponderada: %.2f\n", media);

    // Verificação da situação do aluno
    if (media >= 6.0){
        printf("Situação: Aprovado\n");
    } else if (media >= 4.0){
        printf("situação: Exame\n");
    } else{
        printf("Situação: Reprovado\n");
    }

    
    return 0;
}