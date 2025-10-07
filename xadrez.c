#include <stdio.h>

int main()
{
    // ----------------------------
    // Torre - usando FOR
    // ----------------------------
    int casasTorre = 5; // número de casa que a torre vai andar
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++)
    {
        printf("Direita\n");
    }

    // ----------------------------
    // Bispo - usando WHILE
    // ----------------------------
    int casasBispo = 5; // número de casas que o bispo vai andar
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= casasBispo)
    {
        printf("Cima, Direita\n");
        j++;
    }

    // ----------------------------
    // Rainha - usando DO...WHILE
    // ----------------------------
    int casasRainha = 8; // número de casas que a Rainha vai andar
    int k = 1;
    printf("\nMovimento da Rainha\n");
    do
    {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    // ----------------------------
    // Cavalo - usando loops aninhados
    // ----------------------------

    int casasBaixo = 2;
    int casasEsquerda = 1;
    printf("\nMovimento do Cavalo\n");
    // Loop principal para o movimento para baixo
    for (int i = 1; i <= casasBaixo; i++)
    {
        printf("Baixo\n");

        // Loop aninhado para o movimento perpendicular
        int l = 1;
        while(i == casasBaixo && l<= casasEsquerda) {
            printf("Esquerda\n");
            l++;
        }
    }

    return 0;
}
