#include <stdio.h>

// Desafio: Nível Novato
// Movimentando as Peças do xadrez
// Aluno: Vinícius Silva (BrokeNz7)

// Constantes para quantidade de casas que cada peça se move
#define MOV_BISPO 5    // Bispo: 5 casas na diagonal superior direita
#define MOV_TORRE 5    // Torre: 5 casas para a direita
#define MOV_RAINHA 8   // Rainha: 8 casas para a esquerda

int main() {
    int i; // Variável de controle para os loops

    // =============================================
    // 1. Movimentação do BISPO (diagonal superior direita)
    // Simulação: Cima + Direita (5 vezes)
    // =============================================
    printf("=== Movimentacao do Bispo (5 casas - diagonal superior direita) ===\n");
    for (i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // =============================================
    // 2. Movimentação da TORRE (5 casas para a direita)
    // =============================================
    printf("\n=== Movimentacao da Torre (5 casas - direita) ===\n");
    i = 0;
    while (i < MOV_TORRE) {
        printf("Direita\n");
        i++;
    }

    // =============================================
    // 3. Movimentação da RAINHA (8 casas para a esquerda)
    // =============================================
    printf("\n=== Movimentacao da Rainha (8 casas - esquerda) ===\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < MOV_RAINHA);

    printf("\nTodas as movimentacoes foram executadas com sucesso!\n");

    return 0;
}