#include <stdio.h>

int main()
{
    // ----------------------------
    // Torre - usando FOR
    // ----------------------------
    int casasTorre = 5; //número de casa que a torre vai andar
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ----------------------------
    // Bispo - usando WHILE
    // ----------------------------
    int casasBispo = 5; //número de casas que o bispo vai andar
    int j = 1;
    printf("\nMovimento do Bispo:\n");
    while (j <= casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }
    
    // ----------------------------
    // Rainha - usando DO...WHILE
    // ----------------------------
    int casasRainha = 8; //número de casas que a Rainha vai andar
    int k = 1;
    printf("\nMovimento da Rainha\n");
    do
    {
       printf("Esquerda\n");
       k++;
    } while (k <= casasRainha);
    
    


    return 0;
}
