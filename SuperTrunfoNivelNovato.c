#include <stdio.h> // Inclusão de biblioteca

int main() // Função main
{
    // Variáveis para armazenamento de dados da carta 1
    char estado1;
    char cidadeNome1[50], codigoCarta1[50];
    int populacao1, nPontosTuristicos1;
    float pib1, area1;

    // Variáveis para armazenamento de dados da carta 2
    char estado2;
    char cidadeNome2[50], codigoCarta2[50];
    int populacao2, nPontosTuristicos2;
    float pib2, area2;
    
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
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &nPontosTuristicos2);

    printf("\n");

    // Exibição dos dados da carta 1
    printf("Informações da Carta 1:\n");
    printf("Codigo da carta: %s\n", codigoCarta1); 
    printf("Nome da cidade: %s\n", cidadeNome1);
    printf("Estado: %c\n", estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", nPontosTuristicos1);
    printf("\n");

    // Exibição dos dados da carta 2
    printf("Informações da Carta 2:\n");
    printf("Codigo da carta: %s\n", codigoCarta2); 
    printf("Nome da cidade: %s\n", cidadeNome2);
    printf("Estado: %c\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", nPontosTuristicos2);

    return 0;
    }
