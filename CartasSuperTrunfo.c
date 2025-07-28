#include <stdio.h>

struct Carta {
    char estado;
    char codigo[4]; // Ex: "A01"
    char nomeCidade[100];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta cartas[2];

    for (int i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);

        printf("Estado (A-H): ");
        scanf(" %c", &cartas[i].estado);

        printf("Código da Carta (ex: A01): ");
        scanf(" %3s", cartas[i].codigo);

        printf("Nome da Cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade);

        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        printf("Área (em km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB (em bilhões de reais): ");
        scanf("%f", &cartas[i].pib);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);

        // Cálculos
        cartas[i].densidadePopulacional = cartas[i].populacao / cartas[i].area;
        cartas[i].pibPerCapita = (cartas[i].pib * 1000000000) / cartas[i].populacao; // PIB estava em bilhões
        printf("\n");
    }

    // Exibição das cartas
    for (int i = 0; i < 2; i++) {
        printf("\n==== Carta %d ====\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
        printf("Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n", cartas[i].densidadePopulacional);
        printf("PIB per Capita: R$ %.2f\n", cartas[i].pibPerCapita);
    }

    return 0;
}
