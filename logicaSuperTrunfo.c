#include <stdio.h>
int main() {
                //Variáveis do menu
    int opcao, opcao2;

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
    
                //Menu interativo
    printf("Escolha uma opção:\n");
    printf("1. Iniciar jogo:\n");
    printf("2. Sair:\n");
    printf("Digite: ");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
                //Cadastro da Carta 1

        printf("\n   ##Cadastro da primeira carta##\n");

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

        printf("   ##Cadastro da segunda carta##\n");

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

                    //Comparação de atributos

        printf("    Escolha qual atributo você deseja comparar:\n");

        printf("1. População\n");
        printf("2.Densidade Populacional\n");
        printf("3.Área\n");
        printf("4.PIB\n");
        printf("5.PIB per Capita\n");
        printf("6.Número de pontos turísticos\n");
        printf("7.SUPER PODER\n\n");
        printf("Digite: ");
        scanf("%i", &opcao2);
        
        switch (opcao2)
        {
        case 1:
            if (populacao1 > populacao2){
                printf("        A carta %s tem mais população, então ela é a vencedora!\n\n", nome1);
            }
            else if(populacao1 == populacao2){
                printf("        Houve um empate!!\n\n");
            }
            else{
                printf("        A carta %s tem mais população, então ela é a vencedora!\n\n", nome2);
            }
            break;
        case 2:
            if (densi_popu1 > densi_popu2){
                printf("        A carta %s tem mais densidade populacional, então ela é a vencedora!\n\n", nome1);
            }
            else if(densi_popu1 == densi_popu2){
                printf("        Houve um empate!!\n\n");
            }
            else{
                printf("        A carta %s tem mais densidade populacional, então ela é a vencedora!\n\n", nome2);
            }
            break;
        case 3:
            if (area1 > area2){
                printf("        A carta %s tem mais área, então ela é a vencedora!\n\n", nome1);
            }
            else if(area1 == area2){
                printf("        Houve um empate!!\n\n");
            }
            else{
                printf("        A carta %s tem mais área, então ela é a vencedora!\n\n", nome2);
            }
            break;
        case 4:
            if (PIB1 > PIB2){
                printf("        A carta %s tem o maior PIB, então ela é a vencedora!\n\n", nome1);
            }
            else if(PIB1 == PIB2){
                printf("        Houve um empate!!\n\n");
            }
            else{
                printf("        A carta %s tem o maior PIB, então ela é a vencedora!\n\n", nome2);
            }
            break;
        case 5:
            if (PIB_per1 > PIB_per2){
                printf("        A carta %s tem o maior PIB Per Capita, então ela é a vencedora!\n\n", nome1);
            }
            else if(PIB_per1 == PIB_per2){
                printf("        Houve um empate!!\n\n");
            }
            else{
                printf("        A carta %s tem o maior PIB Per Capita, então ela é a vencedora!\n\n", nome2);
            }
            break;
        case 6:
            if (pturisticos1 > pturisticos2){
                printf("        A carta %s tem mais pontos turisticos, então ela é a vencedora!\n\n", nome1);
            }
            else if(pturisticos1 == pturisticos2){
                printf("        Houve um empate!!\n\n");
            }
            else{
                printf("        A carta %s tem mais pontos turisticos, então ela é a vencedora!\n\n", nome2);
            }
            break;
        case 7:
            if (superpoder1 > superpoder2){
                printf("        A carta %s tem o maior SUPER PODER, então ela é a vencedora!\n\n", nome1);
            }
            else if(superpoder1 == superpoder2){
                printf("        Houve um empate!!\n\n");
            }
            else{
                printf("        A carta %s tem o maior SUPER PODER, então ela é a vencedora!\n\n", nome2);
            }
            break;

        default:
            printf("        ***Entrada inválida!***\n\n");
            break;
        }break;
            
    case 2:
        printf("        Saindo...\n\n");
        break;
    
    default:
        printf("        ***Entrada inválida!***\n\n");
        break;
    }
    
    return 0;
}
