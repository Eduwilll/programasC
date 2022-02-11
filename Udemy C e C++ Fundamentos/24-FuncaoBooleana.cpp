#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool retornaBooleano();

int main (){
    //definindo variaveis
    bool variavelBooleana;
    //Variavel recebendo booleano.
    variavelBooleana = retornaBooleano();
    //Se for veradeira executa o primeiro bloco
    if(variavelBooleana){
        printf("eh verdadeiro");
    }//senão executa o segundo bloco
    else{
        printf("eh falso");
    }
    return 0;
}

bool retornaBooleano(){
    return false;
}