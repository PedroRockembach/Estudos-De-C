#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int verificarVitoria(char tabuleiro[3][3], char jogador);

int main() {
    char tabuleiro[3][3];
    char jogadorAtual;
    int jogadas;
    int posicao;
    char jogarNovamente;

    do {
        char posInicial = '1';
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                tabuleiro[i][j] = posInicial++;
            }
        }
        jogadorAtual = 'X';
        int vitoria = 0;

        for (jogadas = 0; jogadas < 9; jogadas++) {
            
            printf("\n--- JOGO DA VELHA ---\n");
            for (int i = 0; i < 3; i++) {
                printf(" ");
                for (int j = 0; j < 3; j++) {
                    char display = (tabuleiro[i][j] != 'X' && tabuleiro[i][j] != 'O') ? '*' : tabuleiro[i][j];
                    printf("%c", display);
                    if (j < 2) printf(" | ");
                }
                printf("\n");
                if (i < 2) {
                    printf("---|---|---\n");
                }
            }
            printf("\n");
            
            while (1) {
                printf("Jogador '%c', escolha uma posição (1-9): ", jogadorAtual);
                scanf("%d", &posicao);
                
                system("cls");

                if (posicao >= 1 && posicao <= 9) {
                    int linha = (posicao - 1) / 3;
                    int coluna = (posicao - 1) % 3;

                    if (tabuleiro[linha][coluna] != 'X' && tabuleiro[linha][coluna] != 'O') {
                        tabuleiro[linha][coluna] = jogadorAtual;
                        break;
                    } else {
                        printf("Posição já ocupada. Tente outra.\n");
                    }
                } else {
                    printf("Posição inválida. Escolha um número de 1 a 9.\n");
                }
            }

            if (verificarVitoria(tabuleiro, jogadorAtual)) {
                printf("\n--- RESULTADO FINAL ---\n");
                // Bloco de exibição final CORRIGIDO para mostrar '*'
                for (int i = 0; i < 3; i++) {
                    printf(" ");
                    for (int j = 0; j < 3; j++) {
                        char display = (tabuleiro[i][j] != 'X' && tabuleiro[i][j] != 'O') ? '*' : tabuleiro[i][j];
                        printf("%c", display);
                        if (j < 2) printf(" | ");
                    }
                    printf("\n");
                    if (i < 2) {
                        printf("---|---|---\n");
                    }
                }
                printf("\n*** Jogador '%c' venceu! ***\n", jogadorAtual);
                vitoria = 1;
                break;
            }

            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
        }

        if (vitoria == 0) {
            printf("\n--- RESULTADO FINAL ---\n");
            // Bloco de exibição final CORRIGIDO para mostrar '*'
            for (int i = 0; i < 3; i++) {
                printf(" ");
                for (int j = 0; j < 3; j++) {
                    char display = (tabuleiro[i][j] != 'X' && tabuleiro[i][j] != 'O') ? '*' : tabuleiro[i][j];
                    printf("%c", display);
                    if (j < 2) printf(" | ");
                }
                printf("\n");
                if (i < 2) {
                    printf("---|---|---\n");
                }
            }
            printf("\n*** Deu velha! (Empate) ***\n");
        }

        printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &jogarNovamente);

    } while (jogarNovamente == 's' || jogarNovamente == 'S');

    printf("\nObrigado por jogar!\n");
    return 0;
}

int verificarVitoria(char tabuleiro[3][3], char jogador) {
    for (int i = 0; i < 3; i++) {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)) {
            return 1;
        }
    }
    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return 1;
    }
    return 0;
}