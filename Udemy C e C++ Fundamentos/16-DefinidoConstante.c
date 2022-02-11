#include<stdio.h>
#include<stdlib.h>
#define TAM 10

//função principal do programa
int main(){
    //definido variaveis
    int i;
    //imprime na tela
    printf("%d", TAM);

    //contando até 10
    for (i= 1; i <= TAM; i++){
        printf("\n%d", i);
    }

    //pausa o programa apos executar
    system("pause");
}