#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {

    // Exibir caracteres com acentos
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Atribui e inicializa variáveis
    char estado1[15] = "";
    char codigo_carta1[4] = "";
    char nome_cidade1[20] = "";
    unsigned long int populacao_cidade1 = 0;
    float area_cidade1 = 0;
    float pib_cidade1 = 0;
    int quantidade_pontos_turisticos1 = 0;
    float densidade_populacional1 = 0.0;
    float pib_per_capita1 = 0.0;
    float super_poder1 = 0.0;

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
    printf("Digite o nome do estado brasileiro: ");
    scanf("%s", &estado1);
    getchar();  // Limpa o '\n' no buffer

    // Solicita o código da carta
    printf("Digite o código da carta com a letra do estado seguida de um número de 01 a 04 (Ex.: A01): ");
    scanf("%3s", codigo_carta1);
    getchar();

    // Solicita o nome da cidade  
    printf("Digite o nome da cidade contendo apenas uma palavra: ");
    fgets(nome_cidade1, 60, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';

    // Solicita a população
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_cidade1);
    getchar();

    // Solicita a área da cidade em km2
    printf("Digite a área da cidade em km2: ");
    scanf("%f", &area_cidade1);
    getchar();

    // Solicita o PIB da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_cidade1);
    getchar();

    // Solicita o número de pontos turísticos da cidade
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &quantidade_pontos_turisticos1);
    getchar();
    printf("\n");

    // Calcula a densidade populacional
    densidade_populacional1 = populacao_cidade1 / area_cidade1;

    // Calcula o PIB per cápita
    pib_per_capita1 = pib_cidade1 / populacao_cidade1;

    // Calcula o super poder da carta 1   
    super_poder1 = (float) populacao_cidade1 + area_cidade1 + pib_cidade1 + (float) quantidade_pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    // Exibe os dados da carta cadastrada
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao_cidade1);
    printf("Área: %.2f\n", area_cidade1);
    printf("PIB: %.2f\n", pib_cidade1);
    printf("Número de Pontos Turísticos: %d\n", quantidade_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Cápita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    printf("\n\n");

    /*
    -----------------------------
    Cadastro da segunda carta
    -----------------------------
    */

    // Atribui e inicializa variáveis
    char estado2[15] = "";
    char codigo_carta2[4] = "";
    char nome_cidade2[20] = "";
    unsigned long int populacao_cidade2 = 0;
    float area_cidade2 = 0;
    float pib_cidade2 = 0;
    int quantidade_pontos_turisticos2 = 0;
    float densidade_populacional2 = 0.0;
    float pib_per_capita2 = 0.0;
    float super_poder2 = 0.0;

    printf("Cadastre a segunda carta do jogo...\n");

    // Solicita a representação de um estado
    printf("Digite o nome do estado brasileiro: ");
    scanf(" %s", &estado2);
    getchar();  // Limpa o '\n' no buffer

    // Solicita o código da carta
    printf("Digite o código da carta com a letra do estado seguida de um número de 01 a 04 (Ex.: A01): ");
    scanf("%3s", codigo_carta2);
    getchar();

    // Solicita o nome da cidade  
    printf("Digite o nome da cidade contendo apenas uma palavra: ");
    fgets(nome_cidade2, 60, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

    // Solicita a população
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao_cidade2);
    getchar();

    // Solicita a área da cidade em km2
    printf("Digite a área da cidade em km2: ");
    scanf("%f", &area_cidade2);
    getchar();

    // Solicita o PIB da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_cidade2);
    getchar();

    // Solicita o número de pontos turísticos da cidade
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &quantidade_pontos_turisticos2);
    getchar();
    printf("\n");

    // Calcula a densidade populacional
    densidade_populacional2 = populacao_cidade2 / area_cidade2;

    // Calcula o PIB per cápita
    pib_per_capita2 = pib_cidade2 / populacao_cidade2;

    // Calcula o super poder da carta 2   
    super_poder2 = (float) populacao_cidade2 + area_cidade2 + pib_cidade2 + (float) quantidade_pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Exibe os dados da carta cadastrada
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao_cidade2);
    printf("Área: %.2f\n", area_cidade2);
    printf("PIB: %.2f\n", pib_cidade2);
    printf("Número de Pontos Turísticos: %d\n", quantidade_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Cápita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    printf("\n\n");

    // Inicializa variáveis dos resultados das comparações de propriedades das cartas
     int resultado_populacao = 0;
     int resultado_area = 0;
     int resultado_pib = 0;
     int resultado_pontos_turisticos = 0;
     int resultado_densidade_populacional = 0;
     int resultado_pib_per_capita = 0;
     int resultado_super_poder = 0;

     // Verifica a carta vencedora para cada propriedade
     resultado_populacao = populacao_cidade1 > populacao_cidade2;
     resultado_area = area_cidade1 > area_cidade2;
     resultado_pib = pib_cidade1 > pib_cidade2;
     resultado_pontos_turisticos = quantidade_pontos_turisticos1 > quantidade_pontos_turisticos2;
     resultado_densidade_populacional = densidade_populacional1 < densidade_populacional2;
     resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
     resultado_super_poder = super_poder1 > super_poder2;

    // Exibe os resultados
    // Carta vencedora no primeiro %d numerada com regra aritmética (2 - resultado da propriedade)
    // Já que neste nível ainda não deve ser usado estrutura de decisão
    printf("%s", "Comparação de Cartas:\n\n");
    printf("População: Carta %d venceu (%d)\n", 2 - resultado_populacao, resultado_populacao);
    printf("Área: Carta %d venceu (%d)\n", 2 - resultado_area, resultado_area);
    printf("PIB: Carta %d venceu (%d)\n", 2 - resultado_pib, resultado_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - resultado_pontos_turisticos, resultado_pontos_turisticos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - resultado_densidade_populacional, resultado_densidade_populacional);
    printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - resultado_pib_per_capita, resultado_pib_per_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", 2 - resultado_super_poder, resultado_super_poder);

    // Escolha de um artibuto para comparar as cartas
    printf("%s", "Comparação de Cartas (Atributo: Pontos Turísticos):\n\n");
    printf("Carta 1 - %s (%s): %d\n", nome_cidade1, estado1, quantidade_pontos_turisticos1);
    printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, quantidade_pontos_turisticos2);

    char cidade_vencedora[20] = "";
    if (resultado_pontos_turisticos == 1) {
        strcpy(cidade_vencedora, nome_cidade1);
    } else {
        strcpy(cidade_vencedora, nome_cidade2);
    }

    printf("Resultado: Carta %d (%s) venceu!", 2 - resultado_pontos_turisticos, cidade_vencedora);

    return 0;

}