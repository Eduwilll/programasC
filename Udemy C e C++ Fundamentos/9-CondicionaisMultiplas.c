#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    //Definido variaveis
    int a = 10;
    //Conectivos logico E (and) se uma comparação for falsa nao entra no bloco
    if(a >5 && a<15){
        printf("\n A variavel 'a' esta entre 5 e 15");
    }
    //Conectivos Logico OU (or) se uma compracao for verdadeira entra no bloco
    if(a >5 || a>15){
        printf("\n A variavel 'a' eh maior que 5 ou 15");
    }
    //Misturando conectivos
    if(( a >5 && a<15) || a==20 ){
        printf("\n A variavel 'a' eh maior que 5 ou 15");
    }
    
}