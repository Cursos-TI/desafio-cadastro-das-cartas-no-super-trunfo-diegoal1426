#include <stdio.h>

int main() {
    //variaveis carta 1
    char estado1[2]         = ""; //letra que respresenta 1 o dos 8 estados
    char codigo1[3]         = ""; //código da carta
    char nomeCidade1[30]    = ""; //nome da cidade
    unsigned int populacao1 = 0; //numero de habitantes
    float area1             = 0; //area em quilometros quadrados
    float pibb1             = 0; //pib
    short int nPontosTur1   = 0; //número de pontos turisticos
    float densidade1        = 0; //densidade populacional
    float pibPercap1        = 0; //pib per capita
    float superpoder1       = 0; //superpoder (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder").

    //variaveis carta 2
    char estado2[2]         = ""; //letra que respresenta 1 o dos 8 estados
    char codigo2[3]         = ""; //código da carta
    char nomeCidade2[30]    = ""; //nome da cidade
    unsigned int populacao2 = 0; //numero de habitantes
    float area2             = 0; //area em quilometros quadrados
    float pibb2             = 0; //pib
    short int nPontosTur2   = 0; //número de pontos turisticos
    float densidade2        = 0; //densidade populacional
    float pibPercap2        = 0; //pib per capita
    float superpoder2       = 0; //superpoder (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder").

    //inserção de dados da primeira carta
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

    //inserção de dados da segunda carta
    printf("\nA segunda carta preencha: \n");
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

    //calculo de PIB
    pibPercap1  = (float)populacao1/area1;
    pibPercap2  = (float)populacao2/area2;
   
    //calculo da densidade populacional
    densidade1  = (float)pibb1/populacao1;
    densidade2  = (float)pibb2/populacao2;
    
    //calculo super poder
    superpoder1 = (float)populacao1 + (float)area1 + (float)pibb1 + (float)nPontosTur1 + (float)pibPercap1 + (float)1/densidade1;
    superpoder2 = (float)populacao2 + (float)area2 + (float)pibb2 + (float)nPontosTur2 + (float)pibPercap2 + (float)1/densidade2;


    //mostrando mensagens

    //dados da carta 1
    printf("\nCarta 1: ");
    printf("\nEstado: %s",estado1);
    printf("\nCódigo: %s",codigo1);
    printf("\nNome da cidade: %s",nomeCidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f",area1);
    printf("\nPIB: %.2f",pibb1);
    printf("\nNúmero de Pontos Turísticos: %d",nPontosTur1);
    printf("\nDensidade populacional: %.2f hab/km2",densidade1);
    printf("\nPIB per Capita: %.2f reais",pibPercap1);
    
    //dados da carta 2
    printf("\n\nCarta 2:");
    printf("\nEstado: %s",estado2);
    printf("\nCódigo: %s",codigo2);
    printf("\nNome da cidade: %s",nomeCidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f",area2);
    printf("\nPIB: %.2f",pibb2);
    printf("\nNúmero de Pontos Turísticos: %d",nPontosTur2);
    printf("\nDensidade populacional: %.2f hab/km2",densidade2);
    printf("\nPIB per Capita: %.2f reais",pibPercap2);

    printf("\n\n");
    
    //resultados das comparações
    printf("\nComparação de cartas (Atributo: Área):\n");
    printf("\nCarta 1 - %s %s: %.2f",nomeCidade1,estado1,area1);
    printf("\nCarta 2 - %s %s: %.2f",nomeCidade2,estado2,area2);
    printf("\n\nResultado: ");
    //fazendo a comparacao
    if(area1 > area2){
        printf("Carta 1 (%s) venceu!\n",nomeCidade1);
    }else{
        printf("Carta 1 (%s) venceu!\n",nomeCidade1);
    }

    return 0;
}
