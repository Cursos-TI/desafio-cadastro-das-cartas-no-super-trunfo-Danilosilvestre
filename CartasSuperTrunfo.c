// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // variáveis da carta 1
    char estado1;
    char codigo1[5], cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pib_per_capita1;

    // variáveis da carta 2
    char estado2;
    char codigo2[5], cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pib_per_capita2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // dados para a carta 1
    printf("Informe os dados da carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1); 

    printf("Código da carta (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);  

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da Densidade Populacional e PIB per capita para a carta 1
      densidadePopulacional1 = populacao1 / area1;
      pib_per_capita1 = pib1 / populacao1;

    // dados para a carta 2
    printf("\nInforme os dados da carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);  

    printf("Código da carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);  

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

     // Cálculo da Densidade Populacional e PIB per capita para a carta 2
     densidadePopulacional2 = populacao2 / area2;
     pib_per_capita2 = pib2 / populacao2;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

      
    // Comparação entre as cartas (Atributo escolhido: População)
    printf("\nComparação de Cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d população\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d população\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
     printf("Resultado: cidade 1 (%s) venceu!\n", cidade1);
  } else if (populacao1 < populacao2) {
     printf("Resultado: cidade 2 (%s) venceu!\n", cidade2);
  } else {
     printf("Resultado: Empate!\n");
  }

    return 0;
}



    


