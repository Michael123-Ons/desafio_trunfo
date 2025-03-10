#include <stdio.h>

//Definição da estrutura carta
struct Carta{
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
int main(){
    //Criando a primeira carta
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

    //Criando a segunda carta
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

    // Calculando os valores carta1
carta1.densidade = (float)carta1.populacao / carta1.area;
carta1.percapita = carta1.pib / carta1.populacao;
carta1.superPoder = carta1.populacao + carta1.area + carta1.pib + carta1.turisticos + carta1.percapita + (1 / carta1.densidade);

//calculando os valores carta2
carta2.densidade = (float)carta2.populacao / carta2.area;
carta2.percapita = carta2.pib / carta2.populacao;
carta2.superPoder = carta2.populacao + carta2.area + carta2.pib + carta2.turisticos + carta2.percapita + (1 / carta2.densidade);

//Exibindo dados das cartas
printf("=== Carta 1 ===\n");
printf("Código: %s\n", carta1.codigo);
printf("Cidade: %s\n", carta1.cidade);
printf("Estado: %s\n", carta1.estado);
printf("População: %lu\n", carta1.populacao); 
printf("Área: %.2f km²\n", carta1.area);
printf("PIB: %.2f\n", carta1.pib);
printf("Pontos turísticos: %d\n", carta1.turisticos);
printf("Densidade populacional: %.2f hab/km²\n", carta1.densidade);
printf("PIB per capita: %.2f\n", carta1.percapita);
printf("Super Poder: %.2f\n\n", carta1.superPoder); 


printf("=== Carta 2 ===\n");
printf("Código: %s\n", carta2.codigo);
printf("Cidade: %s\n", carta2.cidade);
printf("Estado: %s\n", carta2.estado);
printf("População: %lu\n", carta2.populacao); 
printf("Área: %.2f km²\n", carta2.area);
printf("PIB: %.2f\n", carta2.pib);
printf("Pontos turísticos: %d\n", carta2.turisticos);
printf("Densidade populacional: %.2f hab/km²\n", carta2.densidade);
printf("PIB per capita: %.2f\n", carta2.percapita);
printf("Super Poder: %.2f\n", carta2.superPoder); 


//Comparando as cartas
printf("\n=== Comparação de Cartas ===\n");

// População (maior vence)
printf("População: Carta %d venceu (%d)\n", carta1.populacao > carta2.populacao ? 1 : 2, carta1.populacao > carta2.populacao);

// Área (maior vence)
printf("Área: Carta %d venceu (%d)\n", carta1.area > carta2.area ? 1 : 2, carta1.area > carta2.area);

// PIB (maior vence)
printf("PIB: Carta %d venceu (%d)\n", carta1.pib > carta2.pib ? 1 : 2, carta1.pib > carta2.pib);

// Pontos Turísticos (maior vence)
printf("Pontos Turísticos: Carta %d venceu (%d)\n", carta1.turisticos > carta2.turisticos ? 1 : 2, carta1.turisticos > carta2.turisticos);

// Densidade Populacional (menor vence)
printf("Densidade Populacional: Carta %d venceu (%d)\n", carta1.densidade < carta2.densidade ? 1 : 2, carta1.densidade < carta2.densidade);

// PIB per Capita (maior vence)
printf("PIB per Capita: Carta %d venceu (%d)\n", carta1.percapita > carta2.percapita ? 1 : 2, carta1.percapita > carta2.percapita);

// Super Poder (maior vence)
printf("Super Poder: Carta %d venceu (%d)\n", carta1.superPoder > carta2.superPoder ? 1 : 2, carta1.superPoder > carta2.superPoder);


return 0;

}