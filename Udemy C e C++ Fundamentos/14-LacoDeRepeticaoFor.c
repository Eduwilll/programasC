#include<stdio.h>
#include<stdlib.h>

//função principal do programa
int main(){
    //definindo variavel
    int cont;
    //tabuada do 5
    for (cont = 1 ; cont <= 10; cont++){
        printf("\n 5 X %d = %d", cont, 5* cont);
    }
    //contando 2 em 2.
    for (cont = 0 ; cont <= 10; cont+=2){
        printf("\n %d", cont);
    }
    //contando regressiva
    for (cont = 10 ; cont > 0; cont--){
        printf("\n %d", cont);
    }

    //pausa o programa apos executar
    system("pause");
}