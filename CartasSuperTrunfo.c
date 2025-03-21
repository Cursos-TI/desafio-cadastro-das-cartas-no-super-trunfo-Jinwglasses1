#include <stdio.h>


int main() {

    char estado; // uma letra de A a H
    char codigo[10]; // letra do estado seguido de uma número
    char nome[10]; // nome da cidade
    int populacao;
    float area; // área da cidade em km²
    float pib;
    int pontos_turisticos; // número de pontos turísticos

    printf("Estado:");
    scanf("%c", &estado);

    printf("Código:");
    scanf("%s", codigo);

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






    

    return 0;
}
