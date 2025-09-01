#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)


    //variáveis para Carta 1 (c1)
    char estadoc1;
    char codigoc1[5]; //como sugerido, aumentado o tamanho do array de 3 para 5
    char cidadec1[50];
    int populacaoc1;
    float areac1;
    float pibc1;
    int pontosturc1;
    float densidadepopc1;    // Variável nova do nível 2 para densidade populacional
    float pibpercapitac1;  // Variável nova do nível 2 para PIB per capita
    float superpoderc1; // Nova variável para Super Poder da Carta 1 (c1)

//variáveis para Carta 2 (c2)
    char estadoc2;
    char codigoc2[5];  //como sugerido, aumentado o tamanho do array de 3 para 5
    char cidadec2[50];
    int populacaoc2;
    float areac2;
    float pibc2;
    int pontosturc2;
    float densidadepopc2;    // Variável nova do nível 2 para densidade populacional
    float pibpercapitac2; // Variável nova do nível 2 para PIB per capita
    float superpoderc2; // Nova variável para Super Poder da Carta 2 (c2)


//solicitando os dados da Carta 1 (c1):
    printf("Cadastre os dados da Carta 1:\n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estadoc1);

    printf("Digite o código para a Carta (ex: A01,B03): \n");
    scanf(" %4s", codigoc1); //como sugerido, limitado a leitura a 4 caracteres + \0

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidadec1); //como sugerido, foi usado o especificador de conjunto de varredura para evitar o buffer overflow

    printf("Digite a população: \n");
    scanf(" %d", &populacaoc1);
    
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &areac1);
    
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf(" %f", &pibc1);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontosturc1);

// Cálculos do nível 2 para carta 1 (c1)
    densidadepopc1 = populacaoc1 / areac1; // Cálculo da Densidade Populacional da Carta 1 (c1)
    pibpercapitac1 = (pibc1 * 1000000000) / populacaoc1; // Cálculo do PIB Per Capita da Carta 1 (c1)

// Cálculo do Super Poder da Carta 1: soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional)
    superpoderc1 = populacaoc1 + areac1 + pibc1 + pontosturc1 + 
                   pibpercapitac1 + (1.0 / densidadepopc1);

    printf("#####################################\n");
    
//solicitando os dados da Carta 2 (c2):
    printf("Cadastre os dados da Carta 2:\n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estadoc2);

    printf("Digite o código para a Carta (ex: A01,B03): \n");
    scanf(" %4s", codigoc2); //como sugerido, limitado a leitura a 4 caracteres + \0

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidadec2); //como sugerido, foi usado o especificador de conjunto de varredura para evitar o buffer overflow

    printf("Digite a população: \n");
    scanf(" %d", &populacaoc2);
    
    printf("Digite a área da cidade em km²: \n");
    scanf(" %f", &areac2);
    
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf(" %f", &pibc2);
    
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("  %d", &pontosturc2);

// Cálculos do nível 2 para carta 2 (c2)
    densidadepopc2 = populacaoc2 / areac2; // Cálculo da Densidade Populacional da Carta 2 (c2)
    pibpercapitac2 = (pibc2 * 1000000000) / populacaoc2; // Cálculo do PIB Per Capita da Carta 2 (c2)

// Cálculo do Super Poder da Carta 2: soma de todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional)
    superpoderc2 = populacaoc2 + areac2 + pibc2 + pontosturc2 + 
                   pibpercapitac2 + (1.0 / densidadepopc2);

    printf("#####################################\n");
    
//exibindo os dados da Carta 1 (c1)

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estadoc1);
    printf("Código: %s\n", codigoc1);
    printf("Nome da Cidade: %s\n", cidadec1);
    printf("População: %d\n", populacaoc1);
    printf("Área: %.2f km²\n", areac1); //Usei %.2f para formatação com duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pibc1); //Usei %.2f para formatação com duas casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontosturc1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopc1); // dados dos cálculos do Nível 2
    printf("PIB per Capita: %.2f reais\n", pibpercapitac1); // dados dos cálculos do Nível 2
    printf("Super Poder: %.2f\n", superpoderc1); // dados do Super Poder (Nível Mestre)

    printf("#####################################\n");
    
//exibindo os dados da Carta 2 (c2)

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estadoc2);
    printf("Código: %s\n", codigoc2);
    printf("Nome da Cidade: %s\n", cidadec2);
    printf("População: %d\n", populacaoc2);
    printf("Área: %.2f km²\n", areac2); //Usei %.2f para formatação com duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pibc2); //Usei %.2f para formatação com duas casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontosturc2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopc2); // dados dos cálculos do Nível 2
    printf("PIB per Capita: %.2f reais\n", pibpercapitac2); // dados dos cálculos do Nível 2
    printf("Super Poder: %.2f\n", superpoderc2); // dados do Super Poder (Nível Mestre)

    printf("#####################################\n");
  
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

    // Nivel Novato - Desenvolvendo a Lógica do Jogo
// Comparação das cartas
    printf("\nComparação das Cartas:\n");
    

// Escolher qual atributo será usado como comparativo: 
// 1-População | 2-Área | 3-PIB | 4-Pontos Turísticos | 5-Densidade Populacional | 6-PIB per Capita


    int comparar = 1; // Escolher aqui o número de uma das opções para o atributo que será comparado e "descomentar" apenas o escolhido.


    if (comparar == 1) { // População das cartas serão comparadas
        printf("Atributo: População\n\n");
        if (populacaoc1 > populacaoc2) {
            printf("Resultado: Carta 1 (%s) tem a maior Polulação.\n", cidadec1);
        } else (populacaoc2 > populacaoc1); {
            printf("Resultado: Carta 2 (%s) tem a maior População\n", cidadec2);
        }
    }
/*  if (comparar == 2) { // Área das cartas serão comparadas
        printf("Atributo: Área\n\n");
        if (areac1 > areac2) {
            printf("Resultado: Carta 1 (%s) tem a maior Área.\n", cidadec1);
        } else (areac2 > areac1); {
            printf("Resultado: Carta 2 (%s) tem a maior Área.\n", cidadec2);
        }
    }*/
/*  if (comparar == 3) { // PIB das cartas serão comparados
        printf("Atributo: PIB\n\n");
        if (pibc1 > pibc2) {
            printf("Resultado: Carta 1 (%s) tem o maior PIB.\n", cidadec1);
        } else (pibc2 > pibc1); {
            printf("Resultado: Carta 2 (%s) tem o maior PIB.\n", cidadec2);
        } 
    }*/
/*  if (comparar == 4) { // Pontos Turísticos das cartas serão comparados
        printf("Atributo: Pontos Turísticos\n\n");
        if (pontosturc1 > pontosturc2) {
            printf("Resultado: Carta 1 (%s) tem mais Pontos Turísticos.\n", cidadec1);
        } else (pontosturc2 > pontosturc1); {
            printf("Resultado: Carta 2 (%s) tem mais Pontos Turísticos.\n", cidadec2);
        }
    }*/
/*  if (comparar == 5) { // Densidade Populacional das cartas serão comparadas
        printf("Atributo: Densidade Populacional (menor valor vence)\n\n");
        if (densidadepopc1 < densidadepopc2) {
            printf("Resultado: Carta 1 (%s) tem a maior Densidade Populacional.\n", cidadec1);
        } else (densidadepopc2 < densidadepopc1); {
            printf("Resultado: Carta 2 (%s) tem a maior Densidade Populacional.\n", cidadec2);
        }
    }*/
/*  if (comparar == 6) { // PIB per Capita das cartas serão comparados
        printf("Atributo: PIB per Capita\n\n");    
        if (pibpercapitac1 > pibpercapitac2) {
            printf("Resultado: Carta 1 (%s) tem o maior PIB per Capita.\n", cidadec1);
        } else (pibpercapitac2 > pibpercapitac1); {
            printf("Resultado: Carta 2 (%s) tem o maior PIB per Capita.\n", cidadec2);
        }
    }*/    

    return 0;
}
