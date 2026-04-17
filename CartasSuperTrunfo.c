#include <stdio.h>

int main() {
    // --- VARIÁVEIS CARTA 1 (BAHIA) ---
    char estado1 = 'B';
    char codigo1[] = "B01";
    char cidade1[] = "Salvador";
    int populacao1 = 2418005;
    float area1 = 692.81;
    float pib1 = 63.90; // Exemplo em bilhões
    int pontos1 = 35;

    // --- VARIÁVEIS CARTA 2 (CEARÁ) ---
    char estado2 = 'C';
    char codigo2[] = "C01";
    char cidade2[] = "Fortaleza";
    int populacao2 = 2428678;
    float area2 = 312.35;
    float pib2 = 67.40; // Exemplo em bilhões
    int pontos2 = 28;

    // --- EXIBIÇÃO DOS DADOS ---
    
    printf("--- SUPER TRUNFO: CARTAS CADASTRADAS ---\n\n");

    // Imprimindo Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);

    printf("\n------------------------------\n\n");

    // Imprimindo Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    // --- LÓGICA DE COMPARAÇÃO (SIMPLES) ---
    printf("\n--- RESULTADO DO DUELO (POPULAÇÃO) ---\n");
    
    if (populacao1 > populacao2) {
        printf("Vencedor: %s (Bahia)!\n", cidade1);
    } else {
        printf("Vencedor: %s (Ceará)!\n", cidade2);
    }

    return 0;
}