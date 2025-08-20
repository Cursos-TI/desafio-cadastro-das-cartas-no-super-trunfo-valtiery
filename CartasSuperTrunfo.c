#include <stdio.h>

int main(){
    char estado[20];
    char estado_2[20];
    char cidade[20];
    char capital[20];
    int populacao;
    int populacao_2;
    int codigo;
    int codigo_2;
    float area;
    float area_2;
    float pib;
    float pib_2;
    int turisticos;
    int turisticos_2;

    printf("Super Trunfo\n");

    printf("Escolha seu Estado de 'A' até 'H' Carta 1: %s\n", estado);
    scanf("%s", &estado);
    printf("Escolha seu Estado de 'A' até 'H' Carta 2: %s\n", estado_2);
    scanf("%s", &estado_2);

    printf("Escolha um numero de '01' a '04' Carta 1:  %d\n", codigo);
    scanf("%d", &codigo);
    printf("Escolha um numero de '01' a '04' Carta 2:  %d\n", codigo_2);
    scanf("%d", &codigo_2);

    printf("Digite o nome da sua cidade Carta 1: %s\n", cidade);
    scanf("%s", &cidade);
    printf("Digite o nome da sua cidade Carta 2: %s\n", capital);
    scanf("%s", &capital);

    printf("Digite o numero de Habitantes da sua cidade Carta 1:%d\n", populacao);
    scanf("%d", &populacao);
    printf("Digite o numero de Habitantes da sua cidade Carta 2: %da\n", populacao_2);
    scanf("%d", &populacao_2);

    printf("Digite a área da cidade Carta 1: %f\n", &area);
    scanf("%f", &area);
    printf("Digite a área da cidade Carta 2: %f\n", &area_2);
    scanf("%f", &area_2);

    printf("Digite o PIB Carta 1: %f\n", pib);
    scanf("%f", &pib);
    printf("Digite o PIB Carta 2: %f\n", pib_2);
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos Turísticos Carta 1: %d\n", turisticos);
    scanf("%d", &turisticos);
    printf("Digite a quantidade de pontos Turísticos Carta 2: %d\n", turisticos_2);
    scanf("%d", &turisticos_2);

    printf("-------------------------------------------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s0%d\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turisticos: %d\n", turisticos);

    printf("-------------------------------------------------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s0%d\n", estado_2, codigo_2);
    printf("Nome da Cidade: %s\n", capital);
    printf("População: %d\n", populacao_2);
    printf("Área: %f km²\n", area_2);
    printf("PIB: %f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turisticos: %d\n", turisticos_2);

    return 0;

}
