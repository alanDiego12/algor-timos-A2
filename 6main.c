echo "# algor-timos-A2" >> README.md 
git init 
git add README.md 
git commit -m "primeiro commit" 
git branch -M main 
git remote add origin https://github.com/alanDiego12/algor-timos-A2.git
 git push -u origin main

#include <stdio.h>
#include <ctype.h> // Para a função tolower()

int main() {
    char palavra[50];
    int vogais = 0;
    int consoantes = 0;

    printf("Digite uma palavra (sem espacos): ");
    scanf("%49s", palavra);

    // Percorre a palavra caractere por caractere ate encontrar o '\0'
    for (int i = 0; palavra[i] != '\0'; i++) {
        // Converte o caractere para minusculo para facilitar a comparacao
        char c = tolower(palavra[i]);

        // Verifica se e uma letra do alfabeto (A-Z ou a-z)
        if (c >= 'a' && c <= 'z') {
            // Verifica se e uma vogal
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vogais++;
            } else {
                consoantes++;
            }
        }
    }

    // Exibicao dos resultados
    printf("\n--- Resultado ---\n");
    printf("Palavra digitada: %s\n", palavra);
    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);

    return 0;
}
