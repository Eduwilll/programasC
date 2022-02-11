#include <stdio.h>
#include <stdlib.h>

 void limpaTela();

int main (){
    //definindo variaveis
    int a;
    //Char recebendo valor de uma funcao.
    //imprimindo alguma coisa
    printf("Digite um valor para 'a': ");
    scanf("%d", &a);

    //chama a funcao que limpa a tela
    limpaTela();
    printf("O valor digitado foi: %d \n fim do programa! ",a);
    return 0;
}

 void limpaTela(){
    system("CLS");
}