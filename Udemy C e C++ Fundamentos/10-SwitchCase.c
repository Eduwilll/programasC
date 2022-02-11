#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    //Definido variaveis
    int a = 1;
    char b = 'x';
    //codigo de exemplo com if
    if(a = 1){
        printf("\n opcao escolhida eh 1");
    }else if(a == 2){
        printf("\n opcao escolhida eh 2");
    }else if(a == 3){
        printf("\n opcao escolhida eh 3");
    }else{
        printf("\n opcao invalida");
    }
    //o mesmo codigo de cima mas com switch
    switch (a){
        case 1:
            printf("\n opcao escolhida eh 1");
            break;
        case 2:
            printf("\n opcao escolhida eh 2");
            break;
        case 3:
            printf("\n opcao escolhida eh 3");
            break;
    
        default:
            printf("\n opcao invalida");
            break;
    }
    //switch com char
    switch (b){
        case 'x':
            printf("\n a letra eh x");
            break;
        
        default:
            break;
        }
    //pausa o programa apos a execução
    system("pause");
}