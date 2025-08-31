#include <stdio.h>

//função para comparar cartas sem ter que ficar digitando calculos por extenso

const char* compara_cartas(float a, float b){
    if (a > b){
        return "Carta 1 venceu";
    }
    else if (a == b){
        return "As cartas empataram";
    }
    else {
        return "Carta 2 venceu";
    }
}

int main(){

    // variaveis

    unsigned int populacao, populacao1, pontos_turisticos, pontos_turisticos1;
    char estado[30], codigo[10], estado1[30], codigo1[10], capital[30], capital1[30];
    float pib, area, pib1, area1, densidade, densidade1, pib_per_capita, pib_per_capita1, super_trunfo, super_trunfo1;

    //coleta de dados primeira carta

    printf("Jogo Super Trunfo\n");
    printf("\n");
    printf("Insira os dados da Carta 1\n");
    printf("\n");
    printf("insira o nome do estado da primeira carta sem usar espaços:");
    scanf("%s", estado);
    printf("insira o nome da capital sem usar espaços:");
    scanf("%s", capital);
    printf("insira o codigo da primeira carta:");
    scanf("%s", codigo);
    printf("insira o pib da primeira carta:");
    scanf("%f", &pib);
    printf("insira a area da primeira carta:");
    scanf("%f", &area);
    printf("insira o numero de pontos turisticos da primeira carta:");
    scanf("%u", &pontos_turisticos);
    printf("insira a população da primeira carta:");
    scanf("%u", &populacao);

    // calculos dos primeiros dados

    densidade = (float) area / populacao;
    pib_per_capita = (float) pib / populacao;
    super_trunfo = (float) area + populacao + pib + pontos_turisticos + pib_per_capita - densidade;
    
    //exibe os dados da primeira carta

    printf("\n");
    printf("Dados da carta 1:\n");
    printf("\n");
    printf("Estado: %s\n", estado);
    printf("Capital: %s\n", capital);
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %u\n", populacao);
    printf("Pontos turisticos: %u\n", pontos_turisticos);
    printf("Area: %.2f\n", area);
    printf("Pib: %.2f\n", pib);
    printf("Densidade: %.2f\n", densidade);
    printf("pib per capita: %.2f\n", pib_per_capita);
    printf("super trunfo: %.2f\n", super_trunfo);
    printf("\n");
    printf("\n");

    //coleta de dados segunda carta

    printf("Insira os dados da Carta 2\n");
    printf("\n");
    printf("insira o nome do estado da segunda carta sem usar espaços:");
    scanf("%s", estado1);
    printf("insira o nome da capital sem usar espaços:");
    scanf("%s", capital1);
    printf("insira o codigo da segunda carta:");
    scanf("%s", codigo1);
    printf("insira o pib da segunda carta:");
    scanf("%f", &pib1);
    printf("insira a area da segunda carta:");
    scanf("%f", &area1);
    printf("insira o numero de pontos turisticos da segunda carta:");
    scanf("%u", &pontos_turisticos1);
    printf("insira a população da segunda carta:");
    scanf("%u", &populacao1);

    //calculos segunda carta

    densidade1 = (float) area1 / populacao1;
    pib_per_capita1 = (float) pib1 / populacao1;
    super_trunfo1 = (float) area1 + populacao1 + pib1 + pontos_turisticos1 + pib_per_capita1 - densidade1;
    
    //exibe os dados da segunda carta

    printf("\n");
    printf("Dados da carta 2:\n");
    printf("\n");
    printf("Estado: %s\n", estado1);
    printf("Capital: %s\n", capital1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %u\n", populacao1);
    printf("Pontos turisticos: %u\n", pontos_turisticos1);
    printf("Area: %.2f\n", area1);
    printf("Pib: %.2f\n", pib1);
    printf("Densidade: %.2f\n", densidade1);
    printf("pib per capita: %.2f\n", pib_per_capita1);
    printf("super trunfo: %.2f\n", super_trunfo1);
    printf("\n");
    printf("\n");

    //comparacao dos dados das cartas
    printf("Resultado das comparações\n");
    printf("\n");
    printf("\n");

    printf ("população: %s\n", compara_cartas(populacao,populacao1));
    
    printf ("pib: %s\n", compara_cartas(pib,pib1));
    
    printf ("area: %s\n", compara_cartas(area,area1));
    
    printf ("pontos turisticos: %s\n", compara_cartas(pontos_turisticos,pontos_turisticos1));

    printf ("pib per capita: %s\n", compara_cartas(pib_per_capita,pib_per_capita1));

    // logica para comparar a densidade que quanto menor melhor

    if (densidade > densidade1){
        printf("densidade: Carta 2 venceu\n");
    }
    else if (densidade == densidade1){
        printf("Densidade: As cartas empataram\n");
    }
    else{
        printf("Densidade: Carta 1 venceu\n");
    }

    // compara e imprime quem ganhou o super trunfo

    printf ("super Trunfo: %s\n", compara_cartas(super_trunfo,super_trunfo1));

    return 0;
}