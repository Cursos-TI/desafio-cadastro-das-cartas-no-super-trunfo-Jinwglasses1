#include <stdio.h>


int main() {

    char estado, estado2; // uma letra de A a H
    char codigo[10], codigo2[10]; // letra do estado seguido de uma número
    char nome[10], nome2[10]; // nome da cidade
    int  populacao, populacao2;
    float area, area2; // área da cidade em km²
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2; // número de pontos turísticos
    float densidade1, densidade2;
    float pibper1, pibper2;
    float superpoder1, superpoder2;


    printf("Carta 01 \n");

    printf("Estado:");
    scanf(" %c", &estado); // apenas uma letra

    printf("Código:");
    scanf(" %s", codigo);

    printf("Nome da cidade:");
    scanf("%s", nome);

    printf("População:");
    scanf("%d", &populacao);

    printf("Área(km²):");
    scanf("%f", &area);

    printf("PIB:");
    scanf("%f", &pib);

    printf("Número de pontos turísticos:");
    scanf("%d", &pontos_turisticos);

    pibper1 = (float) pib / populacao; 
    densidade1 = (float) populacao / area;

    printf("Densidade populacional: %.2f \n", densidade1);
    
    printf( "PIB per capita: %.2f \n", pibper1);

    superpoder1 = (float) populacao + area + pib + pontos_turisticos + pibper1 + 1/densidade1;
    
    printf("O poder da carta 01 é: %.0f\n", superpoder1);

    printf("Carta 02 \n");

    printf("Estado: ");
    scanf(" %c", &estado2); // apenas uma letra

    printf("Código: ");
    scanf(" %s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área(km²): ");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos:");
    scanf(" %d", &pontos_turisticos2);

    pibper2 = (float) pib2 / populacao2;
    densidade2 = (float) populacao2 / area2;

    printf("Densidade populacional: %.2f \n", densidade2);
    
    printf( "PIB per capita: %.2f \n", pibper2);

    superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pibper2 + 1/densidade2;

    printf("O poder da carta 02 é: %.0f\n", superpoder2);


    printf("***Batalha***\n");

    if (populacao > populacao2)
    {
        printf("População: A carta 01 venceu!\n");
    } else
    {
        printf("População: A carta 02 venceu!\n");
    }

    if (area > area2)
    {
        printf("Área: A carta 01 venceu!\n");
    } else
    {
        printf("Área: A carta 02 venceu!\n");
    }

    if (pib > pib2)
    {
        printf("PIB: A carta 01 venceu!\n");
    } else
    {
        printf("PIB: A carta 02 venceu!\n");
    }
    
    if (pontos_turisticos > pontos_turisticos2)
    {
        printf("Número de pontos turísticos: A carta 01 venceu!\n");
    } else
    {
        printf("Número de pontos turísticos: A carta 02 venceu!\n");
    }
    
    if (pibper1 > pibper2)
    {
        printf("Pib per capita: A carta 01 venceu!\n");
    } else
    {
        printf("Pib per capita: A carta 02 venceu!\n");
    }

    if (densidade1 < densidade2)
    {
        printf("Densidade demográfica: A carta 01 venceu!\n");
    } else
    {
        printf("Densidade demográfica: A carta 02 venceu!\n");
    }
    
    if (superpoder1 > superpoder2)
    {
        printf("Poder: A carta 01 venceu!\n");
    } else
    {
        printf("Poder: A carta 02 venceu!\n");
    }

    

     return 0;
}
