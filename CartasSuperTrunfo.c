#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1, Estado2;
    char Cidade1 [20], CodigoDaCarta1 [5];
    char Cidade2 [20], CodigoDaCarta2 [5];
    unsigned long int Populacao1, Populacao2;
    int PontosTuristicos1;
    int PontosTuristicos2;
    float Area1, PIB1, Densidade1, PIBpercap1;
    float PIB2, Area2, Densidade2, PIBpercap2;
    float DensidadeInvertida1;
    float DensidadeInvertida2;
    float SuperPoder1;
    float SuperPoder2;
    int Comparacao1, Comparacao2, Comparacao3, Comparacao4, Comparacao5, Comparacao6, Comparacao7;

  // Área para entrada de dados
    printf("*BEM-VINDO AO SISTEMA DE CADASTRO DE CARTAS SUPER-TRUNFO*\n\n");

    printf("Cadastro da carta 1:\n");
    printf("Informe a letra do estado (A a H): ");
    scanf(" %c", &Estado1);
    printf("Informe o nome da cidade: ");
    scanf("%s", Cidade1);
    printf("Informe um código para a carta (ex: A01): ");
    scanf("%s", CodigoDaCarta1);
    printf("Informe o tamanho da população: ");
    scanf("%lu", &Populacao1);
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &Area1);
    printf("Informe o PIB: ");
    scanf("%f", &PIB1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    Densidade1 = (float) Populacao1 / Area1;
    PIBpercap1 = PIB1 / Area1;
    DensidadeInvertida1 = 1 / Densidade1;
    SuperPoder1 = (float) Populacao1 + PontosTuristicos1 + Area1 + PIB1 + PIBpercap1 + DensidadeInvertida1;

    printf("\nCadastro da carta 2:\n");
    printf("Informe a letra do estado (A a H): ");
    scanf(" %c", &Estado2);
    printf("Informe o nome da cidade: ");
    scanf("%s", Cidade2);
    printf("Informe um código para a carta (ex: B02): ");
    scanf("%s", CodigoDaCarta2);
    printf("Informe o tamanho da população: ");
    scanf("%lu", &Populacao2);
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &Area2);
    printf("Informe o PIB: ");
    scanf("%f", &PIB2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    Densidade2 = (float) Populacao2 / Area2;
    PIBpercap2 = PIB2 / Area2;
    DensidadeInvertida2 = 1 / Densidade2;
    SuperPoder2 = (float) Populacao2 + PontosTuristicos2 + Area2 + PIB2 + PIBpercap2 + DensidadeInvertida2;

    Comparacao1 = (Populacao1 > Populacao2);
    Comparacao2 = (Area1 > Area2);
    Comparacao3 = (PIB1 > PIB2);
    Comparacao4 = (PontosTuristicos1 > PontosTuristicos2);
    Comparacao5 = (Densidade1 < Densidade2);
    Comparacao6 = (PIBpercap1 > PIBpercap2);
    Comparacao7 = (SuperPoder1 > SuperPoder2);

  // Área para exibição dos dados da cidade
    printf("\nCarta 1:\nEstado: %c\nCidade: %s\nCódigo da carta: %s\nPopulação: %lu\nÁrea (em km²): %.2f\n", Estado1, Cidade1, CodigoDaCarta1, Populacao1, Area1);
    printf("PIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\nSuper Poder: %.2f\n\n", PIB1, PontosTuristicos1, Densidade1, PIBpercap1, SuperPoder1);

    printf("Carta 2:\nEstado: %c\nCidade: %s\nCódigo da carta: %s\nPopulação: %lu\nÁrea (em km²): %.2f\n", Estado2, Cidade2, CodigoDaCarta2, Populacao2, Area2);
    printf("PIB: %.2f\nPontos turísticos: %d\nDensidade populacional: %.2f\nPIB per capita: %.2f\nSuper Poder: %.2f\n\n", PIB2, PontosTuristicos2, Densidade2, PIBpercap2, SuperPoder2);

    printf("Comparação de Cartas:\n");
    printf("1 indica vitória da Carta 1; 0 indica vitória da Carta 2.\n\n");
    printf("População: %d\nÁrea: %d\nPIB: %d\nPontos Turísticos: %d\nDensidade Populacional: %d\nPIB per capita: %d\nSuper Poder: %d\n\n", Comparacao1, Comparacao2, Comparacao3, Comparacao4, Comparacao5, Comparacao6, Comparacao7);

return 0;
} 
