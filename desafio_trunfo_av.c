#include <stdio.h>

// Definição da estrutura Carta
struct Carta {
    char codigo[4];  // Código como string (3 caracteres + \0)
    char cidade[50]; // Nome da cidade como string
    char estado[50]; // Nome do estado como string
    int populacao;   // População
    float area;      // Área em km²
    float pib;       // PIB em reais
    int turisticos;  // Número de pontos turísticos
    float densidade; // Densidade populacional (calculada)
    float percapita; // PIB per capita (calculado)
};

int main() {
    // Criando a primeira carta 
    struct Carta carta1 = {
        "A01",               // Código
        "Florianópolis",     // Cidade
        "Santa Catarina",    // Estado
        537210,              // População
        675.41,              // Área
        2100000000000.0,     // PIB (usar .0 para garantir que é float)
        38,                  // Pontos turísticos
        0,                   // Será calculado depois
        0                    // Será calculado depois
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
        0
    };

    // Calculando os valores carta1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.percapita = carta1.pib / carta1.populacao;

    //calculando os valores carta2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.percapita = carta2.pib / carta2.populacao;

    // Exibindo os dados das cartas 
    printf("=== Carta 1 ===\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Estado: %s\n", carta1.estado);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per capita: %.2f\n\n", carta1.percapita);

    printf("=== Carta 2 ===\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Estado: %s\n", carta2.estado);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per capita: %.2f\n", carta2.percapita);

    return 0;
}

