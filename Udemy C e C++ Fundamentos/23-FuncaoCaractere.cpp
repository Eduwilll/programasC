#include <stdio.h>
#include <stdlib.h>

 char retornaLetra();

int main (){
    //definindo variaveis
    char letra;
    //Char recebendo valor de uma funcao.
    letra = retornaLetra();
    //imprimindo novo valor
    printf("%c", letra);
    return 0;
}

 char retornaLetra(){
    return 'x';
}