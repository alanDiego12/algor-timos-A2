#include <stdio.h>

int main(){
    int numero;
    int tentativas = 0;
    int valido = 0; // Flag para controlar o laço (0 = inválido, 1 = válido)

    while (!valido){
        printf("Digite um numero entre 1 e 100:");
        scanf("%d", &numero);
        tentativas++;//Incrementa o contador a cada tentativa

        //Verifica se o número está dentro da faixa permitida[1, 100]
        if (numero >= 1 &&numero <=100){
           valido = 1;//Condição de saída do loop
        }else
        {
            printf("Erro: O numero %d esta fora da faixa permitida(1 a 100)!\n\n", numero);

        }
    }

    //Exibição dos resultados finais
    printf("\n--- Sucesso ---\n");
    printf("Numero valido digitado: %d\n",numero);
    printf("Total de tentativas: %d\n", tentativas);

    
   return 0;
}