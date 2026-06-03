/*Para o desafio final, as peças que utilizam loops simples terão seus códigos trocados por funções recursivas
e a movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas
permitindo o uso de continue e break.*/


#include <stdio.h>

void movertorre(int casas) {
    if (casas > 0)
    {
        //vai mover a Torre 5 casas a direita
        movertorre(casas - 1);
        printf("Torre movel %d a direita\n", casas);
    }

}

void moverbispo(int casas){
    if (casas > 0)
    {
        //vai mover o Bispo 5 casas na diagonal direita para cima
        moverbispo(casas - 1);
        printf("Bispo movel %d casas na diagonal direita para cima\n", casas);
    }
    
}

void moverrainha(int casas){
    if (casas > 0)
    { 
        //vai mover a Rainha 8 casas a esquerda
        moverrainha(casas - 1);
        printf("Rainha movel %d casas para a esquerda\n", casas);
    }

}

void movercavalo (int casas){
    if (casas > 0)
    {  
        //vai mover o Cavalo 1 casa em L para cima a direita
        movercavalo(casas - 1);
        printf("Cavalo movel %d em L para cima a direita\n",casas);
    }

}
int main (){
// casas que vão ser declaradas no código a cima
movertorre(5);
moverbispo(5);
moverrainha(8);
movercavalo(1);

}