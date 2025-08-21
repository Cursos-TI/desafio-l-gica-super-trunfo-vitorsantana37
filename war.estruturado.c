#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
struct Territorio {
    char nome[30]; 
    char cor[10];   
    int tropas;    
};

int main() {
    // Declaração de um vetor para armazenar 5 territórios
    struct Territorio territorios[5];
    int num_territorios = 5;

    // Entrada dos dados dos territórios
    printf("--- Cadastro de Territórios ---\n");
    for (int i = 0; i < num_territorios; i++) {
        printf("\nCadastro do Território %d de %d:\n", i + 1, num_territorios);
        
        // Leitura do nome do território usando fgets para permitir espaços
        printf("Digite o nome do território: ");
        // Limpa o buffer de entrada antes de usar fgets
        while (getchar() != '\n');
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        // Remove a nova linha adicionada por fgets
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = 0;
        
        // Leitura da cor do exército
        printf("Digite a cor do exército: ");
        scanf("%s", territorios[i].cor);
        
        // Leitura da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados dos territórios cadastrados
    printf("\n--- Territórios Cadastrados ---\n");
    for (int i = 0; i < num_territorios; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
