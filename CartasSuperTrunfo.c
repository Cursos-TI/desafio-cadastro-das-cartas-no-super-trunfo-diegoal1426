#include <stdio.h>

int main() {
    //declarações de variáveis
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

    //auxiliares
    int escolha1 = 0;
    int escolha2 = 0;
    int resultado1 = 0;
    int resultado2 = 0;
    float soma1 = 0;
    float soma2 = 0;

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
    scanf("%hd",&nPontosTur1);

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
    scanf("%hd",&nPontosTur2);

    //calculo de PIB
    densidade1  = (float)populacao1/area1;
    densidade2  = (float)populacao2/area2;
   
    //calculo da densidade populacional
    pibPercap1  = (float)pibb1/populacao1;
    pibPercap2  = (float)pibb2/populacao2;
    
    //calculo super poder
    superpoder1 = (float)populacao1 + (float)area1 + (float)pibb1 + (float)nPontosTur1 + (float)pibPercap1 + (float)1/densidade1*1000;
    superpoder2 = (float)populacao2 + (float)area2 + (float)pibb2 + (float)nPontosTur2 + (float)pibPercap2 + (float)1/densidade2*1000;


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

    //menu do jogo para comparação do primeiro atributo
    printf("\n\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");
    printf("Escolha o primeiro atributo das cartas: ");
    scanf("%d",&escolha1);
    printf("\n\n### Desafio das cartas ###\n");
   
    //Estrutura de decisão de acordo com a escolha do usuário
    switch (escolha1){
    case 1:  
        printf("Atributo selecionado foi: POPULAÇÃO\n");
        printf("Carta 1: %s População: %d\n",nomeCidade1,populacao1);
        printf("Carta 2: %s População: %d\n",nomeCidade2,populacao2);

        soma1 += populacao1;
        soma2 += populacao2;
        break;
    case 2:
        printf("Atributo selecionado foi: ÁREA\n");
        printf("Carta 1: %s Área: %.2f\n",nomeCidade1,area1);
        printf("Carta 2: %s Área: %.2f\n",nomeCidade2,area2);

        soma1 += area1;
        soma2 += area2;
        break;
    case 3:
        printf("Atributo selecionado foi: PIB\n");
        printf("Carta 1: %s PIB: %.2f\n",nomeCidade1,pibb1);
        printf("Carta 2: %s PIB: %.2f\n",nomeCidade2,pibb2);

        soma1 += pibb1;
        soma2 += pibb2;
        break;
    case 4:
        printf("Atributo selecionado foi: Números de pontos turísticos\n");
        printf("Carta 1: %s Números de pontos turísticos: %d\n",nomeCidade1,nPontosTur1);
        printf("Carta 2: %s Números de pontos turísticos: %d\n",nomeCidade2,nPontosTur2);

        soma1 += nPontosTur1;
        soma2 += nPontosTur2;
        break;
    case 5:
        printf("Atributo selecionado foi: Densidade demográfica\n");
        printf("Carta 1: %s Densidade Demográfica: %.2f\n",nomeCidade1,densidade1);
        printf("Carta 2: %s Densidade Demográfica: %.2f\n",nomeCidade2,densidade2);

        soma1 += 1/densidade1;
        soma2 += 1/densidade2;
        break;
    default:
        printf("\n\nopção invalida\n");
        break;
    }
    
    //menu do jogo para comparação do segundo atributo
    printf("\n\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");
    printf("Escolha o segundo atributo das cartas: ");
    scanf("%d",&escolha2);
    printf("\n\n### Desafio das cartas ###\n");


    //Estrutura de decisão de acordo com a escolha do usuário
    if(escolha1 == escolha2){
        printf("Atributo já selecionado");
    }else{
        switch (escolha1){
            case 1:  
                printf("Atributo selecionado foi: POPULAÇÃO\n");
                printf("Carta 1: %s População: %d\n",nomeCidade1,populacao1);
                printf("Carta 2: %s População: %d\n",nomeCidade2,populacao2);

                soma1 += populacao1;
                soma2 += populacao2;
                break;
            case 2:
                printf("Atributo selecionado foi: ÁREA\n");
                printf("Carta 1: %s Área: %.2f\n",nomeCidade1,area1);
                printf("Carta 2: %s Área: %.2f\n",nomeCidade2,area2);

                soma1 += area1;
                soma2 += area2;
                break;
            case 3:
                printf("Atributo selecionado foi: PIB\n");
                printf("Carta 1: %s - PIB: %.2f\n",nomeCidade1,pibb1);
                printf("Carta 2: %s - PIB: %.2f\n",nomeCidade2,pibb2);

                soma1 += pibb1;
                soma2 += pibb2;
                break;
            case 4:
                printf("Atributo selecionado foi: Números de pontos turísticos\n");
                printf("Carta 1: %s - Números de pontos turísticos: %d\n",nomeCidade1,nPontosTur1);
                printf("Carta 2: %s - Números de pontos turísticos: %d\n",nomeCidade2,nPontosTur2);

                soma1 += nPontosTur1;
                soma2 += nPontosTur2;
                break;
            case 5:
                printf("Atributo selecionado foi: Densidade demográfica\n");
                printf("Carta 1: %s - Densidade Demográfica: %.2f\n",nomeCidade1,densidade1);
                printf("Carta 2: %s - Densidade Demográfica: %.2f\n",nomeCidade2,densidade2);

                soma1 += 1/densidade1;
                soma2 += 1/densidade2;
                break;
            default:
                printf("\n\nopção invalida\n");
                break;
            }
    }
    printf("\n#####################################\n");
    printf("\nCarta 1: %s (%s)\n",nomeCidade1,estado1);
    printf("\nCarta 2: %s (%s)\n",nomeCidade2,estado2);
    switch (escolha1){
        case 1:
            printf("Primeiro Atributo: População\n");
            printf("Carta 1: %d\n",populacao1);
            printf("Carta 2: %d\n",populacao2);
            break;
        case 2:
            printf("Primeiro Atributo: Área\n");
            printf("Carta 1: %.2f\n",area1);
            printf("Carta 2: %.2f\n",area2);
            break;
        case 3:
            printf("Primeiro Atributo: PIB\n");
            printf("Carta 1: %.2f\n",pibb1);
            printf("Carta 2: %.2f\n",pibb2);
            break;
        case 4:
            printf("Primeiro Atributo: Números de pontos turísticos\n");
            printf("Carta 1: %d\n",nPontosTur1);
            printf("Carta 2: %d\n",nPontosTur2);
            break;
        case 5:
            printf("Primeiro Atributo: Densidade demográfica\n");
            printf("Carta 1: %.2f\n",densidade1);
            printf("Carta 2: %.2f\n",densidade2);
            break;
    }
    switch (escolha2){
        case 1:
            printf("Segundo Atributo: População\n");
            printf("Carta 1: %d\n",populacao1);
            printf("Carta 2: %d\n",populacao2);
            break;
        case 2:
            printf("Segundo Atributo: Área\n");
            printf("Carta 1: %.2f\n",area1);
            printf("Carta 2: %.2f\n",area2);
            break;
        case 3:
            printf("Segundo Atributo: PIB\n");
            printf("Carta 1: %.2f\n",pibb1);
            printf("Carta 2: %.2f\n",pibb2);
            break;
        case 4:
            printf("Segundo Atributo: Números de pontos turísticos\n");
            printf("Carta 1: %d\n",nPontosTur1);
            printf("Carta 2: %d\n",nPontosTur2);
            break;
        case 5:
            printf("Segundo Atributo: Densidade demográfica\n");
            printf("Carta 1: %.2f\n",densidade1);
            printf("Carta 2: %.2f\n",densidade2);
            break;
    }


    printf("\nSoma de atributos da carta 1: %.2f\n",soma1);
    printf("\nSoma de atributos da carta 2: %.2f\n",soma2);
    soma1 == soma2 ? printf("\n\n##  Empate  ##\n\n"): soma1 > soma2 ? printf("\n\n## Carta 1 venceu!\n\n"):printf("\n\n## Carta 2 venceu! ##\n\n");
    return 0;
}
