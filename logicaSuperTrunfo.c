#include <stdio.h>

int main() {
    // ===== Dados da Carta 1 =====
    char estado1[] = "A"; 
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões de reais
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // ===== Dados da Carta 2 =====
    char estado2[] = "B"; 
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões de reais
    int pontosTuristicos2 = 30;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Variável de escolha de atributo no menu
    int opcao;

    // Menu de escolha de atributo para comparação
    do {
        printf("\n===== MENU =====\n");
        printf("Escolha o atributo para comparar as cartas:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("6 - Sair\n");
        printf("Escolha uma opção (1-6): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: { // Comparar População
                printf("\nComparação de Cartas (Atributo: População):\n");
                printf("Carta 1 - %s: %d habitantes\n", nomeCidade1, populacao1);
                printf("Carta 2 - %s: %d habitantes\n", nomeCidade2, populacao2);
                if (populacao1 > populacao2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
                } else if (populacao1 < populacao2) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }
            case 2: { // Comparar Área
                printf("\nComparação de Cartas (Atributo: Área):\n");
                printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
                printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);
                if (area1 > area2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
                } else if (area1 < area2) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }
            case 3: { // Comparar PIB
                printf("\nComparação de Cartas (Atributo: PIB):\n");
                printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeCidade1, pib1);
                printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeCidade2, pib2);
                if (pib1 > pib2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
                } else if (pib1 < pib2) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }
            case 4: { // Comparar Número de Pontos Turísticos
                printf("\nComparação de Cartas (Atributo: Número de Pontos Turísticos):\n");
                printf("Carta 1 - %s: %d pontos turísticos\n", nomeCidade1, pontosTuristicos1);
                printf("Carta 2 - %s: %d pontos turísticos\n", nomeCidade2, pontosTuristicos2);
                if (pontosTuristicos1 > pontosTuristicos2) {
                    printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
                } else if (pontosTuristicos1 < pontosTuristicos2) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }
            case 5: { // Comparar Densidade Demográfica
                printf("\nComparação de Cartas (Atributo: Densidade Demográfica):\n");
                printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidade1);
                printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidade2);
                if (densidade1 < densidade2) { // Menor densidade vence
                    printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
                } else if (densidade1 > densidade2) {
                    printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }
            case 6: { // Sair
                printf("Saindo do programa...\n");
                break;
            }
            default: {
                printf("Opção inválida! Tente novamente.\n");
                break;
            }
        }
    } while (opcao != 6); // Enquanto o usuário não escolher a opção 6 para sair

    return 0;
}
