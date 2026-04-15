#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1, Estado2;
    char Cidade1 [20], CodigoDaCarta1 [5], Cidade2 [20], CodigoDaCarta2 [5];
    int Populacao1, PontosTuristicos1, Populacao2, PontosTuristicos2;
    float Area1, PIB1, PIB2, Area2;

  // Área para entrada de dados
    printf("*BEM-VINDO AO SISTEMA DE CADASTRO DE CARTAS SUPER-TRUNFO*\n\n");

    printf("Começaremos definindo os valores da primeira carta:\n");
    printf("Defina uma letra de 'A' a 'H' para representar o Estado desta carta: ");
    scanf(" %c", &Estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &Cidade1);

    printf("Defina um código para a carta (A letra do Estado seguida de um número de 01 a 04): ");
    scanf("%s", &CodigoDaCarta1);

    printf("Digite o tamanho da população: ");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    printf("\nAgora vamos definir os valores da segunda carta:\n\n");

    printf("Defina uma letra de 'A' a 'H' para representar o Estado desta carta: ");
    scanf(" %c", &Estado2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &Cidade2);

    printf("Defina um código para a carta (A letra do Estado seguida de um número de 01 a 04): ");
    scanf("%s", &CodigoDaCarta2);

    printf("Digite o tamanho da população: ");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

  // Área para exibição dos dados da cidade
    printf("\n Carta 1:\n Estado: %c\n Cidade: %s\n Código da carta: %s\n", Estado1, Cidade1, CodigoDaCarta1);
    printf(" População: %d\n Área: %f\n PIB: %f\n Pontos turísticos: %d\n\n", Populacao1, Area1, PIB1, PontosTuristicos1);

    printf(" Carta 2:\n Estado: %c\n Cidade: %s\n Código da carta: %s\n", Estado2, Cidade2, CodigoDaCarta2);
    printf(" População: %d\n Área: %f\n PIB: %f\n Pontos turísticos: %d\n", Populacao2, Area2, PIB2, PontosTuristicos2);
return 0;
} 
