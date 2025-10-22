#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

   int pop, npt;
   float area, pib;
   char estado[50], codcarta[50], nome[50];

  // Área para entrada de dados

  printf("Digite o Estado: \n");
  scanf("%s", &estado);

  printf("Digite o Código da Carta: \n");
  scanf("%s", &codcarta);

  printf("Digite o Nome da Cidade: \n");
  scanf("%s", &nome);

  printf("Digite a População: \n");
  scanf("%d", &pop);

  printf("Digite a Área em Km²: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite o Número de Pontos Turísticos: \n");
  scanf("%d", &npt);

  // Área para exibição dos dados da cidade

  printf("Código da Carta: %s - Estado: %s\n", codcarta, estado);
  printf("Cidade: %s\n", nome);
  printf("População: %d\n", pop);
  printf("Área: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Pontos Turísticos: %d", npt);

return 0;
} 
