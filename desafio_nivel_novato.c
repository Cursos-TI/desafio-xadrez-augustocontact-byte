#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // declaração
int torre2 = 1;
int torre3 = 1;
// linha inicial de código em for
for ( int i = 1; i <= 5; i++ /* incremento*/ )
{
    printf("A torre se movel: %d para cima\n", i);
    // vai se mover 5 casas para frente
}
printf("Agora o Bispo\n");
// linha da metade em while
while (torre2 <= 5)
{
    printf("O bispo se movel: %d na diagonal direita\n", torre2);
    // vai se mover 5 casas a diagonal direita
    torre2++;// incremento
}
printf("Agora a Rainha\n");
// linha final em Do_while
do
{
    printf("A Rainha se movel: %d a esquerda\n", torre3);
    torre3++; // incremento
} while (torre3 <= 8);// vai se mover 8 casas a esquerda



}