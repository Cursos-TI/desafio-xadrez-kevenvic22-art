#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    int movimento_bispo = 1; // O Bispo mve-se na diagona
    int movimento_torre = 1;// A Torre,move-se em linha reta horizontalmente ou verticalmente
    int movimento_rainha = 1; // A Rainha move-se em qualquer direção (horizontal, vertical, diagonal)
    //Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    while (movimento_bispo <= 5)
    {
      printf("Cima Direita\n");
        movimento_bispo++;
    }      
    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    do {
      printf("Direita\n");
        movimento_torre++;
    } while (movimento_torre <= 5);

    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    for (movimento_rainha; movimento_rainha <= 5; movimento_rainha++) {
    
        printf("Diagonal Esquerda\n");
    }
   
    // Nível Aventureiro - Movimentação do Cavalo
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
