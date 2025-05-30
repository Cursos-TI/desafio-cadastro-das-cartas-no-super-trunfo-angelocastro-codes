#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    // Exibir caracteres com acentos
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Atribui e inicializa variáveis
    char estado = '\0';
    char codigo_carta[4] = "";
    char nome_cidade[60] = "";
    int populacao_cidade = 0;
    float area_cidade = 0;
    float pib_cidade = 0;
    int quantidade_pontos_turisticos = 0;
    float densidade_populacional = 0.0;
    float pib_per_capita = 0.0;

    // Mensagem de boas-vindas ao usuário
    printf("JOGO SUPER TRUNFO\n");
    printf("******************\n");
    printf("Olá! Seja Bem-vindo(a)!\n");
    printf("Cadastre a primeira carta do jogo...\n");

    /*
    -----------------------------
    Cadastro da primeira carta
    -----------------------------
    */

    // Solicita a representação de um estado
    printf("Digite uma letra de A a H para representar um estado brasileiro: ");
    scanf(" %c", &estado);
    getchar();  // Limpa o '\n' no buffer

    // Solicita o código da carta
    printf("Digite o código da carta com a letra do estado seguida de um número de 01 a 04 (Ex.: A01): ");
    scanf("%3s", codigo_carta);
    getchar();


    // Solicita o nome da cidade  
    printf("Digite o nome da cidade contendo apenas uma palavra: ");
    fgets(nome_cidade, 60, stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';

    // Solicita a população
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_cidade);
    getchar();

    // Solicita a área da cidade em km2
    printf("Digite a área da cidade em km2: ");
    scanf("%f", &area_cidade);
    getchar();

    // Solicita o PIB da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_cidade);
    getchar();

    // Solicita o número de pontos turísticos da cidade
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &quantidade_pontos_turisticos);
    getchar();
    printf("\n");

    // Calcula a densidade populacional
    densidade_populacional = populacao_cidade / area_cidade;

    // Calcula o PIB per cápita
    pib_per_capita = pib_cidade / populacao_cidade;

    // Exibe os dados da carta cadastrada
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao_cidade);
    printf("Área: %.2f\n", area_cidade);
    printf("PIB: %.2f\n", pib_cidade);
    printf("Número de Pontos Turísticos: %d\n", quantidade_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional);
    printf("PIB per Cápita: %.2f reais\n", pib_per_capita);
    printf("\n\n");


    /*
    -----------------------------
    Cadastro da segunda carta
    -----------------------------
    */
    // Inicializa variáveis novamente
    estado = '\0';
    strcpy(codigo_carta, "");
    strcpy(nome_cidade, "");
    populacao_cidade = 0;
    area_cidade = 0.0;
    pib_cidade = 0.0;
    quantidade_pontos_turisticos = 0;
    densidade_populacional = 0.0;
    pib_per_capita = 0.0;

    printf("Cadastre a segunda carta do jogo...\n");

    // Solicita a representação de um estado
    printf("Digite uma letra de A a H para representar um estado brasileiro: ");
    scanf(" %c", &estado);
    getchar();  // Limpa o '\n' no buffer

    // Solicita o código da carta
    printf("Digite o código da carta com a letra do estado seguida de um número de 01 a 04 (Ex.: A01): ");
    scanf("%3s", codigo_carta);
    getchar();

    // Solicita o nome da cidade  
    printf("Digite o nome da cidade contendo apenas uma palavra: ");
    fgets(nome_cidade, 60, stdin);
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0';

    // Solicita a população
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_cidade);
    getchar();

    // Solicita a área da cidade em km2
    printf("Digite a área da cidade em km2: ");
    scanf("%f", &area_cidade);
    getchar();

    // Solicita o PIB da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_cidade);
    getchar();

    // Solicita o número de pontos turísticos da cidade
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &quantidade_pontos_turisticos);
    getchar();
    printf("\n");

    // Calcula a densidade populacional
    densidade_populacional = populacao_cidade / area_cidade;

    // Calcula o PIB per cápita
    pib_per_capita = pib_cidade / populacao_cidade;

    // Exibe os dados da carta cadastrada
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao_cidade);
    printf("Área: %.2f\n", area_cidade);
    printf("PIB: %.2f\n", pib_cidade);
    printf("Número de Pontos Turísticos: %d\n", quantidade_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional);
    printf("PIB per Cápita: %.2f reais\n", pib_per_capita);
    printf("\n\n");

    return 0;

}