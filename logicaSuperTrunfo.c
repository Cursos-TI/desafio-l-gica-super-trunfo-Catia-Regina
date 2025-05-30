#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado[50];
    char carta[50];
    char cidade[50];
    int populacao, pontosturistico;
    float area;
    float PIB;
    float Densidadepopulacional;
    float Pibpercapita;
    float SuperPodercarta01, SuperPodercarta02;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    
    printf ("CARTA 01 \n");

    printf ("Qual o estado? \n");
    scanf ("%s", &estado);

    printf ("Qual o codigo da carta? \n");
    scanf ("%s", &carta);

    printf ("Qual a cidade? \n");
    scanf ("%s", &cidade);

    printf ("Qual a população? \n");
    scanf ("%d", &populacao);

    printf ("Qual a area em KM²? \n");
    scanf ("%f", &area);

    printf ("Qual o PIB? \n");
    scanf ("%f", &PIB);

    printf ("Qual o numero de pontos turistico? \n");
    scanf ("%d", &pontosturistico);

    Densidadepopulacional = populacao / area;
    
    Pibpercapita = PIB / populacao;

    SuperPodercarta01 = populacao + area + PIB + pontosturistico + Pibpercapita + (1/Densidadepopulacional);

    printf ("CARTA 01 \n");
    printf ("estado: %S \n", estado);
    printf ("Codigo da carta: %s \n", carta);
    printf ("cidade: %s \n", cidade);
    printf ("populacao: %d \n", populacao);
    printf ("Area em KM²: %f \n", area);
    printf ("PIB: %f \n", PIB);
    printf ("pontos turisticos: %d \n", pontosturistico);
    printf ("Densidade populacional é: %.2f \n", Densidadepopulacional);
    printf ("Pib per capita é: %.2f \n", Pibpercapita);
    printf ("Super poder = %f\n", SuperPodercarta01);

    
    printf ("__________________________ \n");


    printf ("CARTA 02 \n");

    printf ("Qual o estado? \n");
    scanf ("%s", &estado);

    printf ("Qual o codigo da carta? \n");
    scanf ("%s", &carta);

    printf ("Qual a cidade? \n");
    scanf ("%s", &cidade);

    printf ("Qual a população? \n");
    scanf ("%d", &populacao);

    printf ("Qual a area em KM²? \n");
    scanf ("%f", &area);

    printf ("Qual o PIB? \n");
    scanf ("%f", &PIB);

    printf ("Qual o numero de pontos turistico? \n");
    scanf ("%d", &pontosturistico);

    Densidadepopulacional = populacao / area;
    
    Pibpercapita = PIB / populacao;

    SuperPodercarta02 = populacao + area + PIB + pontosturistico + Pibpercapita + (1/Densidadepopulacional);


    printf ("CARTA 02 \n");
    printf ("estado: %S \n", estado);
    printf ("Codigo da carta: %s \n", carta);
    printf ("cidade: %s \n", cidade);
    printf ("populacao: %d \n", populacao);
    printf ("Area em KM²: %f \n", area);
    printf ("PIB: %f \n", PIB);
    printf ("pontos turisticos: %d \n", pontosturistico);
    printf ("Densidade populacional é: %.2f \n", Densidadepopulacional);
    printf ("Pib per capita é: %.2f \n", Pibpercapita);
    printf ("Super poder = %f\n", SuperPodercarta02);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    if (SuperPodercarta01 > SuperPodercarta02)
    {
        printf("Carta 1 venceu! \n");
    }else if (SuperPodercarta01 < SuperPodercarta02)
    {
        printf("Carta 2 venceu!\n");
    }else{
        printf("Houve um empate! \n");
    }
    
    

    return 0;
}
