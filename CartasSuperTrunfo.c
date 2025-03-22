#include <stdio.h>


int main() {

    char estado, estado2; // uma letra de A a H
    char codigo[10], codigo2[10]; // letra do estado seguido de uma número
    char nome[10], nome2[10]; // nome da cidade
    int populacao, populacao2;
    float area, area2; // área da cidade em km²
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2; // número de pontos turísticos
    float densidade1, densidade2;
    float pibper1, pibper2;

    pibper1 = pib / populacao; 
    densidade1 = populacao / area;

    pibper2 = pib2 / populacao2;
    densidade2 = populacao2 / area2;

    printf("Carta 01 \n");

    printf("Estado:");
    scanf(" %c", &estado);

    printf("Código:");
    scanf(" %s", codigo);

    printf("Nome da cidade:");
    scanf("%s", nome);

    printf("População:");
    scanf("%d", &populacao);

    printf("Área:");
    scanf("%f", &area);

    printf("PIB:");
    scanf("%f", &pib);

    printf("Número de pontos turísticos:");
    scanf("%d", &pontos_turisticos);

    printf("Densidade populacional: %.2f \n", densidade1);
    
    printf( "PIB per capita: %.2f \n", pibper1);

    printf("Carta 02 \n");

    printf("Estado:");
    scanf(" %c",&estado2);

    printf("Código: ");
    scanf(" %s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %s", nome2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB:");
    scanf(" %f", &pib2);

    printf("Número de pontos turísticos:");
    scanf(" %d", &pontos_turisticos2);

    printf("Densidade populacional: %.2f \n", densidade2);
    
    printf( "PIB per capita: %.2f \n", pibper2);






    

    return 0;
}
