#include <stdio.h>
int main() {
                //Carta 1
    int pturisticos1, pontuacao1, populacao1;
    char codigo1[10], nome1[50];
    float area1, densi_popu1, PIB1, PIB_per1;
    long int superpoder1;

                //Carta 2
    int pturisticos2, pontuacao2, populacao2;
    char codigo2[10], nome2[50];
    float area2, densi_popu2, PIB2, PIB_per2;
    long int superpoder2;



    printf("*** Bem vindo ao jogo Super Trunfo ***\n\n");

 
                //Cadastro da Carta 1

    printf("   Cadastro da primeira carta\n");

    printf("Digite o código da cidade: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome1);

    printf("Forneça a população: ");
    scanf("%i", &populacao1);

    printf("Forneça a área: ");
    scanf("%f", &area1);

    printf("Forneça o PIB: ");
    scanf("%f", &PIB1);

    printf("Forneça o número de pontos turísticos: ");
    scanf("%i", &pturisticos1);

    densi_popu1 = populacao1 / area1;
    PIB_per1 = PIB1 / (float)populacao1;
    superpoder1 = populacao1 + area1 + PIB1 + pturisticos1 + densi_popu1 + PIB_per1;


    printf("\n- A carta escolhida é: %s-%s\n", codigo1, nome1);
    printf("- População: %i\n", populacao1);
    printf("- Densidade Populacional: %.2f\n", densi_popu1);
    printf("- Área: %.2f\n", area1);
    printf("- PIB: %.2f\n", PIB1);
    printf("- PIB per Capita: %.2f\n", PIB_per1);
    printf("- Número de pontos turísticos: %i\n", pturisticos1);
    printf("- SUPER PODER: %li\n\n", superpoder1);


                //Cadastro da Carta 2

    printf("   Cadastro da segunda carta:\n");

    printf("Digite o código da cidade: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome2);

    printf("Forneça a população: ");
    scanf("%i", &populacao2);

    printf("Forneça a área: ");
    scanf("%f", &area2);

    printf("Forneça o PIB: ");
    scanf("%f", &PIB2);

    printf("Forneça o número de pontos turísticos: ");
    scanf("%i", &pturisticos2);

    densi_popu2 = populacao2 / area2;
    PIB_per2 = PIB2 / (float)populacao2;
    superpoder2 = populacao2 + area2 + PIB2 + pturisticos2 + densi_popu2 + PIB_per2;

    printf("\n- A carta escolhida é: %s-%s\n", codigo2, nome2);
    printf("- População: %i\n", populacao2);
    printf("- Densidade Populacional: %.2f\n", densi_popu2);
    printf("- Área: %.2f\n", area2);
    printf("- PIB: %.2f\n", PIB2);
    printf("- PIB per Capita: %.2f\n", PIB_per2);
    printf("- Número de pontos turísticos: %i\n", pturisticos2);
    printf("- SUPER PODER: %li\n\n", superpoder2);

    /*printf("** Vence a carta que sair 1 **\n\n");
    
    printf("- Em Densidade Populacional a carta 1 é: %i\n", densi_popu1 > densi_popu2);
    printf("- Em Densidade Populacional a carta 2 é: %i\n\n", densi_popu1 < densi_popu2);

    printf("- Em Super Poder a carta 1 é: %i\n", superpoder1 > superpoder2);
    printf("- Em Super Poder a carta 1 é: %i\n\n", superpoder1 < superpoder2);
    */

                //Comparação de atributos
    pontuacao1 = 0;
    pontuacao2 = 0;

    if (PIB_per1 > PIB_per2){
        printf("A carta %s ganhou 1 ponto!\n", nome1);
        pontuacao1 += 1;
    }else{
        printf("A carta %s ganhou 1 ponto!\n", nome2);
        pontuacao2 += 1;
    }
    if (densi_popu1 > densi_popu2){
        printf("A carta %s ganhou 1 ponto!\n", nome1);
        pontuacao1 += 1;
    }else{
        printf("A carta %s ganhou 1 ponto!\n", nome2);
        pontuacao2 += 1;
    }
    if (superpoder1 > superpoder2){
        printf("A carta %s ganhou 1 ponto!\n", nome1);
        pontuacao1 += 1;
    }else{
        printf("A carta %s ganhou 1 ponto!\n", nome2);
        pontuacao2 += 1;
    }

    printf("\nPontos da carta %s: %i\n", nome1, pontuacao1);
    printf("Pontos da carta %s: %i\n\n", nome2, pontuacao2);

    if (pontuacao1 > pontuacao2){
        printf("    ** A carta %s é a vencedora!! **\n\n", nome1);
    }
    if (pontuacao1 < pontuacao2){
        printf("    ** A carta %s é a vencedora!! **\n\n", nome2);
    }
    if (pontuacao1 == pontuacao2){
        printf("Houve um empate!\n\n");
    }

    return 0;
}
