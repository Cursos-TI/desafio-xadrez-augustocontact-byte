/*Movimentação do Cavalo:

Mover o cavalo em L utilizando loops aninhados. Obs: É obrigatório o uso de loops aninhados.*/

#include <stdio.h>

int main (){
// declaração
int torre2 = 1;
int torre3 = 1;
int cavalo = 1;
printf("Torre\n");
// linha inicial de código em for
for ( int i = 1; i <= 5; i++ /* incremento*/ )
{
    printf("A torre se movel: %d para cima\n", i);
    // vai se mover 5 casas para frente
}
printf("\n");
printf("Agora o Bispo\n");
// linha da metade em while
while (torre2 <= 5)
{
    printf("O bispo se movel: %d na diagonal direita\n", torre2);
    // vai se mover 5 casas a diagonal direita
    torre2++;// incremento
}
printf("\n");
printf("Agora a Rainha\n");
// linha final em Do_while
do
{
    printf("A Rainha se movel: %d a esquerda\n", torre3);
    torre3++; // incremento
} while (torre3 <= 8);// vai se mover 8 casas a esquerda

printf("\n");
printf("Agora o cavalo\n");
// externa
while (cavalo--)//decrementa em -- o valor de 1
{
//interna
    for (int i = 0; i < 2; i++){
        printf("Baixo\n");
    }
//externa
    printf("Esquerda\n");
}

}