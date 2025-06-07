#include <stdio.h>

// Uma função simples para limpar o buffer de entrada do teclado.
// Isso é necessário porque o 'scanf' pode deixar um caractere de nova linha ('\n')
// para trás, o que atrapalharia a leitura de texto subsequente.
void limpar_buffer_teclado() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Define a estrutura para armazenar os atributos da carta.
// Em C, é comum usar 'struct' na declaração de variáveis.
struct Carta {
    char nome[100]; // Array de caracteres para armazenar o nome da cidade
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {

    // Declara duas variáveis do tipo 'struct Carta'
    struct Carta carta1;
    struct Carta carta2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Primeira Cidade ---\n");
    printf("Digite o nome da cidade: ");
    // Lê o nome da cidade. O formato %[^\n] permite ler nomes com espaços.
    scanf("%[^\n]", carta1.nome);

    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area (em km^2): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Chama a função para limpar o buffer antes da próxima leitura de texto
    limpar_buffer_teclado();

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro da Segunda Cidade ---\n");
    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", carta2.nome);

    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area (em km^2): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // --- EXIBICAO DOS DADOS CADASTRADOS ---
    printf("\n\n--- Cartas Cadastradas ---\n");

    // Exibe os dados da Carta 1
    printf("\n--- %s ---\n", carta1.nome);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km^2\n", carta1.area); // "%.2f" formata para 2 casas decimais
    printf("PIB: R$ %.2f bilhoes\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    // Exibe os dados da Carta 2
    printf("\n--- %s ---\n", carta2.nome);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km^2\n", carta2.area);
    printf("PIB: R$ %.2f bilhoes\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}