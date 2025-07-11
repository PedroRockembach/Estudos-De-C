#include <stdio.h>

// Define o tamanho do tabuleiro
#define TAM 3

// Função para mostrar o tabuleiro
void mostrar_tabuleiro(char tabuleiro[TAM][TAM]) {
    printf("\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf(" %c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para verificar se houve vitória
char verificar_vitoria(char tabuleiro[TAM][TAM]) {
    // Verifica linhas e colunas
    for (int i = 0; i < TAM; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != '*')
            return tabuleiro[i][0];
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != '*')
            return tabuleiro[0][i];
    }

    // Verifica diagonais
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != '*')
        return tabuleiro[0][0];
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != '*')
        return tabuleiro[0][2];

    // Nenhum vencedor
    return '*';
}

// Função para verificar se o jogo deu velha (empate)
int deu_velha(char tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            if (tabuleiro[i][j] == '*')
                return 0; // Ainda há jogadas possíveis
    return 1; // Não há mais jogadas
}

int main() {
    char tabuleiro[TAM][TAM];
    int linha, coluna;
    char jogador_atual = 'X';
    char vencedor = '*';

    // Inicializa o tabuleiro com *
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = '*';

    printf("===== JOGO DA VELHA =====\n");
    mostrar_tabuleiro(tabuleiro);

    // Loop principal do jogo
    while (1) {
        printf("Jogador %c, informe linha e coluna (0 a 2): ", jogador_atual);
        scanf("%d %d", &linha, &coluna);

        // Verifica se a jogada é válida
        if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM) {
            printf("Posição inválida. Tente novamente.\n");
            continue;
        }

        if (tabuleiro[linha][coluna] != '*') {
            printf("Posição já ocupada. Tente novamente.\n");
            continue;
        }

        // Marca a jogada
        tabuleiro[linha][coluna] = jogador_atual;

        // Mostra o tabuleiro atualizado
        mostrar_tabuleiro(tabuleiro);

        // Verifica se houve vencedor
        vencedor = verificar_vitoria(tabuleiro);
        if (vencedor != '*') {
            printf("Jogador %c venceu!\n", vencedor);
            break;
        }

        // Verifica se deu velha
        if (deu_velha(tabuleiro)) {
            printf("Deu velha! Empate.\n");
            break;
        }

        // Alterna jogador
        jogador_atual = (jogador_atual == 'X') ? 'O' : 'X';
    }

    return 0;
}
