#include<stdio.h>
#include<stdlib.h>

//função principal do programa
int main(){
    //Definindo Variavel
    int a = 1, b = 10;
    //contado ate 10
    while (a <=10)
    {
        printf("\n%d", a);

        a++;
    }
    while (b >= 1)
    {
        printf("\n%d", b);

        b--;
    }
  

    //pausa o programa apos executar
    system("pause");
}