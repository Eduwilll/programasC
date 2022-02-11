#include<stdio.h>
#include<stdlib.h>

//função principal do programa
int main(){
    //definindo Variaveis
    int opcao;
    //imprime na tela
    printf("Escolhendo Uma opcao:");
    printf("\n1- opcao 1");
    printf("\n2- opcao 2");
    printf("\n3- opcao 3");

    //lendo opcao
    scanf("\n%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\n opcao 1 foi escolhida");
        break;
    case 2:
        printf("\n opcao 2 foi escolhida");
        break;
    case 3:
        printf("\n opcao 3 foi escolhida");
        break;
    default:
        printf("\n opcao invalida");
        break;
    }

    //pausa o programa apos executar
    system("pause");
}