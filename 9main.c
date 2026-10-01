#include <stdio.h>

int main() {
    int N;
    int termo1 =0, termo2 = 1, proximo;

    printf("Quantos termos da sequencia de Fibonacci voce quer ver?");
    scanf("%d", &N);

    //Validação para garantir que o número de termos seja maoir que zero
    if(N <=0){
        printf("Por favor, digite um numero maoir que zero.\n");
        return 1;
    }

    printf("\nOs %d primeiros termos da sequencia de Fibonacci sao:\\n", N);

    for(int i = 1; i<= N;i++){
        if(i == 1){
            printf("%d", termo1);
        }else if (i == 2){
            printf(",%d", termo2);
        } else{
            //Calculamo próximo termo os dois anteriores
            proximo = termo1 + termo2;
            printf(",%d", proximo);

            //Atuliza as variáveis para o próximo ciclo
            termo1 = termo2;
            termo2 = proximo;
        }
    }

    printf("\n");

    return 0;
}