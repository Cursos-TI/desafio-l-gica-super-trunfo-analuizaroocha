#include <stdio.h>

int main() {
    // Variáveis para as cartas
    char pais1[50], pais2[50];
    int populacao1, populacao2, pontos1, pontos2, opcao;
    float area1, area2, pib1, pib2, densidade1, densidade2;

    // --- CADASTRO DA CARTA 1 ---
    printf("### Cadastro da Carta 1 ###\n");
    printf("Digite o nome do país: ");
    scanf("%s", pais1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);
    densidade1 = (float) populacao1 / area1;

    printf("\n--- Carta 1 cadastrada! ---\n\n");

    // --- CADASTRO DA CARTA 2 ---
    printf("### Cadastro da Carta 2 ###\n");
    printf("Digite o nome do país: ");
    scanf("%s", pais2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);
    densidade2 = (float) populacao2 / area2;

    printf("\n--- Carta 2 cadastrada! ---\n\n");

    // --- MENU INTERATIVO ---
    printf("Escolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // --- LÓGICA DE COMPARAÇÃO COM SWITCH ---
    switch (opcao) {
        case 1: // População
            printf("\nAtributo: População\n");
            printf("%s: %d vs %s: %d\n", pais1, populacao1, pais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao1 < populacao2) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("\nAtributo: Área\n");
            printf("%s: %.2f vs %s: %.2f\n", pais1, area1, pais2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area1 < area2) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("\nAtributo: PIB\n");
            printf("%s: %.2f vs %s: %.2f\n", pais1, pib1, pais2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib1 < pib2) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("\nAtributo: Pontos Turísticos\n");
            printf("%s: %d vs %s: %d\n", pais1, pontos1, pais2, pontos2);
            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontos1 < pontos2) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade (MENOR VENCE)
            printf("\nAtributo: Densidade Demográfica\n");
            printf("%s: %.2f vs %s: %.2f\n", pais1, densidade1, pais2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (densidade1 > densidade2) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("\nOpção inválida! Reinicie o programa.\n");
    }

    return 0;
}