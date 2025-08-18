#include <stdio.h> // Inclusão de biblioteca

int main() // Função main
{
    // Variáveis para armazenamento de dados da carta 1
    char estado1;
    char cidadeNome1[50], codigoCarta1[50];
    unsigned long int populacao1;
    int nPontosTuristicos1;
    float pib1, area1;
    float densidadePopulacional1, pibPerCapita1;
    float superPoder1;

    // Variáveis para armazenamento de dados da carta 2
    char estado2;
    char cidadeNome2[50], codigoCarta2[50];
    unsigned long int populacao2;
    int nPontosTuristicos2;
    float pib2, area2;
    float densidadePopulacional2, pibPerCapita2;
    float superPoder2;

    // Registro dos dados da carta 1
    printf("Bem-vindo ao Super Trunfo!\n");

    printf("\n");

    printf("Registro da Carta 1\n");

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", cidadeNome1);

    printf("Digite o estado (ex: A): ");
    scanf(" %c", &estado1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &nPontosTuristicos1);

    printf("Registro da Carta 1 bem sucedido\n");

    printf("\n");

    // Registro dos dados da carta 2
    printf("Registro da Carta 2\n");

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", cidadeNome2);

    printf("Digite o estado (ex: A): ");
    scanf(" %c", &estado2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &nPontosTuristicos2);

    printf("\n");

    // Cálculo de densidade populacional e PIB per capita
    // Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)pib1 / populacao1;

    // Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)pib2 / populacao2;

    // Cálculo do super poder
    // Carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidadePopulacional1) + nPontosTuristicos1;

    // Carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidadePopulacional2) + nPontosTuristicos2;

    // Exibição dos dados da carta 1
    printf("Informações da Carta 1:\n");
    printf("Codigo da carta: %s\n", codigoCarta1); 
    printf("Nome da cidade: %s\n", cidadeNome1);
    printf("Estado: %c\n", estado1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", nPontosTuristicos1);
    printf("Densidade populacional: %f\n", densidadePopulacional1);
    printf("PIB per capita: %f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    // Exibição dos dados da carta 2
    printf("Informações da Carta 2:\n");
    printf("Codigo da carta: %s\n", codigoCarta2); 
    printf("Nome da cidade: %s\n", cidadeNome2);
    printf("Estado: %c\n", estado2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", nPontosTuristicos2);
    printf("Densidade populacional: %f\n", densidadePopulacional2);
    printf("PIB per capita: %f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    // Comparação das cartas
    printf("Comparação das cartas\n");

    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu!\n");
    } else {
        printf("Populacao: Carta 2 venceu!\n");
    }

    if (area1 > area2) {
        printf("Area: Carta 1 venceu!\n");
    } else {
        printf("Area: Carta 2 venceu!\n");
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu!\n");
    } else {
        printf("PIB: Carta 2 venceu!\n");
    }

    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB Per Capita: Carta 1 venceu!\n");
    } else {
        printf("PIB Per Capita: Carta 2 venceu!\n");
    }

    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Densidade Populacional: Carta 1 venceu!\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu!\n");
    }

    if (nPontosTuristicos1 > nPontosTuristicos2) {
        printf("Numero de Pontos Turisticos: Carta 1 venceu!\n");
    } else {
        printf("Numero de Pontos Turisticos: Carta 2 venceu!\n");
    }

    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu!\n");
    } else {
        printf("Super Poder: Carta 2 venceu!\n");
    }

    return 0;
    }
