#include <stdio.h>

int main() {
    float a, b, c;

    // Leitura dos três lados
    printf("Digite o valor do primeiro lado (a): ");
    scanf("%f", &a);
    printf("Digite o valor do segundo lado (b): ");
    scanf("%f", &b);
    printf("Digite o valor do terceiro lado (c): ");
    scanf("%f", &c);

    // 1. Verificação da Condição de Existência de um Triângulo:
    // Para formar um triângulo, cada lado deve ser menor que a soma dos outros dois
    // e todos os lados devem ser estritamente positivos.
    if (a <= 0 || b <= 0 || c <= 0 || (a >= b + c) || (b >= a + c) || (c >= a + b)) {
        printf("\nOs valores digitados NAO formam um triangulo valido.\n");
    }
    // 2. Classificação caso seja um triângulo válido
    else if (a == b && b == c) {
        printf("\nOs lados formam um Triangulo Equilatero (todos os lados iguais).\n");
    }
    else if (a == b || a == c || b == c) {
        printf("\nOs lados formam um Triangulo Isosceles (dois lados iguais).\n");
    }
    else {
        printf("\nOs lados formam um Triangulo Escaleno (todos os lados diferentes).\n");
    }

    return 0;
}
