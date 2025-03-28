#include <stdio.h>


int main() {

    char estado = 'A', estado2 = 'B'; // uma letra de A a H
    char codigo[10] = "A01", codigo2[10] = "B02"; // letra do estado seguido de uma número
    char nome[20] = "São_Paulo", nome2[20] = "Rio_de_Janeiro"; // nome da cidade
    int  populacao = 12325000, populacao2 = 6748000;
    float area = 1521.11, area2 = 1200.25; // área da cidade em km²
    double pib = 699280000000, pib2 = 300500000000;
    int pontos_turisticos = 50, pontos_turisticos2 = 30; // número de pontos turísticos
    float densidade1, densidade2;
    float pibper1, pibper2;
    float superpoder1, superpoder2;

    pibper1 = (float) pib / populacao; 
    densidade1 = (float) populacao / area;

    superpoder1 = (float) populacao + area + pib + pontos_turisticos + pibper1 + 1/densidade1;

    printf("Carta 01 \n");

    printf("Estado: %c\n", estado);
    
    printf("Código: %s\n", codigo);
    
    printf("Nome da cidade: %s\n", nome);
    
    printf("População: %d\n", populacao);

    printf("Área(km²): %.2f\n", area);
    
    printf("PIB: %.0lf\n", pib);
    
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
   
    printf("Densidade populacional: %.2f \n", densidade1);
    
    printf( "PIB per capita: %.2f \n", pibper1);

    printf("O poder da carta 01 é: %.0f\n", superpoder1);

    pibper2 = (float) pib2 / populacao2;
    densidade2 = (float) populacao2 / area2;

    superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pibper2 + 1/densidade2;

    printf("Carta 02 \n");

    printf("Estado: %c\n", estado2);
    
    printf("Código: %s\n", codigo2);
    
    printf("Nome da cidade: %s\n", nome2);
    
    printf("População: %d\n", populacao2);

    printf("Área(km²): %.2f\n", area2);
    
    printf("PIB: %.0lf\n", pib2);
    
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
   
    printf("Densidade populacional: %.2f \n", densidade2);
    
    printf( "PIB per capita: %.2f \n", pibper2);

    printf("O poder da carta 02 é: %.0f\n", superpoder2);

    printf("### ESCOLHA UM ATRIBUTO ###\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. PIB per capita\n" );
    printf("6. Densidade populacional\n");
    printf("7. Poder\n");
    int escolha;
    scanf("%d", &escolha);
    

    printf("***Batalha***\n");

    switch (escolha)
    {
    case 1:
    if (populacao > populacao2)
    {
        printf("População: A carta 01 venceu!\n");
    } else if (populacao < populacao2)
    {
        printf("População: A carta 02 venceu!\n ");
    } else
    {
        printf("População: Empate!\n");
    }
        break;
    
    case 2:
    if (area > area2)
    {
        printf("Área: A carta 01 venceu!\n");
    } else if(area < area2)
    {
        printf("Área: A carta 02 venceu!\n");
    } else
    {
        printf("Área: Empate!\n");
    }
        break;
    case 3:
    if (pib > pib2)
    {
        printf("PIB: A carta 01 venceu!\n");
    } else if (pib < pib2)
    {
        printf("PIB: A carta 02 venceu!\n");
    } else
    {
        printf("PIB: Empate!\n");
    }
        break;
    case 4:
    if (pontos_turisticos > pontos_turisticos2)
    {
        printf("Número de pontos turísticos: A carta 01 venceu!\n");
    } else if(pontos_turisticos < pontos_turisticos2)
    {
        printf("Número de pontos turísticos: A carta 02 venceu!\n");
    } else
    {
        printf("Número de pontos turísticos: Empate!\n");
    }
        break;
    case 5:
    if (pibper1 > pibper2)
    {
        printf("Pib per capita: A carta 01 venceu!\n");
    } else if(pibper1 < pibper2)
    {
        printf("Pib per capita: A carta 02 venceu!\n");
    } else
    {
        printf("Pib per capita: Empate!\n");
    }
        break;
    case 6:
    if (densidade1 < densidade2)
    {
        printf("Densidade demográfica: A carta 01 venceu!\n");
    } else if(densidade1 > densidade2)
    {
        printf("Densidade demográfica: A carta 02 venceu!\n");
    } else
    {
        printf("Densidade demográfica: Empate!\n");
    }
        break;
    case 7:
    if (superpoder1 > superpoder2)
    {
        printf("Poder: A carta 01 venceu!\n");
    } else if(superpoder1 < superpoder2)
    {
        printf("Poder: A carta 02 venceu!\n");
    } else
    {
        printf("Poder: Empate!\n");
    }
        break;
    default:
        printf("Opção inválida!\n");

        break;
    }

    

    return 0;    
}
