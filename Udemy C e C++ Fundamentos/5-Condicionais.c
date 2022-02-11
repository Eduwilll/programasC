#include <stdlib.h>
#include <stdio.h>

void main(){
    //Definindo variaveis
    int a = 5, opcao=1;
    float b = 2.5;
    char c= 'x';
    //Condicional simples
    if(a == 5){
        printf("a é igual a 5");
    }
    if (b == 2.65){
        printf("\n A variavel é igual a 2.5");
    }
    if (c == 'x')
    {
        printf("\n A variavel é igual a x");
    }
    
    
    //Número par ou impar
    if(a % 2 == 1){
        printf("\n A variavel a eh impar");
    }else{
        printf("\n A variavel a eh par");
    }
    //conficional composta
    if(opcao == 1){
        printf("\nA opcao = 1 ");
    }else if(opcao == 2){
        printf("\nA opcao = 2 ");
    }else{
        printf("\n opcao nao e 1 nem 2");
    }

    //pausa o programa opós executar
    system("pause");
}