#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1[] = "A";
    char nomeCidade1[] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões de reais
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Dados da Carta 2
    char estado2[] = "B";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões de reais
    int pontosTuristicos2 = 30;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Variáveis para escolha de atributos
    int opcao1, opcao2;

    // Menu interativo para escolher os dois atributos
    do {
        printf("\n===== MENU =====\n");
        printf("Escolha o primeiro atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Escolha uma opção (1-5): ");
        scanf("%d", &opcao1);

        if (opcao1 < 1 || opcao1 > 5) {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao1 < 1 || opcao1 > 5);

    // Excluir a opção escolhida no primeiro menu para o segundo
    do {
        printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Escolha uma opção (1-5): ");
        scanf("%d", &opcao2);

        // Verifica se a segunda opção é diferente da primeira
        if (opcao2 == opcao1) {
            printf("A opção escolhida não pode ser a mesma que a anterior! Tente novamente.\n");
        }
    } while (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 5);

    // Comparações e resultados
    int resultado1 = 0, resultado2 = 0;

    // Comparar o primeiro atributo
    if (opcao1 == 1) { // População
        printf("\nComparação de Cartas (Atributo: População):\n");
        printf("Carta 1 - %s: %d habitantes\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %d habitantes\n", nomeCidade2, populacao2);
        resultado1 = populacao1;
        resultado2 = populacao2;
    } else if (opcao1 == 2) { // Área
        printf("\nComparação de Cartas (Atributo: Área):\n");
        printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);
        resultado1 = area1;
        resultado2 = area2;
    } else if (opcao1 == 3) { // PIB
        printf("\nComparação de Cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeCidade1, pib1);
        printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeCidade2, pib2);
        resultado1 = pib1;
        resultado2 = pib2;
    } else if (opcao1 == 4) { // Pontos turísticos
        printf("\nComparação de Cartas (Atributo: Pontos Turísticos):\n");
        printf("Carta 1 - %s: %d pontos turísticos\n", nomeCidade1, pontosTuristicos1);
        printf("Carta 2 - %s: %d pontos turísticos\n", nomeCidade2, pontosTuristicos2);
        resultado1 = pontosTuristicos1;
        resultado2 = pontosTuristicos2;
    } else { // Densidade Demográfica
        printf("\nComparação de Cartas (Atributo: Densidade Demográfica):\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidade2);
        resultado1 = densidade1;
        resultado2 = densidade2;
    }

    // Comparar o segundo atributo
    if (opcao2 == 1) { // População
        printf("\nComparação de Cartas (Atributo: População):\n");
        printf("Carta 1 - %s: %d habitantes\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %d habitantes\n", nomeCidade2, populacao2);
        resultado1 += populacao1;
        resultado2 += populacao2;
    } else if (opcao2 == 2) { // Área
        printf("\nComparação de Cartas (Atributo: Área):\n");
        printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);
        resultado1 += area1;
        resultado2 += area2;
    } else if (opcao2 == 3) { // PIB
        printf("\nComparação de Cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeCidade1, pib1);
        printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeCidade2, pib2);
        resultado1 += pib1;
        resultado2 += pib2;
    } else if (opcao2 == 4) { // Pontos turísticos
        printf("\nComparação de Cartas (Atributo: Pontos Turísticos):\n");
        printf("Carta 1 - %s: %d pontos turísticos\n", nomeCidade1, pontosTuristicos1);
        printf("Carta 2 - %s: %d pontos turísticos\n", nomeCidade2, pontosTuristicos2);
        resultado1 += pontosTuristicos1;
        resultado2 += pontosTuristicos2;
    } else { // Densidade Demográfica
        printf("\nComparação de Cartas (Atributo: Densidade Demográfica):\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidade2);
        resultado1 += densidade1;
        resultado2 += densidade2;
    }

    // Determinar o vencedor
    if (resultado1 > resultado2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (resultado1 < resultado2) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
