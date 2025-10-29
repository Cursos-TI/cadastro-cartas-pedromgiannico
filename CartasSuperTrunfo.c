#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis 

    int rPop, rArea, rPib, rNpt, rDenpop, rPibcap, rSuper;

// variávei para Carta1

    char estado1;                          // Letra de 'A' a 'H'
    char codcarta1[3];                     // Ex: A01, B03
    char nome1[50];                        // Nome da cidade
    int pop1;                              // Número de habitantes
    float area1;                           // Área em km²
    float pib1;                            // PIB da cidade em bilhões de reais
    int npt1;                              // Número de pontos turísticos
    float denpop1;                         // Densidade populacional
    float pibcap1;                         // PIB per capita
    float Super1;                          // Super Poder soma de todos as variavéis

// variávei para Carta2

    char estado2[3];                          // Letra de 'A' a 'H'
    char codcarta2[3];                     // Ex: A01, B03
    char nome2[50];                        // Nome da cidade
    int pop2;                              // Número de habitantes
    float area2;                           // Área em km²
    float pib2;                            // PIB da cidade em bilhões de reais
    int npt2;                              // Número de pontos turísticos
    float denpop2;                         // Densidade populacional
    float pibcap2;                         // PIB per capita
    float Super2;                          // Super Poder soma de todos as variavéis


// Área para entrada de dados da Carta1

  printf("Cadastre a Carta 1\n");
  printf(" \n");

  printf("Digite o Estado (letra de A a H): \n");
  scanf("%c", &estado1);

  printf("Digite o Código da Carta (ex.: 01): \n");
  scanf("%s", &codcarta1);

  printf("Digite o Nome da Cidade: \n");
  scanf("%s", &nome1);

  printf("Digite a População: \n");
  scanf("%d", &pop1);

  printf("Digite a Área (em Km²): \n");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhões de reais): \n");
  scanf("%f", &pib1);

  printf("Digite o Número de Pontos Turísticos: \n");
  scanf("%d", &npt1);

// Área para entrada de dados da Carta2

  printf(" \n");
  printf("Cadastre a Carta 2\n");
  printf(" \n");

  printf("Digite o Estado (letra de A a H): \n");
  scanf("%s", &estado2);

  printf("Digite o Código da Carta (ex.: 01): \n");
  scanf("%s", &codcarta2);

  printf("Digite o Nome da Cidade: \n");
  scanf("%s", &nome2);

  printf("Digite a População: \n");
  scanf("%d", &pop2);

  printf("Digite a Área (em Km²): \n");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões de reais): \n");
  scanf("%f", &pib2);

  printf("Digite o Número de Pontos Turísticos: \n");
  scanf("%d", &npt2);
  
// Área para exibição dos dados da Carta1

  printf(" \n");
  printf("Carta 1\n");
  printf(" \n");

  printf("Código da Carta: %c%s\n", estado1, codcarta1);
  printf("Estado: %c\n", estado1);
  printf("Cidade: %s\n", nome1);
  printf("População: %d\n", pop1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Pontos Turísticos: %d\n", npt1);

// densidade pop. - população / área

  denpop1 = (float) pop1 / area1;
  printf("A densidade populacinal é: %.2f hab/km²\n", denpop1);

// PIB per capita - PIB / população

  pibcap1 = (float) (pib1 * 1e9) / pop1;
  printf("O PIB per capita é: %.2f reais\n", pibcap1);

// Super Poder (soma de pop, area, pib, pib per capita, pontos turisticos e a densidade pop invertida)

  Super1 = pop1 + area1 + pib1 + pibcap1 + npt1 - denpop1;
  printf("Super poder: %.2f\n", Super1);

// Área para exibição dos dados da Carta2

  printf(" \n");
  printf("Carta 2\n");
  printf(" \n");

  printf("Código da Carta: %s%s\n", estado2, codcarta2);
  printf("Estado: %s\n", estado2);
  printf("Cidade: %s\n", nome2);
  printf("População: %d\n", pop2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Pontos Turísticos: %d\n", npt2);

// densidade pop. - população / área

  denpop2 = (float) pop2 / area2;
  printf("A densidade populacinal é: %.2f hab/km²\n", denpop2);

// PIB per capita - PIB / população

  pibcap2 = (float) (pib2 * 1e9) / pop2;
  printf("O PIB per capita é: %.2f reais\n", pibcap2);

// Super Poder (soma de pop, area, pib, pib per capita, pontos turisticos e a densidade pop invertida)

  Super2 = pop2 + area2 + pib2 + pibcap2 + npt2 - denpop2;
  printf("Super poder: %.2f\n", Super2);

// Comparando as cartas

  rPop = pop1 > pop2;
  printf("A carta 1 vence em População? %d\n", rPop);

  rArea = area1 > area2;
  printf("A carta 1 vence em Área? %d\n", rArea);

  rPib = pib1 > pib2;
  printf("A carta 1 vence em PIB? %d\n", rPib);

  rNpt = npt1 > npt2;
  printf("A carta 1 vence em Número de pontos turísticos? %d\n", rNpt);

  rDenpop = denpop1 < denpop2;
  printf("A carta 1 vence em Densidade populacional? %d\n", rDenpop);

  rPibcap = pibcap1 > pibcap2;
  printf("A carta 1 vence em PIB per capita? %d\n", rPibcap);

  rSuper = Super1 > Super2;
  printf("A carta 1 vence em Super Poder? %d\n", rSuper);

return 0;
} 
