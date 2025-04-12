#include <stdio.h>

// Procedimentos das movimentações  das peças de xadrez.
void movimentoDaRainha(int rainhaMover){
    if(rainhaMover < 4){
        printf("Direita \n");
        movimentoDaRainha(rainhaMover + 1);
    }
}

void movimentoDaTorre(int torreMover){
    if(torreMover > 6){
        printf("Direita\n");
        movimentoDaTorre(torreMover - 1);
    }
}

void movimentoDoBispo(int bispoMover){
    for(bispoMover; bispoMover < 4; bispoMover++){
        printf("Cima\n");
        int horizontal = bispoMover;
        for(horizontal; horizontal == bispoMover; horizontal--){
            printf("Esquerda\n");
        }
    }
}
// execução principal
int main() {

    // iniciando o movimento das peças.
    printf("*** movimento das peças de xadrez ***\n");
    int bispoMover = 1, torreMover = 1, rainhaMover = 1, cavaloMover = 1;

    // uso do procedimento
    printf("Movimento da Torre:\n");
    movimentoDaTorre(torreMover);

    // uso do procedimento
    printf("\n\nMovimento do Bispo:\n");
    movimentoDoBispo(bispoMover);

    // uso do procedimento
    printf("\n\nMovimento da Rainha:\n");
    movimentoDaRainha(rainhaMover);

    // estrutura de repetição aninhada com condição múltipla
    printf("\n\nMovimento do Cavalo:\n");
    for(cavaloMover; cavaloMover < 3; cavaloMover++){
        printf("Cima\n");
        for(int i = 1; cavaloMover > i && i % 2 != 0; i++){
            printf("Direita\n");
        }
    }
    
        return 0;
}
