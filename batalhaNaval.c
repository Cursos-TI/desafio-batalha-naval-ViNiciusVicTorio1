#include <stdio.h>

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para aplicar uma habilidade no tabuleiro
void aplicarHabilidade(int tabuleiro[10][10], int habilidade[5][5], int x, int y) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (habilidade[i][j] == 1 && x + i < 10 && y + j < 10) {
                tabuleiro[x + i][y + j] = 1;
            }
        }
    }
}

int main() {
    // Dimensões do tabuleiro
    int tabuleiro[10][10] = {0};

    // Coordenadas dos navios
    int navio_vertical_x = 2, navio_vertical_y = 3;
    int navio_horizontal_x = 5, navio_horizontal_y = 6;
    int navio_diagonal1_x = 0, navio_diagonal1_y = 0;
    int navio_diagonal2_x = 9, navio_diagonal2_y = 0;

    // Posicionando o navio vertical (tamanho 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_vertical_x + i][navio_vertical_y] = 3;
    }

    // Posicionando o navio horizontal (tamanho 4)
    for (int i = 0; i < 4; i++) {
        tabuleiro[navio_horizontal_x][navio_horizontal_y + i] = 3;
    }

    // Posicionando o navio diagonal 1 (tamanho 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_diagonal1_x + i][navio_diagonal1_y + i] = 3;
    }

    // Posicionando o navio diagonal 2 (tamanho 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_diagonal2_x - i][navio_diagonal2_y + i] = 3;
    }

    // Matrizes para habilidades especiais
    int cone[5][5] = { 
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int cruz[5][5] = { 
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int octaedro[5][5] = { 
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    // Aplicando habilidades no tabuleiro
    aplicarHabilidade(tabuleiro, cone, 1, 1);
    aplicarHabilidade(tabuleiro, cruz, 4, 4);
    aplicarHabilidade(tabuleiro, octaedro, 7, 7);

    // Exibindo o tabuleiro completo
    printf("Tabuleiro:\n");
    exibirTabuleiro(tabuleiro);

    return 0;
}