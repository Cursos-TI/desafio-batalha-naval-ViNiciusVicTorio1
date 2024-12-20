#include <stdio.h>

int main() {
    // Dimensões do tabuleiro
    int tabuleiro[10][10] = {0};

    // Coordenadas do navio vertical (tamanho 3)
    int navio_vertical_x = 2;
    int navio_vertical_y = 3;

    // Coordenadas do navio horizontal (tamanho 4)
    int navio_horizontal_x = 5;
    int navio_horizontal_y = 6;

    // Posicionando o navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio_vertical_x + i][navio_vertical_y] = 1;
    }

    // Posicionando o navio horizontal
    for (int i = 0; i < 4; i++) {
        tabuleiro[navio_horizontal_x][navio_horizontal_y + i] = 1;
    }

    // Exibindo as coordenadas dos navios
    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", navio_vertical_x + i, navio_vertical_y);
    }

    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < 4; i++) {
        printf("(%d, %d)\n", navio_horizontal_x, navio_horizontal_y + i);
    }

    return 0;
}