#include <stdio.h>
#include <stdlib.h>
//definindo que a funcao existe.

float retornaQuebrado();
int retornaDezEImprimeMensagem();

int main (){

    //Definindo Variáveis
    int a;
    //passando o retorno de uma funcao para uma variavel
    a = retornaDezEImprimeMensagem();
    //imprimindo valor de a
    printf("%d\n", a);
    //Definindo um fload
    float b;
    //passando o retorno de uma funcao para uma variavel
    b = retornaQuebrado();
    //imprimindo valor de b
    printf("%.1f\n", b);
     printf("%.1f\n",a + b);
    return 0;
}

int retornaDezEImprimeMensagem(){
    printf("\n oi galera \n");
    return 10;
}
//retorna um numero quebrado
float retornaQuebrado(){
    return 5.5;
}