#include <stdio.h>

// Desafio: Nível Mestre
// Criando Movimentos Complexos
// Aluno: Vinícius Silva (BrokeNz7)

// Constantes para quantidade de casas
#define MOV_BISPO 5    // Bispo: 5 casas na diagonal superior direita
#define MOV_TORRE 5    // Torre: 5 casas para a direita
#define MOV_RAINHA 8   // Rainha: 8 casas para a esquerda

// =============================================
// FUNÇÕES RECURSIVAS (Torre, Rainha)
// =============================================
void mover_torre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    mover_torre(casas - 1);
}

void mover_rainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}

// =============================================
// BISPO: Loops aninhados (externo vertical, interno horizontal)
// =============================================
void mover_bispo_loops() {
    int vertical, horizontal;

    printf("\n=== Movimentacao do Bispo (5 casas - diagonal superior direita) ===\n");
    for (vertical = 0; vertical < MOV_BISPO; vertical++) {        // Loop externo: vertical (Cima)
        printf("Cima\n");

        for (horizontal = 0; horizontal < 1; horizontal++) {       // Loop interno: horizontal (Direita)
            printf("Direita\n");
        }
    }
}

// =============================================
// CAVALO: Loops aninhados com múltiplas variáveis + continue/break
// Movimento em L: 2 casas para cima + 1 casa para a direita
// =============================================
void mover_cavalo() {
    int etapa = 0;           // Controla qual parte do L está sendo executada
    int contador_cima = 0;
    int contador_direita = 0;

    printf("\n=== Movimentacao do Cavalo (1 movimento em L - 2 cima + 1 direita) ===\n");

    while (etapa < 2) {  // 2 etapas: cima e direita
        if (etapa == 0) {
            // 2 casas para cima
            for (contador_cima = 0; contador_cima < 2; contador_cima++) {
                printf("Cima\n");
                if (contador_cima == 1) {
                    // Exemplo de break (interrompe após 2 casas)
                    break;
                }
            }
            etapa++;
            continue;  // Pula direto pra próxima etapa (direita)
        }

        if (etapa == 1) {
            // 1 casa para a direita
            while (contador_direita < 1) {
                printf("Direita\n");
                contador_direita++;
            }
            etapa++;
        }
    }

    printf("--- Movimento em L concluído ---\n");
}

int main() {
    // =============================================
    // EXECUÇÃO DAS MOVIMENTAÇÕES
    // =============================================
    printf("=== Movimentacao do Bispo (loops aninhados) ===\n");
    mover_bispo_loops();

    printf("\n=== Movimentacao da Torre (recursiva) ===\n");
    mover_torre(MOV_TORRE);

    printf("\n=== Movimentacao da Rainha (recursiva) ===\n");
    mover_rainha(MOV_RAINHA);

    // Movimentação do Cavalo com loops complexos
    mover_cavalo();

    printf("\nTodas as movimentações do Nível Mestre foram executadas com sucesso!\n");

    return 0;
}