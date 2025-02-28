#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1 = ' '; //letra que respresenta 1 o dos 8 estados
    char codigo1[3] =""; //código da carta
    char nomeCidade1[30] =""; //nome da cidade
    int populacao1 = 0; //numero de habitantes
    float area1 = 0; //area em quilometros quadrados
    float pibb1 = 0; //pib
    int nPontosTur1 = 0; //número de pontos turisticos

    char estado2 = ' '; //letra que respresenta 1 o dos 8 estados
    char codigo2[3] =""; //código da carta
    char nomeCidade2[30] =""; //nome da cidade
    int populacao2 = 0; //numero de habitantes
    float area2 = 0; //area em quilometros quadrados
    float pibb2 = 0; //pib
    int nPontosTur2 = 0; //número de pontos turisticos

    //dados da primeira carta
    printf("A primeira carta preencha: ");
    printf("\nEstado: \n");
    scanf("%s",&estado1);
    printf("\nCódigo da carta: \n");
    scanf("%s",&codigo1);
    printf("\nNome da cidade: \n");
    scanf("%s",&nomeCidade1);
    printf("\nPopulacao: \n");
    scanf("%d",&populacao1);
    printf("\nArea (Em km2): \n");
    scanf("%f",&area1);
    printf("\nPIB: \n");
    scanf("%f",&pibb1);
    printf("\nNúmero de Pontos Turísticos\n");
    scanf("%d",&nPontosTur1);

    //dados da segunda carta
    printf("\nA primeira carta preencha: \n");
    printf("\nEstado: \n");
    scanf("%s",&estado2);
    printf("\nCódigo da carta: \n");
    scanf("%s",&codigo2);
    printf("\nNome da cidade: \n");
    scanf("%s",&nomeCidade2);
    printf("\nPopulacao: \n");
    scanf("%d",&populacao2);
    printf("\nArea (Em km2): \n");
    scanf("%f",&area2);
    printf("\nPIB: \n");
    scanf("%f",&pibb2);
    printf("\nNúmero de Pontos Turísticos\n");
    scanf("%d",&nPontosTur2);

    printf("\nCarta 1: clear");
    printf("\nEstado: %c",estado1);
    printf("\nCódigo: %s",codigo1);
    printf("\nNome da cidade: %s",nomeCidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %f",area1);
    printf("\nPIB: %f",pibb1);
    printf("\nNúmero de Pontos Turísticos: %d",nPontosTur1);
    
    printf("\n\nCarta 2:");
    printf("\nEstado: %c",estado2);
    printf("\nCódigo: %s",codigo2);
    printf("\nNome da cidade: %s",nomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %f",area2);
    printf("\nPIB: %f",pibb2);
    printf("\nNúmero de Pontos Turísticos: %d",nPontosTur2);
    printf("\n\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
