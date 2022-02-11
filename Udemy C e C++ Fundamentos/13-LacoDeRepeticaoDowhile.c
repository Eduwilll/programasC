#include<stdio.h>
#include<stdlib.h>

//função principal do programa
int main(){
    //Definindo variavel
    int a = 1;

    //primeiro confere a condição
    while (a <=10)
    {
        printf("\n%d", a);
        a++;
    }
    //primeiro executa depois confere a condição
    do
    {
        printf("\n%d",a);
        a++;
    } while (a <= 10);
    
    //pausa o programa apos executar
    system("pause");
}