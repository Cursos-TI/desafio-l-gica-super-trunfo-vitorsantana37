#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char estado1[3], estado2[3];  // Usa string para armazenar siglas dos estados
    char codigo1[5], codigo2[5];  // Ajusta o tamanho para 4 caracteres + '\0'
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Leitura dos dados da primeira carta
    printf("Digite a sigla do estado da primeira carta (ex: SP): ");
    scanf("%2s", estado1);
    printf("Digite o código da primeira carta: ");
    scanf("%4s", codigo1);
    getchar(); // Limpa buffer do teclado
    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população da primeira carta: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da primeira carta (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira carta (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da segunda carta
    printf("\nDigite a sigla do estado da segunda carta (ex: RJ): ");
    scanf("%2s", estado2);
    printf("Digite o código da segunda carta: ");
    scanf("%4s", codigo2);
    getchar(); // Limpa buffer do teclado
    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população da segunda carta: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da segunda carta (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda carta (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e do PIB per capita
    densidadePopulacional1 = (float) populacao1 / area1;
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder (evita divisão por zero)
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1;
    if (densidadePopulacional1 != 0) {
        superPoder1 += (1 / densidadePopulacional1);
    }

    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2;
    if (densidadePopulacional2 != 0) {
        superPoder2 += (1 / densidadePopulacional2);
    }

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação e exibição do vencedor
    if (superPoder1 > superPoder2) {
        printf("\nA cidade %s venceu!\n", nomeCidade1);
    } else if (superPoder2 > superPoder1) {
        printf("\nA cidade %s venceu!\n", nomeCidade2);
    } else {
        printf("\nEmpate entre %s e %s!\n", nomeCidade1, nomeCidade2);
    }

    return 0;
}
