// manipulação de variavel 

#include <stdio.h>

int main() {
    int inteiro = 42;
    float decimal = 123.4567;
    char texto[] = "C";

    printf("-------------------------------------------------------------\n");
    printf("| %-20s | %-25s |\n", "Descrição", "Saída");
    printf("-------------------------------------------------------------\n");

    // Inteiros
    printf("| Inteiro normal           | %25d |\n", inteiro);
    printf("| Inteiro com largura 5    | %25d |\n", inteiro);
    printf("| Inteiro com zeros (05)   | %025d |\n", inteiro);
    printf("| Inteiro com sinal        | %25+5d |\n", inteiro);
    printf("| Inteiro alinhado à esq.  | %-25d |\n", inteiro);

    // Float
    printf("| Float 2 casas decimais   | %25.2f |\n", decimal);
    printf("| Float 1 casa decimal     | %25.1f |\n", decimal);
    printf("| Float com largura fixa   | %25.2f |\n", decimal);
    printf("| Float alinhado à esq.    | %-25.2f |\n", decimal);

    // Strings
    printf("| Texto com largura 10     | %25s |\n", texto);
    printf("| Texto alinhado à esq.    | %-25s |\n", texto);

    // Outros
    printf("| Hexadecimal minúsculo    | %25x |\n", inteiro);
    printf("| Hexadecimal maiúsculo    | %25X |\n", inteiro);
    printf("| Octal                    | %25o |\n", inteiro);

    printf("-------------------------------------------------------------\n");

    return 0;
}
/*-------------------------------------------------------------
| Descrição              | Saída                     |
-------------------------------------------------------------
| Inteiro normal         |                        42 |
| Inteiro com largura 5  |                        42 |
| Inteiro com zeros (05) | 0000000000000000000000042 |
| Inteiro com sinal      |                       +42 |
| Inteiro alinhado à esq.| 42                       |
| Float 2 casas decimais |                   123.46 |
| Float 1 casa decimal   |                    123.5 |
| Float com largura fixa |                   123.46 |
| Float alinhado à esq.  | 123.46                  |
| Texto com largura 10   |                        C |
| Texto alinhado à esq.  | C                        |
| Hexadecimal minúsculo  |                        2a |
| Hexadecimal maiúsculo  |                        2A |
| Octal                  |                        52 |
-------------------------------------------------------------
*/