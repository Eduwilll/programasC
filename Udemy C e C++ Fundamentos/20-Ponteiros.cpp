#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    //variavel
    int a = 20;

    //imprindo o valor de uma viriavel
    printf("Valor de a : %d", a);
    //imprindo o endereço de uma viriavel
    printf("\nO endereco de a : %d\n", &a);
    //Lendo o valor de uma variavel
    scanf("\n%d", &a);
    //imprindo o valor de uma viriavel
    printf("Valor de a : %d", a);    
    //Variaveis amazenan velores
    int b = 10;
    //Poenteiros armazenam posições da memória
    int *ponteiro;
    //ponteiro recebendo a posicao na memoria da variavel b.
    ponteiro = &b;
    //imprindo o valor de uma viriavel
    printf("\nValor de b : %d", b); 
    //* pode ser lido "Conteudo Apontado por"
    *ponteiro = 40 ;
    //imprindo o valor de uma viriavel
    printf("\nValor de b : %d", b); 
    return 0;
}