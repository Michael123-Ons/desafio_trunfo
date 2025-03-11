#include <stdio.h>

// Definição da estrutura Carta
struct Carta {
    char codigo[4];                 
    char cidade[50];
    char estado[50];
    unsigned long int populacao;
    float area;
    float pib;
    int turisticos;
    float densidade;
    float percapita;
    float superPoder;
};

int main() {
    // Criando a primeira carta
    struct Carta carta1 = {
        "A01",
        "Florianópolis", 
        "Santa Catarina",
        537210,
        675.41,
        2100000000000.0,
        38,
        0,
        0,
        0
    };

    // Criando a segunda carta
    struct Carta carta2 = {
        "B02",
        "Curitiba",
        "Paraná",
        1963726,
        435.04,
        1830000000000.0,
        50,
        0,
        0,
        0
    };

    // Calculando os valores das cartas
    carta1.densidade = (float)carta1.populacao / carta1.area;
    carta1.percapita = carta1.pib / carta1.populacao;
    carta1.superPoder = carta1.populacao + carta1.area + carta1.pib + carta1.turisticos + carta1.percapita + (1 / carta1.densidade);

    carta2.densidade = (float)carta2.populacao / carta2.area;
    carta2.percapita = carta2.pib / carta2.populacao;
    carta2.superPoder = carta2.populacao + carta2.area + carta2.pib + carta2.turisticos + carta2.percapita + (1 / carta2.densidade);

    // Exibindo menu para escolha do atributo
    int opcao;
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Comparação com base no atributo escolhido
    printf("\n=== Comparação de Cartas ===\n");

    if (opcao == 1) {
        printf("Atributo: População\n");
        printf("%s: %lu | %s: %lu\n", carta1.cidade, carta1.populacao, carta2.cidade, carta2.populacao);
        printf("Vencedor: %s\n", (carta1.populacao > carta2.populacao) ? carta1.cidade : carta2.cidade);
    } 
    else if (opcao == 2) {
        printf("Atributo: Área\n");
        printf("%s: %.2f km² | %s: %.2f km²\n", carta1.cidade, carta1.area, carta2.cidade, carta2.area);
        printf("Vencedor: %s\n", (carta1.area > carta2.area) ? carta1.cidade : carta2.cidade);
    }
    else if (opcao == 3) {
        printf("Atributo: PIB\n");
        printf("%s: %.2f | %s: %.2f\n", carta1.cidade, carta1.pib, carta2.cidade, carta2.pib);
        printf("Vencedor: %s\n", (carta1.pib > carta2.pib) ? carta1.cidade : carta2.cidade);
    }
    else if (opcao == 4) {
        printf("Atributo: Pontos Turísticos\n");
        printf("%s: %d | %s: %d\n", carta1.cidade, carta1.turisticos, carta2.cidade, carta2.turisticos);
        printf("Vencedor: %s\n", (carta1.turisticos > carta2.turisticos) ? carta1.cidade : carta2.cidade);
    }
    else if (opcao == 5) {
        printf("Atributo: Densidade Populacional (Menor vence)\n");
        printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", carta1.cidade, carta1.densidade, carta2.cidade, carta2.densidade);
        printf("Vencedor: %s\n", (carta1.densidade < carta2.densidade) ? carta1.cidade : carta2.cidade);
    }
    else if (opcao == 6) {
        printf("Atributo: PIB per Capita\n");
        printf("%s: %.2f | %s: %.2f\n", carta1.cidade, carta1.percapita, carta2.cidade, carta2.percapita);
        printf("Vencedor: %s\n", (carta1.percapita > carta2.percapita) ? carta1.cidade : carta2.cidade);
    }
    else if (opcao == 7) {
        printf("Atributo: Super Poder\n");
        printf("%s: %.2f | %s: %.2f\n", carta1.cidade, carta1.superPoder, carta2.cidade, carta2.superPoder);
        printf("Vencedor: %s\n", (carta1.superPoder > carta2.superPoder) ? carta1.cidade : carta2.cidade);
    }
    else {
        printf("Opção inválida!\n");
    }

    return 0;
}
