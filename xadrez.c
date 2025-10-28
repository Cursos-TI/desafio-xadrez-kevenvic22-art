#include <stdio.h>

 /* Recursividade funciona como um loop, mas de forma diferente 
 ela chama a si mesma até atingir 0 como foi colocado na condição if (casas > 0 ) */
// Recursividade para movimentação da Torre
  void MoverTorre(int casas) {
   if (casas > 0){ // Condição de parada
     printf("Direita\n"); // Exibe os movimentos da torre
     MoverTorre(casas - 1); // Chama a si mesma reduzindo o número de casas
 }
} 
// Recursividade para movimentação da Rainha
 void MoverRainha(int casas) {
   if (casas > 0){ // Condição de parada
     printf("Esquerda\n");// Exibe os movimentos da rainha
     MoverRainha(casas - 1); // Chama a si mesma reduzindo o número de casas
 }
}  
 
// Recursividade para movimentação do Bispo
/* No caso do bispo ele se move na diagonal,foi criar um loops aninhado para representar 
o movimento na vertical e horizontal*/
void MoverBispo(int casas) {
    for (int i = 0; i < casas; i++) { // Loop para movimento vertical
      printf("Cima\n"); // Exibe o movimento para vertical
     for (int j = 0; j < 1; j++) { // Loop para movimento horizontal
       printf("Direita\n");  // Exibe o movimento para horizontal
  }
 } 
}

// Recursividade para movimentação do Cavalo
/* O cavalo se move em "L", ou seja, duas casas em uma direção em seguida uma casa perpendicular.
   Foi criado um loop aninhado para representar esse movimento. */
void MoverCavalo(int vertical, int horizontal) {
        for (int j = 0, vertical = 0; j < 2; j++, vertical++) { // Loop para movimento vertical
            if (vertical > 1) { // Se passar de 2 movimentos
                continue; // Pula para próxima iteração
            }
            printf("Cima\n"); // Exibe o movimento para vertical
            if (vertical >= 1) { // Após 2 movimentos para cima
                break; // Sai do loop vertical
         }
        }
        // Loop para movimento horizontal (1 casa para direita)
        for (int k = 0, horizontal = 0; k < 1; k++, horizontal++) { 
            if (horizontal > 0) { // Se passar de 1 movimento
                continue; // Pula para próxima iteração
            }
            printf("Direita\n");
            if (horizontal >= 0) { // Após 1 movimento para direita
                break; // Sai do loop horizontal
    }
  }
}

int main() {
    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    MoverTorre(5);
    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    MoverRainha(8);
    // Movimentação do Bispo 
    printf("Movimentação do Bispo:\n");
    MoverBispo(5);
   // Movimentação do Cavalo
    printf("Movimentação do Cavalo:\n");
    MoverCavalo(2, 1);
    
    
    return 0;
}
