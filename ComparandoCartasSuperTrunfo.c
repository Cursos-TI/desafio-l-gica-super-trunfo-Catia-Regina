#include <stdio.h>
#include <stdlib.h>

int main() {
    int carta1, carta2;
    char estado1[50], estado2[50];
    char cartaCodigo1[50], cartaCodigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float PIB1, PIB2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoderCarta1, superPoderCarta2;
    char tipoDeComparacao;

    printf("CARTA 01 \n");

    printf("Qual o estado? \n");
    scanf("%s", estado1);

    printf("Qual o codigo da carta? \n");
    scanf("%s", cartaCodigo1);

    printf("Qual a cidade? \n");
    scanf("%s", cidade1);

    printf("Qual a população? \n");
    scanf("%d", &populacao1);

    printf("Qual a area em KM²? \n");
    scanf("%f", &area1);

    printf("Qual o PIB? \n");
    scanf("%f", &PIB1);

    printf("Qual o número de pontos turísticos? \n");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = PIB1 / populacao1;
    superPoderCarta1 = populacao1 + area1 + PIB1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    printf("\nCARTA 01\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", cartaCodigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em KM²: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super poder: %.2f\n", superPoderCarta1);

    printf("\n__________________________\n");

    printf("\nCARTA 02 \n");

    printf("Qual o estado? \n");
    scanf("%s", estado2);

    printf("Qual o codigo da carta? \n");
    scanf("%s", cartaCodigo2);

    printf("Qual a cidade? \n");
    scanf("%s", cidade2);

    printf("Qual a população? \n");
    scanf("%d", &populacao2);

    printf("Qual a area em KM²? \n");
    scanf("%f", &area2);

    printf("Qual o PIB? \n");
    scanf("%f", &PIB2);

    printf("Qual o número de pontos turísticos? \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = PIB2 / populacao2;
    superPoderCarta2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    printf("\nCARTA 02\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", cartaCodigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em KM²: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super poder: %.2f\n", superPoderCarta2);
    
    printf("\n__________________________\n");
    
    getchar();
    printf("\nVamos comparar!\n");
    printf("Escolha o atributo para comparar:\n");
    printf("P. População\n");
    printf("A. Área\n");
    printf("Digite sua escolha: ");
    scanf("%c", &tipoDeComparacao);

    switch (tipoDeComparacao) {
        case 'P':
        case 'p':
            printf("Você escolheu população!\n\n");
            if (populacao1 > populacao2)
                printf("Carta 1 venceu!\n\n");
            else if (populacao2 > populacao1)
                printf("Carta 2 venceu!\n\n");
            else
                printf("Empate!\n\n");
            break;

        case 'A':
        case 'a':
            printf("Você escolheu área!\n\n");
            if (area1 > area2)
                printf("Carta 1 venceu!\n\n");
            else if (area2 > area1)
                printf("Carta 2 venceu!\n\n");
            else
                printf("Empate!\n\n");
            break;

        default:
            printf("Opção inválida!\n\n");
            break;
    }

    return 0;
}
