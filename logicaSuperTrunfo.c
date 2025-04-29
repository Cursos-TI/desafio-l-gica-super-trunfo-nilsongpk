#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis
    char carta1Codigo[10], carta2Codigo[10];
    char carta1Estado[3], carta2Estado[3];
    char carta1Cidade[50], carta2Cidade[50];
    int carta1Populacao, carta2Populacao;
    float carta1Area, carta2Area;
    float carta1Pib, carta2Pib;
    int carta1Turisticos, carta2Turisticos;
    float carta1Densidade, carta2Densidade;
    float carta1Percapita, carta2Percapita;

    // Cadastro da Carta 1
    printf("======= Cadastro da Carta 1 =======\n");
    printf("Digite o Código da Carta: ");
    scanf("%s", carta1Codigo);
    printf("Digite o Estado: ");
    scanf("%s", carta1Estado);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta1Cidade);
    printf("Digite a População: ");
    scanf("%d", &carta1Populacao);
    printf("Digite a Área (em km²): ");
    scanf("%f", &carta1Area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1Pib);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta1Turisticos);

    // Cadastro da Carta 2
    printf("\n======= Cadastro da Carta 2 =======\n");
    printf("Digite o Código da Carta: ");
    scanf("%s", carta2Codigo);
    printf("Digite o Estado: ");
    scanf("%s", carta2Estado);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", carta2Cidade);
    printf("Digite a População: ");
    scanf("%d", &carta2Populacao);
    printf("Digite a Área (em km²): ");
    scanf("%f", &carta2Area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2Pib);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &carta2Turisticos);

    carta1Densidade = carta1Populacao / carta1Area;
    carta2Densidade = carta2Populacao / carta2Area;
    carta1Percapita = (carta1Pib * 1000000000) / carta1Populacao;
    carta2Percapita = (carta2Pib * 1000000000) / carta2Populacao;

    printf("\n====== COMPARAÇÃO DE CARTAS ======\n");
    printf("Atributo escolhido: PIB per capita\n");

    printf("Carta 1 (%s - %s): R$ %.2f\n", carta1Cidade, carta1Estado, carta1Percapita);
    printf("Carta 2 (%s - %s): R$ %.2f\n", carta2Cidade, carta2Estado, carta2Percapita);

    if (carta1Percapita > carta2Percapita) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1Cidade);
    } else if (carta1Percapita < carta2Percapita) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2Cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
