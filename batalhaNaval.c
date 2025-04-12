#include <stdio.h>

#define TAM 10

// Função para imprimir qualquer matriz
void imprimirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função que exibe coordenadas de dois navios fixos
void exibirCoordenadasNavios() {
    int navioHorizontal[1][3] = { {2, 3, 4} };
    int navioVertical[3][1] = { {5}, {5}, {5} };

    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < 3; i++) {
        printf("(0,%d)\n", navioHorizontal[0][i]);
    }

    printf("Coordenadas do navio vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d,5)\n", i);
    }
}

// Função que monta e exibe o tabuleiro com navios posicionados
void montarTabuleiroComNavios() {
    int tabuleiro[TAM][TAM] = {0};

    for (int i = 0; i < 4; i++) tabuleiro[2][i] = 3;        // Navio horizontal
    for (int i = 4; i < 8; i++) tabuleiro[i][7] = 3;        // Navio vertical
    for (int i = 0; i < 4; i++) tabuleiro[i][i] = 3;        // Diagonal principal
    for (int i = 0; i < 4; i++) tabuleiro[i][9 - i] = 3;    // Diagonal secundária

    printf("\nTabuleiro com navios posicionados:\n");
    imprimirMatriz(tabuleiro);
}

// Função que exibe padrões de habilidades especiais
void exibirPadroesDeHabilidade() {
    int cone[TAM][TAM] = {0};
    int cruz[TAM][TAM] = {0};
    int octaedro[TAM][TAM] = {0};

    // Cone
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < 5; j++) cone[2][j] = 1;

    // Cruz
    for (int i = 0; i < 5; i++) cruz[2][i] = 1;
    cruz[0][2] = cruz[1][2] = cruz[3][2] = cruz[4][2] = 1;

    // Octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    printf("\nPadrão Cone:\n");
    imprimirMatriz(cone);

    printf("\nPadrão Cruz:\n");
    imprimirMatriz(cruz);

    printf("\nPadrão Octaedro:\n");
    imprimirMatriz(octaedro);
}

// Função principal
int main() {
    exibirCoordenadasNavios();
    montarTabuleiroComNavios();
    exibirPadroesDeHabilidade();
    return 0;
}