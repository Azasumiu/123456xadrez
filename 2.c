#include <stdio.h>

// movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// movimento do Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Cavalo
void moverCavalo(int vezes) {
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < vezes; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        }
    }
    printf("\n");
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    moverCavalo(1);

    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    return 0;
}
