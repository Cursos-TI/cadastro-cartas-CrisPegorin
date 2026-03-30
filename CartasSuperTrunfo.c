#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

 //carta 01 - estado 1
char codigo [4];
char estado;
char cidade [15];
int turismo;
int populacao;
float area;
float PIB;

  //carta 02 - estado 2
char codigo1 [4];
char estado1;
char cidade1 [15];
int turismo1;
int populacao1;
float area1;
float PIB1;

  // Área para entrada de dados

// carta 1

printf("codigo da carta: \n");
            scanf("%s", codigo);

    printf("Estado: \n");
    scanf(" %c", &estado);

        printf("Cidade: \n");
        scanf(" %s", cidade);

             printf("Numero de pontos turisticos: \n");
             scanf(" %sd", &turismo);

                printf("população: \n");
                scanf(" %d", &populacao);

                    printf("area da cidade: \n");
                    scanf(" %f", &area);

                        printf("PIB da cidade: \n");
                        scanf(" %f", &PIB);


   // carta 2   
   
   printf("codigo da carta: \n");
            scanf("%s", codigo1);

    printf("Estado: \n");
    scanf(" %c", &estado1);

        printf("Cidade: \n");
        scanf(" %s", cidade1);

             printf("Numero de pontos turisticos: \n");
             scanf(" %sd", &turismo1);

                printf("população: \n");
                scanf(" %d", &populacao1);

                    printf("area da cidade: \n");
                    scanf(" %f", &area1);

                        printf("PIB da cidade: \n");
                        scanf(" %f", &PIB1);


  // Área para exibição dos dados da cidade

// carta 1

printf("Codigo da carta: %s \n", codigo);
printf("Estado: %c \n", estado);
printf("Cidade: %s \n", cidade);
printf("Pontos turisticos: %d \n", turismo);
printf("Populacao: %d \n", populacao);
printf("Area da cidade: %f \n", area);
printf("PIB da cidade: %f \n", PIB);

// carta 2

printf("Codigo da carta: %s \n", codigo1);
printf("Estado: %c \n", estado1);
printf("Cidade: %s \n", cidade1);
printf("Pontos turisticos: %d \n", turismo1);
printf("Populacao: %d \n", populacao1);
printf("Area da cidade: %f \n", area1);
printf("PIB da cidade: %f \n", PIB1);

return 0;
} 
