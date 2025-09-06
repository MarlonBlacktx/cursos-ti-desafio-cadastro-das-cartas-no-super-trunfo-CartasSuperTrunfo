#include <stdio.h>
int main(){

     char estado1[25], estado2[25];
    char cod1[4], code2[4];
    char nome1[50], nome2[50];
    int popu1, popu2, pontos1, pontos2;
    float pib1, pib2, area1, area2;

    

     printf("====BEM VINDO AO SUPER TRUNFO====\n");
     printf("Insira os dados da Carta 1 abaixo:\n");
   printf("Digite Uma letra de 'A' a 'H' (representando um dos oito estados) \n");
   scanf("%s", &estado1);

   printf("Digite A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
   scanf("%s", &cod1) ;

   printf("Insira o nome da Cidade \n");
   scanf("%s",&nome1);

   printf("Insira O número de habitantes da cidade.\n");
   scanf("%d",&popu1);

   printf("Insira A área da cidade em quilômetros quadrados.\n");
   scanf("%f", &area1);

    printf("Insira o PIB: O Produto Interno Bruto da cidade.\n");
    scanf("%f", &pib1);

    printf("Insira A quantidade de pontos turísticos na cidade.\n");
    scanf("%d", &pontos1);

    printf("Insira os dados da Carta 2 abaixo:\n");

    printf("Digite Uma letra de 'A' a 'H' (representando um dos oito estados) \n");
   scanf("%s", &estado2);

   printf("Digite A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
   scanf("%s", &code2) ;

   printf("Insira o nome da Cidade \n");
   scanf("%s", &nome2);

   printf("Insira O número de habitantes da cidade.\n");
   scanf("%d", &popu2);

   printf("Insira A área da cidade em quilômetros quadrados.\n");
   scanf("%f", &area2);

    printf("Insira o PIB: O Produto Interno Bruto da cidade.\n");
    scanf("%f", &pib2);

    printf("Insira A quantidade de pontos turísticos na cidade.\n");
    scanf("%d", &pontos2);

    printf("Essas sao suas cartas!\n");

    printf("====Carta 1====:\n");

    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", cod1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populaçao: %d\n", popu1);
    printf("Area: %f km²\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
printf("====Carta 2====:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", code2);
    printf("Nome da Cidade: %c\n", nome2);
    printf("Populaçao: %d\n", popu2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
return 0;



//teste



}
