#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main () {
    char estado1 [20];
    char estado2 [20];
    char codigo1 [20];
    char codigo2 [20];
    char cidade1 [25];
    char cidade2 [25];
    unsigned long int populacao1;
    unsigned long int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int NumeroPontosTuristicos1;
    int NumeroPontosTuristicos2;
    float SuperPoder1;
    float SuperPoder2;

    printf ("*** Desafio Super Trunfo - Países *** \n");

    //Dados Carta 1
    printf("Carta 1 \n");

    printf("Digite o Estado:");
    scanf("%s", &estado1);

    printf("Digite o Codigo:");
    scanf("%s", &codigo1);

    printf("Digite a Cidade:");
    scanf("%s", &cidade1);

    printf("Digite a População:");
    scanf("%lu", &populacao1);

    printf("Digite a Área:");
    scanf("%f", &area1);

    printf("Digite o PIB:");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos:");
    scanf("%d", &NumeroPontosTuristicos1);

    //Cálculo da densidade populacional e PIB per capita
    float densidadePopulacional1 = (float) populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    
    //Cálculo do Super Poder
    SuperPoder1 = (float) populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidadePopulacional1) + (float) NumeroPontosTuristicos1;

    //Dados Carta 2
    printf("Carta 2 \n");

    printf("Digite o Estado:");
    scanf("%s", &estado2);

    printf("Digite o Codigo:");
    scanf("%s", &codigo2);

    printf("Digite a Cidade:");
    scanf("%s", &cidade2);

    printf("Digite a População:");
    scanf("%lu", &populacao2);

    printf("Digite a Área:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos:");
    scanf("%d", &NumeroPontosTuristicos2);

    //Cálculo da densidade populacional e PIB per capita
    float densidadePopulacional2 = (float) populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    //Cálculo do Super Poder
    SuperPoder2 = (float) populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidadePopulacional2) + (float) NumeroPontosTuristicos2;



    //Comparando as Cartas

    printf ("Comparando as Cartas:\n");

    printf ("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf ("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf ("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf ("Número de Pontos Turísticos: Carta %d venceu (%d)\n", (NumeroPontosTuristicos1 > NumeroPontosTuristicos2) ? 1 : 2, (NumeroPontosTuristicos1 > NumeroPontosTuristicos2));
    printf ("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 > densidadePopulacional2) ? 1 : 2, (densidadePopulacional1 > densidadePopulacional2));
    printf ("PIB per Capta: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2));
    printf ("Super Poder: Carta %d venceu (%d)\n", (SuperPoder1 > SuperPoder2) ? 1 : 2, (SuperPoder1 > SuperPoder2));



    return 0;

}
