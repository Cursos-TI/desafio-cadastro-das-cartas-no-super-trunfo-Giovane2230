#include <stdio.h> // Inclusão de biblioteca

int main() // Função main
{
    // Variáveis para armazenamento de dados das cartas
    char estado;
    char cidadeNome[50], codigoCarta[50];
    int populacao, nPontosTuristicos;
    float pib, area;
    
    // Registro dos dados da carta 1
    printf("Bem-vindo ao Super Trunfo!\n");

    printf("Registro da Carta 1\n");

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidadeNome);

    printf("Digite o estado (ex: A): ");
    scanf(" %c", &estado);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &nPontosTuristicos);

    printf("Registro da Carta 1 bem sucedido\n");

    // Exibição dos dados da carta 1
    printf("Informações da Carta 1:\n");
    printf("Codigo da carta: %s\n", codigoCarta); 
    printf("Nome da cidade: %s\n", cidadeNome);
    printf("Estado: %c\n", estado);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Numero de pontos turisticos: %d\n", nPontosTuristicos);
    printf("\n");

    // Registro dos dados da carta 2
    printf("Registro da Carta 2\n");

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidadeNome);

    printf("Digite o estado (ex: A): ");
    scanf(" %c", &estado);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &nPontosTuristicos);

    // Exibição dos dados da carta 2
    printf("Informações da Carta 2:\n");
    printf("Codigo da carta: %s\n", codigoCarta); 
    printf("Nome da cidade: %s\n", cidadeNome);
    printf("Estado: %c\n", estado);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Numero de pontos turisticos: %d\n", nPontosTuristicos);

    return 0;
    }
