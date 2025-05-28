#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int i = 0; i <= 5; 1 <= 8;
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   printf("movimento da torre:\n");
    for (int i = 1; i <= 5; i++) 
    {
        printf("direita\n");
    }
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("\n");

    printf("movimento do bispo:\n");
    int contadorbispo = 1;
    while (contadorbispo <= 5) 
    {
        printf("Cima direita\n");
        contadorbispo++;
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
 printf("\n");

    printf("Movimento da rainha:\n");
    int contadorrainha = 1;
    do {
        printf("Esquerda\n");
        contadorrainha++;
    } while (contadorrainha <= 8);

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
     int movimento_do_cavalo = 1;

   printf("movmento_do_cavalo\n");

   while (movimento_do_cavalo--)
   {
      for (int i = 0; i < 2; i++){
        printf("cima\n");
      }
      printf("direita\n");
   }  
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
