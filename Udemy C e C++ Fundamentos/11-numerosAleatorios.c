#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//função principal do programa
void main(){

    //resposavel por alimentar o rand de forma diferente
    srand((unsigned) time(NULL));
    //Variavel que recebe o resto da divisao do numero por 3 (aleatorio entre 0 e 2)
    int aleatorio = (rand() % 3)+1;
    printf("%d", aleatorio);
    //Variavel que recebe o resto da divisao do numero por 5 (aleatorio entre 0 e 5)
    int aleatorio2 = (rand() % 5)+1;
    printf("\n%d", aleatorio2);
    //pausa o programa apos executar
    system("pause");
}