#include <stdio.h>

int main() {

    //variáveis para Carta 1 (c1)
    char estadoc1;
    char codigoc1[5]; 
    char cidadec1[50];
    int populacaoc1;
    float areac1;
    float pibc1;
    int pontosturc1;
    float densidadepopc1; 
    float pibpercapitac1; 

//variáveis para Carta 2 (c2)
    char estadoc2;
    char codigoc2[5];  
    char cidadec2[50];
    int populacaoc2;
    float areac2;
    float pibc2;
    int pontosturc2;
    float densidadepopc2; 
    float pibpercapitac2; 


//solicitando os dados da Carta 1 (c1):
    printf("Cadastre os dados da Carta 1:\n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estadoc1);

    printf("Digite o código para a Carta (ex: A01,B03): \n");
    scanf(" %4s", codigoc1); 

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidadec1); 

    printf("Digite a população: \n");
    scanf(" %d", &populacaoc1);
    
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &areac1);
    
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf(" %f", &pibc1);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosturc1);

// Cálculos para Carta 1 (c1)
    densidadepopc1 = populacaoc1 / areac1; // Cálculo da Densidade Populacional da Carta 1 (c1)
    pibpercapitac1 = (pibc1 * 1000000000) / populacaoc1; // Cálculo do PIB Per Capita da Carta 1 (c1)


    printf("#####################################\n");

    
//solicitando os dados da Carta 2 (c2):
    printf("Cadastre os dados da Carta 2:\n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estadoc2);

    printf("Digite o código para a Carta (ex: A01,B03): \n");
    scanf(" %4s", codigoc2); 

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidadec2); 

    printf("Digite a população: \n");
    scanf(" %d", &populacaoc2);
    
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &areac2);
    
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf(" %f", &pibc2);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("  %d", &pontosturc2);

// Cálculos para Carta 2 (c2)
    densidadepopc2 = populacaoc2 / areac2; // Cálculo da Densidade Populacional da Carta 2 (c2)
    pibpercapitac2 = (pibc2 * 1000000000) / populacaoc2; // Cálculo do PIB Per Capita da Carta 2 (c2)


    printf("#####################################\n");

    
//exibindo os dados da Carta 1 (c1)

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoc1);
    printf("Código: %s\n", codigoc1);
    printf("Nome da Cidade: %s\n", cidadec1);
    printf("População: %d\n", populacaoc1);
    printf("Área: %.2f km²\n", areac1); 
    printf("PIB: %.2f bilhões de reais\n", pibc1); 
    printf("Número de Pontos Turísticos: %d\n", pontosturc1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopc1); 
    printf("PIB per Capita: %.2f reais\n", pibpercapitac1); 

    printf("#####################################\n");
    
//exibindo os dados da Carta 2 (c2)

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoc2);
    printf("Código: %s\n", codigoc2);
    printf("Nome da Cidade: %s\n", cidadec2);
    printf("População: %d\n", populacaoc2);
    printf("Área: %.2f km²\n", areac2); 
    printf("PIB: %.2f bilhões de reais\n", pibc2); 
    printf("Número de Pontos Turísticos: %d\n", pontosturc2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopc2); 
    printf("PIB per Capita: %.2f reais\n", pibpercapitac2); 

    printf("#####################################\n");
  

// Nova Lógica do Jogo - Nível Mestre - Implementando Comparações Avançadas com Atributos Múltiplos em C

// INTERATIVIDADE COM O JOGADOR AVANÇADA

// MENU INTERATIVO - JOGADOR ESCOLHE DOIS ATRIBUTOS PARA A COMPARAÇÃO

    int opcao1, opcao2;
    float soma_c1 = 0, soma_c2 = 0;
    
    // ESCOLHENDO O PRIMEIRO ATRIBUTO
    printf("\n>>> ESCOLHA DO PRIMEIRO ATRIBUTO <<<\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &opcao1);

    // ESCOLHENDO O SEGUNDO ATRIBUTO (MENU DINÂMICO)
    printf("\n>>> ESCOLHA DO SEGUNDO ATRIBUTO <<<\n");
    
    // MENU DINÂMICO - NÃO MOSTRA A OPÇÃO QUE JÁ FOI ESCOLHIDA PARA O PRIMEIRO ATRIBUTO
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turísticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demográfica\n");
    if (opcao1 != 6) printf("6 - PIB per Capita\n");
    
    printf("Digite sua opção (diferente da primeira): ");
    scanf("%d", &opcao2);

    // VERIFICAÇÃO SIMPLES - SE FOR IGUAL, FINALIZA O JOGO
    if (opcao2 == opcao1) {
        printf("\nERRO: Você escolheu o mesmo atributo duas vezes!\n");
        printf("Por favor, execute o programa novamente e escolha atributos diferentes.\n");
        return 1; // Finaliza o programa com código de erro
    }

    
    printf("\n#####################################\n");
    printf("COMPARAÇÃO DE CARTAS COM 2 ATRIBUTOS:\n");
    printf("Carta 1: %s (%c)\n", cidadec1, estadoc1);
    printf("Carta 2: %s (%c)\n", cidadec2, estadoc2);
    printf("#####################################\n");

    // CALCULANDO A LÓGICA PARA O PRIMEIRO ATRIBUTO
    printf("\n>>> PRIMEIRO ATRIBUTO <<<\n");
    switch (opcao1) {
        case 1: // População
            printf("Atributo: POPULAÇÃO\n");
            printf("%s (%c): %d habitantes\n", cidadec1, estadoc1, populacaoc1);
            printf("%s (%c): %d habitantes\n", cidadec2, estadoc2, populacaoc2);
            soma_c1 += populacaoc1;
            soma_c2 += populacaoc2;
            break;

        case 2: // Área
            printf("Atributo: ÁREA\n");
            printf("%s (%c): %.2f km²\n", cidadec1, estadoc1, areac1);
            printf("%s (%c): %.2f km²\n", cidadec2, estadoc2, areac2);
            soma_c1 += areac1;
            soma_c2 += areac2;
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s (%c): %.2f bilhões\n", cidadec1, estadoc1, pibc1);
            printf("%s (%c): %.2f bilhões\n", cidadec2, estadoc2, pibc2);
            soma_c1 += pibc1;
            soma_c2 += pibc2;
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: PONTOS TURÍSTICOS\n");
            printf("%s (%c): %d pontos\n", cidadec1, estadoc1, pontosturc1);
            printf("%s (%c): %d pontos\n", cidadec2, estadoc2, pontosturc2);
            soma_c1 += pontosturc1;
            soma_c2 += pontosturc2;
            break;

        case 5: // Densidade Demográfica (valor invertido)
            printf("Atributo: DENSIDADE DEMOGRÁFICA (menor é melhor)\n");
            printf("%s (%c): %.2f hab/km²\n", cidadec1, estadoc1, densidadepopc1);
            printf("%s (%c): %.2f hab/km²\n", cidadec2, estadoc2, densidadepopc2);
            // Para densidade, usamos o inverso do valor (menor = melhor)
            soma_c1 += (1.0 / densidadepopc1) * 1000;
            soma_c2 += (1.0 / densidadepopc2) * 1000;
            break;

        case 6: // PIB per Capita
            printf("Atributo: PIB PER CAPITA\n");
            printf("%s (%c): %.2f reais\n", cidadec1, estadoc1, pibpercapitac1);
            printf("%s (%c): %.2f reais\n", cidadec2, estadoc2, pibpercapitac2);
            soma_c1 += pibpercapitac1 / 1000;
            soma_c2 += pibpercapitac2 / 1000;
            break;

        default:
            printf("Opção inválida para primeiro atributo!\n");
            return 1;
    }

    // CALCULANDO A LÓGICA PARA O SEGUNDO ATRIBUTO
    printf("\n>>> SEGUNDO ATRIBUTO <<<\n");
    switch (opcao2) {
        case 1: // População
            printf("Atributo: POPULAÇÃO\n");
            printf("%s (%c): %d habitantes\n", cidadec1, estadoc1, populacaoc1);
            printf("%s (%c): %d habitantes\n", cidadec2, estadoc2, populacaoc2);
            soma_c1 += populacaoc1;
            soma_c2 += populacaoc2;
            break;

        case 2: // Área
            printf("Atributo: ÁREA\n");
            printf("%s (%c): %.2f km²\n", cidadec1, estadoc1, areac1);
            printf("%s (%c): %.2f km²\n", cidadec2, estadoc2, areac2);
            soma_c1 += areac1;
            soma_c2 += areac2;
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s (%c): %.2f bilhões\n", cidadec1, estadoc1, pibc1);
            printf("%s (%c): %.2f bilhões\n", cidadec2, estadoc2, pibc2);
            soma_c1 += pibc1;
            soma_c2 += pibc2;
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: PONTOS TURÍSTICOS\n");
            printf("%s (%c): %d pontos\n", cidadec1, estadoc1, pontosturc1);
            printf("%s (%c): %d pontos\n", cidadec2, estadoc2, pontosturc2);
            soma_c1 += pontosturc1;
            soma_c2 += pontosturc2;
            break;

        case 5: // Densidade Demográfica (valor invertido)
            printf("Atributo: DENSIDADE DEMOGRÁFICA (menor é melhor)\n");
            printf("%s (%c): %.2f hab/km²\n", cidadec1, estadoc1, densidadepopc1);
            printf("%s (%c): %.2f hab/km²\n", cidadec2, estadoc2, densidadepopc2);
            // Para densidade, usamos o inverso do valor (menor = melhor)
            soma_c1 += (1.0 / densidadepopc1) * 1000;
            soma_c2 += (1.0 / densidadepopc2) * 1000;
            break;

        case 6: // PIB per Capita
            printf("Atributo: PIB PER CAPITA\n");
            printf("%s (%c): %.2f reais\n", cidadec1, estadoc1, pibpercapitac1);
            printf("%s (%c): %.2f reais\n", cidadec2, estadoc2, pibpercapitac2);
            soma_c1 += pibpercapitac1 / 1000;
            soma_c2 += pibpercapitac2 / 1000;
            break;

        default:
            printf("Opção inválida para segundo atributo!\n");
            return 1;
    }

    // RESULTADO FINAL
    printf("\n#####################################\n");
    printf("RESULTADO FINAL:\n");
    printf("Soma dos atributos para %s (%c): %.2f\n", cidadec1, estadoc1, soma_c1);
    printf("Soma dos atributos para %s (%c): %.2f\n", cidadec2, estadoc2, soma_c2);
    printf("#####################################\n");

    // DEFININDO A CARTA VENCEDORA
    if (soma_c1 > soma_c2) {
        printf("\n RESULTADO: %s (%c) VENCEU! \n", cidadec1, estadoc1);
    } else if (soma_c2 > soma_c1) {
        printf("\n RESULTADO: %s (%c) VENCEU!\n", cidadec2, estadoc2);
    } else {
        printf("\n RESULTADO: EMPATE!\n");
    }

    return 0;
}
