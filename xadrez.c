#include <stdio.h>
#include <stdlib.h>

// Constantes para o tamanho do tabuleiro
#define TAMANHO_TABULEIRO 8

// Função para movimento da Torre usando for
void movimentoTorre() {
    int i;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }
}

// Função para movimento do Bispo usando while
void movimentoBispo() {
    int casas = 0;
    printf("\nMovimento do Bispo (5 casas na diagonal superior direita):\n");
    while (casas < 5) {
        printf("Cima, Direita\n");
        casas++;
    }
}

// Função para movimento da Rainha usando do-while
void movimentoRainha() {
    int casas = 0;
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        casas++;
    } while (casas < 8);
}

// Função para movimento do Cavalo com loops complexos
void movimentoCavalo() {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 1; j++) {
            if (i == 0) {
                printf("Cima\n");
                continue;
            }
            if (i == 1) {
                printf("Direita\n");
                break;
            }
        }
    }
}

// Função para movimento do Bispo com loops aninhados
void movimentoBispoLoops() {
    int i, j;
    for (i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (i == j) {
                printf("Diagonal Superior Direita\n");
            }
            if (i + j == TAMANHO_TABULEIRO - 1) {
                printf("Diagonal Superior Esquerda\n");
            }
        }
    }
}

int main() {
    // Executa os movimentos das peças
    movimentoTorre();
    movimentoBispo();
    movimentoRainha();
    
    printf("Movimento do Cavalo:\n");
    movimentoCavalo();
    printf("\n");
    
    printf("Movimento do Bispo (Loops Aninhados):\n");
    movimentoBispoLoops();
    
    return 0;
} 