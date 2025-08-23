#include <stdio.h>

int main(){

    // variaveis da carta
    char estado[50], cidade[50], codigo[5];
    int pontosTuristicos, populacao;
    float area, pib;
    float densidade, pib_per_capita;
    // coleta de dados da primeira carta

    printf("digite o estado da primeira carta:\n");
    scanf("%s", estado);
    printf("digite o codigo da primeira carta:\n");
    scanf("%s", codigo);
    printf("digite a cidade capital da primeira carta:\n");
    scanf("%s", cidade);
    printf("digite o numero de habitantes da primeira carta:\n");
    scanf("%d", &populacao);
    printf("digite o pib da primeira carta:\n");
    scanf("%f", &pib);
    printf("digite o numero de pontos turisticos da primeira carta:\n");
    scanf("%d", &pontosTuristicos);
    printf("digite a area em m² da cidade da primeira carta:\n");
    scanf("%f", &area);

    densidade = (float) area / populacao;
    pib_per_capita = (float) pib / populacao;
    //exibe os dados da primeira carta

    printf("dados da primeira carta:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Numero de habitantes: %d\n", populacao);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos);
    printf("Area em m²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Densidade populacional é: %.2f\n", densidade);
    printf("O PIB per capita é: %.2f\n", pib_per_capita);

     // coleta de dados da segunda carta

    printf("digite o estado da segunda carta:\n");
    scanf("%s", estado);
    printf("digite o codigo da segunda carta:\n");
    scanf("%s", codigo);
    printf("digite a cidade capital da segunda carta:\n");
    scanf("%s", cidade);
    printf("digite o numero de habitantes da segunda carta:\n");
    scanf("%d", &populacao);
    printf("digite o pib da segunda carta:\n");
    scanf("%f", &pib);
    printf("digite o numero de pontos turisticos da segunda carta:\n");
    scanf("%d", &pontosTuristicos);
    printf("digite a area em m² da cidade da segunda carta:\n");
    scanf("%f", &area);
   
    densidade = (float) area / populacao;
    pib_per_capita = (float) pib / populacao;
    // exibe os dados da segunda carta

    printf("dados da segunda carta:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Numero de habitantes: %d\n", populacao);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos);
    printf("Area em m²: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Densidade populacional é: %.2f\n", densidade);
    printf("O PIB per capita é: %.2f\n", pib_per_capita);
    
    return 0;
}