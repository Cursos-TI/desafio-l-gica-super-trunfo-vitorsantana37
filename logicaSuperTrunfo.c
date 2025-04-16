#include <stdio.h>

int main() {
    // ===== Dados da Carta 1 =====
    char estado1[] = "A"; 
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    int populacao1 = 12325000;  // Alterado para int
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões de reais
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB per capita em reais

    // ===== Dados da Carta 2 =====
    char estado2[] = "B"; 
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;  // Alterado para int
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões de reais
    int pontosTuristicos2 = 30;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB per capita em reais

    // Atributo a ser comparado - altere o valor manualmente para outro atributo
    int comparacao = 1; // 1 = População, 2 = Área, 3 = PIB, 4 = Densidade Populacional, 5 = PIB per Capita

    // Comparação de acordo com o atributo escolhido
    if (comparacao == 1) { // Comparando População
        printf("Comparação de Cartas (Atributo: População):\n");
        printf("Carta 1 - %s: %d habitantes\n", nomeCidade1, populacao1);
        printf("Carta 2 - %s: %d habitantes\n", nomeCidade2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
    } 
    else if (comparacao == 2) { // Comparando Área
        printf("Comparação de Cartas (Atributo: Área):\n");
        printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
        printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
    }
    else if (comparacao == 3) { // Comparando PIB
        printf("Comparação de Cartas (Atributo: PIB):\n");
        printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeCidade1, pib1);
        printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeCidade2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
    }
    else if (comparacao == 4) { // Comparando Densidade Populacional
        printf("Comparação de Cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidade1);
        printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidade2);
        if (densidade1 < densidade2) { // Menor densidade vence
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
    }
    else if (comparacao == 5) { // Comparando PIB per Capita
        printf("Comparação de Cartas (Atributo: PIB per Capita):\n");
        printf("Carta 1 - %s: %.2f reais\n", nomeCidade1, pibPerCapita1);
        printf("Carta 2 - %s: %.2f reais\n", nomeCidade2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
    }

    return 0;
}
