#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado;                          // Letra de 'A' a 'H'
    char codcarta[3];                     // Ex: A01, B03
    char nome[50];                        // Nome da cidade
    int pop;                              // Número de habitantes
    float area;                           // Área em km²
    float pib;                            // PIB da cidade em bilhões de reais
    int npt;                              // Número de pontos turísticos
    float denpop;                         // Densidade populacional
    float pibcap;                         // PIB per capita

  // Área para entrada de dados

  printf("Digite o Estado (letra de A a H): \n");
  scanf("%c", &estado);

  printf("Digite o Código da Carta (ex.: 01): \n");
  scanf("%s", &codcarta);

  printf("Digite o Nome da Cidade: \n");
  scanf("%s", &nome);

  printf("Digite a População: \n");
  scanf("%d", &pop);

  printf("Digite a Área (em Km²): \n");
  scanf("%f", &area);

  printf("Digite o PIB (em bilhões de reais): \n");
  scanf("%f", &pib);

  printf("Digite o Número de Pontos Turísticos: \n");
  scanf("%d", &npt);

  
  // Área para exibição dos dados da cidade

  printf("Código da Carta: %c%s\n", estado, codcarta);
  printf("Estado: %c\n", estado);
  printf("Cidade: %s\n", nome);
  printf("População: %d\n", pop);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Pontos Turísticos: %d\n", npt);

  // densidade pop. - população / área

  denpop = (float) pop / area;
  printf("A densidade populacinal é: %.2f hab/km²\n", denpop);

  // PIB per capita - PIB / população

  pibcap = (float) (pib * 1000000000) / pop;
    printf("O PIB per capita é: %.2f reais\n", pibcap);

return 0;
} 
