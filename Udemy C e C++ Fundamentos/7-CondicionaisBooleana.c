#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    //Definido variaveis
    bool a = true, b = false; // 1 é verdadeiro 0 é falso
    //Se a for verdadeiro
    if(a){
        printf("\n %d eh verdadeiro ",a);
    }
    //comparando o b
    if(b){
        printf("\n %d eh verdadeiro ",b);
    }else{
        printf("\n %d eh falso ",b);
    }
    //Comparando uma falsidade
    if(!b){
        printf("\n %d eh falso ",b);
    }
    //pausa o programa apos a execução
    system("pause");
}