#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codCidadeA, codCidadeB, codCartA, pontoTuristicoA, pontoTuristicoB;
    char cartaEstadoA[1], cartaEstadoB[1];
    char nomePaisA[50], nomePaisB[50];
    double pibA, pibB, areaA, areaB, populacaoA, populacaoB;
 
        // Cadastro das Cartas:
        // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
        // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Carta 1 \n");
    printf("Digite o nome do pais da Carta 1: \n");
    scanf("%s", nomePaisA); 

    printf("Digite o codigo da cidade da carta 1: \n");
    scanf("%d", &codCidadeA);

    printf("Digite quantos pontos Turistico da carta 1: \n");
    scanf("%d", &pontoTuristicoA);

    printf("Digite a População da carta 1: \n");
    scanf("%lf", &populacaoA); 

    printf("Digite o PIB da carta 1: \n");
    scanf("%lf", &pibA);

    printf("Digite o estado da carta 1 com apenas uma Letra entre A a H: \n");
    scanf("%s", &cartaEstadoA);

    printf("Digite o area da carta 1: \n");
    scanf("%lf", &areaA); 

    printf("---FIM--");
    printf("Carta 2 \n");

    printf("Digite o nome do pais da Carta 2: \n");
    scanf("%s", nomePaisB); 

    printf("Digite o codigo da cidade da carta 2: \n");
    scanf("%d", &codCidadeA);

    printf("Digite o Ponto Turistico da carta 2: \n");
    scanf("%d", &pontoTuristicoB);

    printf("Digite a População da carta 2: \n");
    scanf("%lf", &populacaoB); 

    printf("Digite o PIB da carta 2: \n");
    scanf("%lf", &pibB);

    printf("Digite o estado da carta 1 com apenas uma Letra de A a H: \n");
    scanf("%s", &cartaEstadoB);

    printf("Digite o area da carta 2: \n");
    scanf("%lf", &areaB); 

    float densidadePopulacionalA = populacaoA/areaA;
    float densidadePopulacionalB = populacaoB/areaB;

    float PibPerCapitaA = pibA/populacaoA;
    float PibPerCapitaB = pibB/populacaoB;

    float a =PibPerCapitaA+populacaoA+densidadePopulacionalA+pontoTuristicoA;
    float b =PibPerCapitaB+populacaoB+densidadePopulacionalB+pontoTuristicoB;
    float resultado; 
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", cartaEstadoA);
    printf("Nome do pais: %s\n", nomePaisA);
    printf("Codigo da cidade: %d\n", codCidadeA);
    printf("Ponto turistico: %d\n", pontoTuristicoA);
    printf("População: %.2lf\n", populacaoA);
    printf("PIB do Pais: %.2lf\n", pibA);
    printf("Area do Pais: %.2lf\n", areaA);
    printf("Densidade Populacional Do Pais: %.2lf\n", densidadePopulacionalA);
    printf("Pib Da Populaçao : %.2lf\n", PibPerCapitaA);
    printf("A soma dos poderes e de %.2f\n", a);
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", cartaEstadoB);
    printf("Nome do pais: %s\n", nomePaisB);
    printf("Codigo da cidade: %d\n", codCidadeB);
    printf("Ponto turistico: %d\n", pontoTuristicoB);
    printf("População: %.2lf\n", populacaoB);
    printf("PIB do Pais: %.2lf\n", pibB);
    printf("Area do Pais: %.2lf\n", areaB);
    printf("Densidade Populacional Do Pais: %.2lf\n", densidadePopulacionalB);
    printf("Pib Da Populaçao : %.2lf\n", PibPerCapitaB);
    printf("A soma dos poderes e de %.2f\n", b);
   

              //super poder :
             // Comparação
    printf("\n--- Resultado da Comparação ---\n");

    printf("pontoTuristicoA > pontoTuristicoB : %d\n" , pontoTuristicoA > pontoTuristicoB );
    printf("populacaoA > populacaoB : %d\n" , populacaoA > populacaoB );
    printf("pibA > pibB : %d\n" , pibA > pibB );
    printf("areaA > areaB : %d\n" , areaA > areaB );
    printf("densidadePopulacionalA > densidadePopulacionalB : %d\n" , densidadePopulacionalA > densidadePopulacionalB );
    printf("PibPerCapitaA > PibPerCapitaB : %d\n" , PibPerCapitaA > PibPerCapitaB );

  
        if (pontoTuristicoA > pontoTuristicoB){
        printf("carta1: tem maior percentual de dano que a carta2 \n");
         }else{
            printf("carta2: tem maior percentual de dano que a carta1 \n");
            
        }
        
             printf("\n---FIM---\n");
       
    return 0;

}
