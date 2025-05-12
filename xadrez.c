#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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
    bispo = 1;
    printf("Bispo move 5 casas para a diagonal direita\n");
    while (bispo <= mov_bispo){
        printf("Para cima %d\n", bispo);
        printf("Para direita %d\n", bispo);
        bispo ++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //Repetição para movimenta da torre
    printf("Torre move 5 casas para a direita\n");
    for (torre = 1; torre <= mov_torre; torre++){
        printf("Para direita %d\n", torre);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    rainha = 1;
    printf("Rainha move 8 casas para a esquerda\n");
    do {
        printf("Para esquerda %d\n", rainha);
        rainha++;
    } while (rainha <= mov_rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    cavalo_v = 1;
    printf("Cavalo move 2 casas para baixo 2 e 1 casa para esquerda\n");
    for (cavalo_h = 1; cavalo_h <= mov_cavalo_h; cavalo_h++){
        do {
            printf("Para baixo %d\n", cavalo_v);
            cavalo_v++;
        } while (cavalo_v <= mov_cavalo_v);
        printf("Para esquerda %d\n", cavalo_h);
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
