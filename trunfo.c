//arquivo cabeçalho
#include <stdio.h>

//definição da estrutura
typedef struct {
    char codigo[40];
    char cidade[50];
    char estado[50];
    int populacao;
    int turisticos;
    double km;
    long long pib;
} Carta;

//função que retorna uma carta inicializada
Carta criarCarta1(){
    Carta c = {
        "A01",
        "Florianópolis",
        "Santa Catarina",
        492977,
        38,
        675.41,
        210000000000LL
    }; 
    return c;
}

//função para criar a segunda carta
Carta criarCarta2(){
    Carta c = {
        "B02",
        "Curitiba",
        "Paraná",
        1963726,
        45,
        435.04,
        129000000000LL
    };
    return c;
}

int main(){
    //criando as cartas com os valores já definidos
    Carta carta1 = criarCarta1();
    Carta carta2 = criarCarta2();

    //exibição dos dados da carta 1
    printf("\n--- Carta1 ---\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Estado: %s\n", carta1.estado);
    printf("População: %d\n", carta1.populacao);
    printf("Pontos Turísticos: %d\n", carta1.turisticos);
    printf("Área: %.2lf km²\n", carta1.km);
    printf("PIB: %lld\n", carta1.pib);

    //exibindo dados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Estado: %s\n", carta2.estado);
    printf("População: %d\n", carta2.populacao);
    printf("Pontos Turísticos: %d\n", carta2.turisticos);
    printf("Área: %.2lf km²\n", carta2.km);
    printf("PIB: %lld\n", carta2.pib);

    //comparando as cartas
    int escolha;

    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Pontos Turísticos\n");
    printf("3 - Área (km²)\n");
    printf("4 - PIB\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Comparação simples
    if (escolha == 1) {
        printf("\nComparando População!\n");
        printf("%s: %d habitantes\n", carta1.cidade, carta1.populacao);
        printf("%s: %d habitantes\n", carta2.cidade, carta2.populacao);
        if (carta1.populacao > carta2.populacao)
            printf("\n Vencedor: %s\n", carta1.cidade);
        else if (carta2.populacao > carta1.populacao)
            printf("\n Vencedor: %s\n", carta2.cidade);
        else
            printf("\n Empate!\n");
    } else if (escolha == 2) {
        printf("\nComparando Pontos Turísticos!\n");
        printf("%s: %d pontos turísticos\n", carta1.cidade, carta1.turisticos);
        printf("%s: %d pontos turísticos\n", carta2.cidade, carta2.turisticos);
        if (carta1.turisticos > carta2.turisticos)
            printf("\n Vencedor: %s\n", carta1.cidade);
        else if (carta2.turisticos > carta1.turisticos)
            printf("\n Vencedor: %s\n", carta2.cidade);
        else
            printf("\n Empate!\n");
    } else if (escolha == 3) {
        printf("\nComparando Área (km²)!\n");
        printf("%s: %.2lf km²\n", carta1.cidade, carta1.km);
        printf("%s: %.2lf km²\n", carta2.cidade, carta2.km);
        if (carta1.km > carta2.km)
            printf("\n Vencedor: %s\n", carta1.cidade);
        else if (carta2.km > carta1.km)
            printf("\n Vencedor: %s\n", carta2.cidade);
        else
            printf("\n Empate!\n");
    } else if (escolha == 4) {
        printf("\nComparando PIB!\n");
        printf("%s: %lld\n", carta1.cidade, carta1.pib);
        printf("%s: %lld\n", carta2.cidade, carta2.pib);
        if (carta1.pib > carta2.pib)
            printf("\n Vencedor: %s\n", carta1.cidade);
        else if (carta2.pib > carta1.pib)
            printf("\n Vencedor: %s\n", carta2.cidade);
        else
            printf("\n Empate!\n");
    } else {
        printf("\nOpção inválida! Escolha um número de 1 a 4.\n");
    }

    return 0;
}