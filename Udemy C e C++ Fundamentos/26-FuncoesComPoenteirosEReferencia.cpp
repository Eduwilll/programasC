#include<stdio.h>
#include<stdlib.h>

void aumentaDez(int *numero){
    *numero = *numero + 10;
}
int retornarComMaisDez(int numero){
    return numero +10;
}

int main(){
    //definindo variaveis
    int a=5;

    a= retornarComMaisDez(a);
    //Chama a funçao
    printf("\n %d ",a);
    //Fucao que aumenta 10 diretamente
    aumentaDez(&a);
    //recebe o antecessor
    printf("\n %d ",a);

    return 0 ;
}