#include <stdio.h>
int main() {
                //Variáveis de decisão
    int opcao, escolha1, escolha2, resultado1, resultado2;

                //Carta 1
    int pturisticos1, pontuacao1, populacao1;
    unsigned long int PIB1;
    char codigo1[30], nome1[30];
    float area1, densi_popu1, PIB_per1;
    double superpoder1;

                //Carta 2
    int pturisticos2, pontuacao2, populacao2;
    unsigned long int PIB2;
    char codigo2[30], nome2[30];
    float area2, densi_popu2, PIB_per2;
    double superpoder2;



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

        printf("\n   ## Cadastro da primeira carta ##\n");

        printf("Digite o código da cidade: ");
        scanf("%s", &codigo1);

        printf("Digite o nome da cidade: ");
        scanf("%s", &nome1);

        printf("Forneça a população: ");
        scanf("%i", &populacao1);

        printf("Forneça a área: ");
        scanf("%f", &area1);

        printf("Forneça o PIB: ");
        scanf("%lu", &PIB1);

        printf("Forneça o número de pontos turísticos: ");
        scanf("%i", &pturisticos1);

        densi_popu1 = populacao1 / area1;
        PIB_per1 = PIB1 / (float)populacao1;
        superpoder1 = (double)populacao1 + (double)area1 + (double)PIB1 + (double)pturisticos1 + (double)densi_popu1 + (double)PIB_per1;

        printf("\n- A carta escolhida é: %s-%s\n", codigo1, nome1);
        printf("- População: %i\n", populacao1);
        printf("- Densidade Populacional: %.2f\n", densi_popu1);
        printf("- Área: %.2f\n", area1);
        printf("- PIB: %lu\n", PIB1);
        printf("- PIB per Capita: %.2f\n", PIB_per1);
        printf("- Número de pontos turísticos: %i\n", pturisticos1);
        printf("- SUPER PODER: %2.f\n\n", superpoder1);


                //Cadastro da Carta 2

        printf("   ## Cadastro da segunda carta ##\n");

        printf("Digite o código da cidade: ");
        scanf("%s", &codigo2);

        printf("Digite o nome da cidade: ");
        scanf("%s", &nome2);

        printf("Forneça a população: ");
        scanf("%i", &populacao2);

        printf("Forneça a área: ");
        scanf("%f", &area2);

        printf("Forneça o PIB: ");
        scanf("%lu", &PIB2);

        printf("Forneça o número de pontos turísticos: ");
        scanf("%i", &pturisticos2);

        densi_popu2 = populacao2 / area2;
        PIB_per2 = PIB2 / (float)populacao2;
        superpoder2 = (double)populacao2 + (double)area2 + (double)PIB2 + (double)pturisticos2 + (double)densi_popu2 + (double)PIB_per2;

        printf("\n- A carta escolhida é: %s-%s\n", codigo2, nome2);
        printf("- População: %i\n", populacao2);
        printf("- Densidade Populacional: %.2f\n", densi_popu2);
        printf("- Área: %.2f\n", area2);
        printf("- PIB: %.lu\n", PIB2);
        printf("- PIB per Capita: %.2f\n", PIB_per2);
        printf("- Número de pontos turísticos: %i\n", pturisticos2);
        printf("- SUPER PODER: %2.f\n\n", superpoder2);

                    //Comparação de atributos

        printf("        **Você vai escolher dois atributos para comparação!**\n\n");

        printf("    Escolha os atributos que você deseja comparar:\n");

        printf("1. População\n");
        printf("2. Densidade Populacional\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. PIB per Capita\n");
        printf("6. Número de pontos turísticos\n");
        printf("7. SUPER PODER\n\n");
        printf("Digite o primeiro: ");
        scanf("%i", &escolha1);
        
        switch (escolha1)
        {
        case 1:
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            resultado1 = densi_popu1 < densi_popu2 ? 1 : 0;
            break;
        case 3:
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 4:
            resultado1 = PIB1 > PIB2 ? 1 : 0;
            break;
        case 5:
            resultado1 = PIB_per1 > PIB_per2 ? 1 : 0;
            break;
        case 6:
            resultado1 = pturisticos1 > pturisticos2 ? 1 : 0;
            break;
        case 7:
            resultado1 = superpoder1 > superpoder2 ? 1 : 0;  
            break;
        default:
            printf("        ***Entrada inválida!***\n\n");
            return 0;
            break;
        }

        printf("Digite o segundo: ");
        scanf("%i", &escolha2);
        
        switch (escolha2)
        {
        case 1:
            resultado2 = populacao1 < populacao2 ? 1 : 0;
            break;
        case 2:
            resultado2 = densi_popu1 > densi_popu2 ? 1 : 0;
            break;
        case 3:
            resultado2 = area1 < area2 ? 1 : 0;
            break;
        case 4:
            resultado2 = PIB1 < PIB2 ? 1 : 0;
            break;
        case 5:
            resultado2 = PIB_per1 < PIB_per2 ? 1 : 0;
            break;
        case 6:
            resultado2 = pturisticos1 < pturisticos2 ? 1 : 0;
            break;
        case 7:
            resultado2 = superpoder1 < superpoder2 ? 1 : 0;  
            break;
        default:
            printf("        ***Entrada inválida!***\n\n");
            return 0;
            break;
        }

                    //Analisando o vencedor

    printf("\n        Vamos ver quem foi o vencedor!!!\n\n");
    
    if (resultado1 == resultado2){
        printf("        ### Empate! ###\n\n");
    }else if (resultado1 > resultado2){
        printf("        ### A carta %s é a vencedora! ###\n\n", nome1);
    }else{
        printf("        ### A carta %s é a vencedora! ###\n\n", nome2);
    }
    break;
    
    case 2:
        printf("        Saindo...\n\n");
        break;
    
    default:
        printf("        ***Entrada inválida!***\n\n");
        break;
    }
    
    return 0;
}
