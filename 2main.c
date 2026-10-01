#include <stdio.h>

int main(){
    int N;
    float numero, maior,menor,soma =0, media;

    printf("Quantos numeros voce deseja digitar? ");
    scanf("%d", &N);

    //Validação para garantir que o usuário digite um valor válido
    if (N <= 0){
      printf("Quantidade invalida! O numero N deve ser maior que zero.\n");
      return 1;
    }

    for (int i = 1; i <= N; i++){
       printf("Digite o %d° numero: ",i);
       scanf("%f", &numero);

       //Acumula a soma de todos os números
       soma += numero;

       //No primeiro número digitado, ele é tanto o maior quanto o menor
       if (i == 1){
          maior = numero;
          menor = numero;
       }else{
         //para os números seguintes, atualiza maior e menor conforme necessário
         if (numero > maior){
            maior = numero;
         }
        }
       
    }

    //Cálculo da média após a leitura de todos os N números
    media = soma /N;

    //Exibição dos resultados 
    printf("\n---Resultados---\n");
    printf("Maoir valor: %.2f\n", menor);
    printf("Menor valor: %.2f\n", menor);
    printf("Media: %.2f\n", media);


    
    return 0;
}