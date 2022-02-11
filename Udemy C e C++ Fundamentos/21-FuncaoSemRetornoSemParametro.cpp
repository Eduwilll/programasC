#include <stdio.h>
#include <stdlib.h>
//funcao que desenha borda
void desenhaBorda(){
    printf("|-------------------|\n");
}

int main (){
    //chamando função
    desenhaBorda();
    //imprimindo texto na tela
    printf("\t hi \n");
    //chamando função
    desenhaBorda();
    return 0;
}