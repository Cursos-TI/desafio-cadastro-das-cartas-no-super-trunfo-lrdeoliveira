#include <stdio.h>

int main() {
   
    char estado1 = 'A';
    char codigo1[4] = "A01";
    char nomeCidade1[50] = "Sao Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1;

   
    char estado2 = 'B';
    char codigo2[4] = "B02";
    char nomeCidade2[50] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Densidade Demografica\n");
    scanf("%d", &atributo1);

    do {
        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        switch (atributo1) {
            case 1:
                printf("2 - Area\n3 - PIB\n4 - Densidade Demografica\n");
                break;
            case 2:
                printf("1 - Populacao\n3 - PIB\n4 - Densidade Demografica\n");
                break;
            case 3:
                printf("1 - Populacao\n2 - Area\n4 - Densidade Demografica\n");
                break;
            case 4:
                printf("1 - Populacao\n2 - Area\n3 - PIB\n");
                break;
            default:
                printf("Opcao invalida para o primeiro atributo. Encerrando.\n");
                return 1;
        }
        scanf("%d", &atributo2);
    } while (atributo2 == atributo1);

    
    switch (atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
    }

    switch (atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
    }


    printf("\nComparando os atributos:\n");
    printf("Atributo 1: ");
    switch (atributo1) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Densidade Demografica\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", nomeCidade1, valor1_c1, nomeCidade2, valor1_c2);

    printf("Atributo 2: ");
    switch (atributo2) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Densidade Demografica\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", nomeCidade1, valor2_c1, nomeCidade2, valor2_c2);

    // Regra especial para densidade: menor vence
    valor1_c1 = (atributo1 == 4) ? -valor1_c1 : valor1_c1;
    valor1_c2 = (atributo1 == 4) ? -valor1_c2 : valor1_c2;
    valor2_c1 = (atributo2 == 4) ? -valor2_c1 : valor2_c1;
    valor2_c2 = (atributo2 == 4) ? -valor2_c2 : valor2_c2;

    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);

    if (soma1 > soma2) {
        printf("\n%s venceu a rodada!\n", nomeCidade1);
    } else if (soma1 < soma2) {
        printf("\n%s venceu a rodada!\n", nomeCidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}