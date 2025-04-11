#include <stdio.h>

int main() {
    printf("*** movimento das peças de xadrez ***\n");
    int bispoMover = 1, torreMover = 1, rainhaMover = 1;
    printf("Movimento da Torre:\n");
    while (torreMover < 6){
        printf("Direita(x%d)\n", torreMover);
        torreMover++;
    }

    printf("\n\nMovimento do Bispo:\n");
    do {

        printf(" Cima, Direita(x%d)\n", bispoMover);
        bispoMover++;
    } while(bispoMover < 6);

    printf("\n\nMovimento da Rainha\n");
    for(rainhaMover; rainhaMover < 9; rainhaMover++){
        printf("Direita(x%d)\n", rainhaMover);
    }
        return 0;
}
