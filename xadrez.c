#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para mover o bispo com loops aninhados
void f_bispo(int n) {
    
    if (n <= 0 ) return;

    int bispo_v;
    int bispo_h=1;
    
    for(bispo_v = 1; bispo_v <= n; bispo_v++){
        printf("Para cima\n");
        do {
            printf("Para direita\n");
            bispo_h++;
        } while(bispo_h <= bispo_v);
    }

    f_bispo(n - n);
}

void f_torre(int m) {

    if (m <= 0) return;
    printf("Para direita\n");
    f_torre(m-1);
}

void f_rainha(int r) {

    if (r <= 0) return;
    printf("Para esquerda\n");
    f_rainha(r-1);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int torre, bispo, rainha, cavalo_h, cavalo_v;

    int mov_torre = 5;
    int mov_bispo = 5;
    int mov_rainha = 8;
    int mov_cavalo_h = 1;
    int mov_cavalo_v = 2;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // bispo = 1;
    // printf("Bispo move 5 casas para a diagonal direita\n");
    // while (bispo <= mov_bispo){
    //    printf("Para cima %d\n", bispo);
    //    printf("Para direita %d\n", bispo);
    //    bispo ++;
    //}

    printf("Mover bispo na diagonal para cima e direita %d casas\n", mov_bispo);
    f_bispo(mov_bispo);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //Repetição para movimenta da torre
    // printf("Torre move %d casas para a direita\n", mov_torre);
    // for (torre = 1; torre <= mov_torre; torre++){
    //     printf("Para direita %d\n", torre);
    // }
    printf("Torre move %d casas para a direita\n", mov_torre);
    f_torre(mov_torre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // rainha = 1;
    // printf("Rainha move 8 casas para a esquerda\n");
    // do {
    //     printf("Para esquerda %d\n", rainha);
    //     rainha++;
    // } while (rainha <= mov_rainha);
    printf("Rainha move %d casas para a esquerda\n", mov_rainha);
    f_rainha(mov_rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // cavalo_v = 1;
    // printf("Cavalo move 2 casas para baixo 2 e 1 casa para esquerda\n");
    // for (cavalo_h = 1, cavalo_v = 1; cavalo_h <= mov_cavalo_h; cavalo_h++){
    //     do {
    //         printf("Para baixo %d\n", cavalo_v);
    //         cavalo_v++;
    //     } while (cavalo_v <= mov_cavalo_v);
    //     printf("Para esquerda %d\n", cavalo_h);
    // }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("Cavalo move %d casas para cima e %d casa para direita\n", mov_cavalo_v, mov_cavalo_h );

    cavalo_v = 1;
    for (cavalo_h = 1; cavalo_h <= mov_cavalo_h; cavalo_h++){
        do {
        printf("Para cima %d\n", cavalo_v);
        cavalo_v++;
        } while (cavalo_v <= mov_cavalo_v);
        printf("Para direita %d\n", cavalo_h);
    }

    return 0;
}
