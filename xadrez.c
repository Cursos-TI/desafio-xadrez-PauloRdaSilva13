// #include <stdio.h>

// int main() {

//     // Quantidade de casas que cada peça irá se mover
//     int casasTorre = 5;
//     int casasBispo = 5;
//     int casasRainha = 8;

//     int i;

//     // =========================
//     // Movimento da Torre (for)
//     // 5 casas para a direita
//     // =========================
//     printf("Movimento da Torre:\n");

//     for (i = 1; i <= casasTorre; i++) {
//         printf("Direita\n");
//     }

//     // =========================
//     // Movimento do Bispo (while)
//     // 5 casas na diagonal
//     // =========================
//     printf("\nMovimento do Bispo:\n");

//     i = 1;
//     while (i <= casasBispo) {
//         printf("Cima, Direita\n");
//         i++;
//     }

//     // =========================
//     // Movimento da Rainha (do-while)
//     // 8 casas para a esquerda
//     // =========================
//     printf("\nMovimento da Rainha:\n");

//     i = 1;
//     do {
//         printf("Esquerda\n");
//         i++;
//     } while (i <= casasRainha);

//     return 0;
// }

#include <stdio.h>

int main() {

    // Quantidade de movimentos do cavalo
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo (for) controla o movimento vertical
    for (int i = 1; i <= movimentosBaixo; i++) {
        printf("Baixo\n");

        // Após completar as duas casas para baixo,
        // executa o movimento para a esquerda.
        if (i == movimentosBaixo) {
            int j = 1;

            // Loop interno (while)
            while (j <= movimentosEsquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}