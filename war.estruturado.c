#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
struct Territorio {
    char nome[30];   // Nome do território
    char cor[10];    // Cor do exército
    int tropas;      // Quantidade de tropas
};

int main() {
    // Declaração de um vetor para armazenar 5 territórios
    struct Territorio territorios[5];

    // Entrada dos dados dos territórios
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do Território %d:\n", i + 1);
        
        // Leitura do nome do território
        printf("Digite o nome do território: ");
        scanf("%s", territorios[i].nome);
        
        // Leitura da cor do exército
        printf("Digite a cor do exército: ");
        scanf("%s", territorios[i].cor);
        
        // Leitura da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        
        printf("\n"); // pra ficar mais legivel 
    }

    // Exibição dos dados dos territórios cadastrados
    printf("Territórios cadastrados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("\n"); // Linha em branco para melhor legibilidade
    }

    return 0;
}
