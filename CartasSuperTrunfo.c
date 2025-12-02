
#include <stdio.h>
#include <string.h>

struct Carta {
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;

    printf("= Cadastro da Carta 1 =\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta1.cidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);


    printf("\n= Cadastro da Carta 2 =\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da Carta (ex: B03): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", carta2.cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);


    printf("\n\n= Dados da Carta 1 =\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n= Dados da Carta 2 =\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    // = DETERMINAR A CARTA VENCEDORA =
    // Critério escolhidos: maior população

    printf("\n=== Resultado ===\n");

    if (carta1.populacao > carta2.populacao) {
        printf("A carta vencedora é: %s (Cidade: %s)\n", carta1.codigo, carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("A carta vencedora é: %s (Cidade: %s)\n", carta2.codigo, carta2.cidade);
    } else {
        printf("Empate! As duas cidades têm a mesma população.\n");
    }

    return 0;
}