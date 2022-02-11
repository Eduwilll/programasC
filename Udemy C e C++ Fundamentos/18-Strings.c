#include<stdio.h>
#include<stdlib.h>

//função principal do programa
int main(){
    //Definindo Variaveis
    char palavra [225];

    //instrucao
    printf("digite uma palavra");
    //limpar o buffer
    setbuf(stdin, 0);
    //le a string
    fgets(palavra, 255, stdin);
    //limpa as casa nao utilizadas
    palavra [strlen(palavra)] = '\0';
    //imprimir na tela
    printf("%s", palavra);
    //pausa o programa apos executar
    system("pause");
}