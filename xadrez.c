#include <stdio.h>

// Desafio: Nível Aventureiro
// Movimentando o Cavalo
// Aluno: Vinícius Silva (BrokeNz7)


// Constantes para quantidade de casas que cada peça se move
#define MOV_BISPO 5    // Bispo: 5 casas na diagonal superior direita
#define MOV_TORRE 5    // Torre: 5 casas para a direita
#define MOV_RAINHA 8   // Rainha: 8 casas para a esquerda
#define MOV_CAVALO_VERTICAL 2   // Cavalo: 2 casas para baixo
#define MOV_CAVALO_HORIZONTAL 1 // Cavalo: 1 casa para a esquerda (por vez)

int main() {
    int i; // Variável de controle externa

    // =============================================
    // 1. Movimentação do BISPO (diagonal superior direita) - reaproveitado
    // =============================================
    printf("=== Movimentacao do Bispo (5 casas - diagonal superior direita) ===\n");
    for (i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // =============================================
    // 2. Movimentação da TORRE (5 casas para a direita) - reaproveitado
    // =============================================
    printf("\n=== Movimentacao da Torre (5 casas - direita) ===\n");
    i = 0;
    while (i < MOV_TORRE) {
        printf("Direita\n");
        i++;
    }

    // =============================================
    // 3. Movimentação da RAINHA (8 casas para a esquerda) - reaproveitado
    // =============================================
    printf("\n=== Movimentacao da Rainha (8 casas - esquerda) ===\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < MOV_RAINHA);

    // =============================================
    // 4. NÍVEL AVENTUREIRO - Movimentação do CAVALO em L
    // Movimento em L: 2 para baixo + 1 para a esquerda (repetido)
    // Usando loops aninhados (for externo + while interno)
    // =============================================
    printf("\n=== Movimentacao do Cavalo (em L - 2 para baixo, 1 para esquerda) ===\n");

    // Loop externo: controla quantas vezes o cavalo faz o movimento completo em L
    for (i = 0; i < 3; i++) {  // Faz 3 movimentos em L (pode mudar se quiser mais)
        int j = 0;

        // Primeiro: 2 casas para baixo
        while (j < MOV_CAVALO_VERTICAL) {
            printf("Baixo\n");
            j++;
        }

        // Depois: 1 casa para a esquerda
        printf("Esquerda\n");

        printf("--- Fim de um movimento em L ---\n");
    }

    printf("\nTodas as movimentacoes foram executadas com sucesso!\n");

    return 0;
}