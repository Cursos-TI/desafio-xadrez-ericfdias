#include <stdio.h>

int main(void) {
    int i;
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    printf("Desafio: Movimento de Xadrez\n\n");

    printf("Movimento da Torre:\n");
    for (i = 1; i <= casas_torre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    printf("Movimento do Bispo:\n");
    i = 1;
    while (i <= casas_bispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    printf("\n");

    printf("Movimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda (%d)\n", i);
        i++;
    } while (i <= casas_rainha);

    return 0;
}
