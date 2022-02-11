/*
 * Escreva um programa que le 10 números inteiros e os salva em um vetor.
 * Em seguida o programa deve encontrar a posicao do maior elemento do vetor e
 * imprimir esta posicao.
 */

#include <stdio.h>

int main( )
{
    int v[10];
    int i, pos_maior=0;

    for(i=0; i<10; i++)
        scanf("%d", &v[i]);

    for(i=1; i<10; i++) {
        if(v[i] > v[pos_maior]) {
            pos_maior = i;
        }
    }

    printf("\nMaior valor = %d", v[pos_maior]);
    printf("\nPosicao do maior elemento = %d", pos_maior);

    return 0;
}
