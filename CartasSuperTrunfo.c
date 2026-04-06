#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontoturistio;

    char estado2;
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistio2;
  
    
  // Área para entrada de dados
    printf("voce digitara os dados do estado 1, se prepare!\n");

 // estado 1.
   printf("digite a letra do estado (ex: A): ");
   scanf( "%c", &estado);

   printf("digite o codigo da carta (ex: 01): ");
  scanf("%s" , &codigo);

  printf("digite a cidade: ");
  scanf("%s", cidade);

  printf("digite a populacao: ");
  scanf("%d", &populacao);

  printf(" digite a area: ");
  scanf("%f", &area);

  printf("digite o PIB: ");
  scanf("%f", &pib);

  printf("digite a qauntidade de ponto turisticos: ");
  scanf("%d", &pontoturistio);

  // estado 2.
    printf("\nmuito bem! agora vamos pra segunda fase.\nagora o estado 2!\n ");

    printf("digite a letra do estado: ");
    scanf("%c", &estado2);

    printf("digite o codigo da carta: ");
    scanf("%s", &codigo2);

    printf("digite a cidade: ");
    scanf("%s", &cidade2);

    printf("digite a populacao: ");
    scanf("%d", &populacao2);

    printf("digite a area: ");
    scanf("%f",&area2);

    printf("digite o PIB: ");
    scanf("%f", &pib2);

    printf("digite a quantidade de pontos turistios: ");
    scanf("%d", &pontoturistio2);

  // Área para exibição dos dados da cidade
        printf("\n---DADOS DA CARTA 1 ---\n");
   printf("estado: %c | codigo: %s\n", estado, codigo);
   printf("cidade: %s | populacao: %d\n", cidade, pontoturistio);
   printf("Aria: %.2f km | PIB: %.2f\n", area, pib);
   printf("pontos turisticos: %d\n", pontoturistio);

   printf("\n---DADOS DA CARTA 1 ---\n");
   printf("estado: %c | codigo: %s\n", estado2, codigo2);
   printf("cidade: %s | populacao: %d\n", cidade2, pontoturistio2);
   printf("Aria: %.2f km | PIB: %.2f\n", area2, pib2);
   printf("pontos turisticos: %d\n", pontoturistio2);
return 0;
} 
