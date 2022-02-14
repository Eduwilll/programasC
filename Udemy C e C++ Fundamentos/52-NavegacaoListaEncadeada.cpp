#include <stdio.h>
#include <stdlib.h>
#include <new>

struct estrutura{
    int valorNumerio;
    struct estrutura *proximo;
};

int main(){

    //Cria o inicio da lista
    estrutura *ponteiroEncadeada;

    //Cria um novo valor
    estrutura *novoPrimeiroValor = new estrutura;
    novoPrimeiroValor->valorNumerio = 13;
    novoPrimeiroValor->proximo = NULL;

    

    //Faz o ponteiro da encadeada apontar par ao primeiro valor
    ponteiroEncadeada = novoPrimeiroValor;

    //vria um segundo valor
    estrutura *novoSegundoValor = new estrutura;
    novoSegundoValor->valorNumerio = 20;
    novoSegundoValor->proximo = NULL;

    //junta os valores com um encadeamento
    ponteiroEncadeada->proximo = novoSegundoValor;
    
    //Imprime a lista encadeada
    while(ponteiroEncadeada != NULL){

        //imprime o valor atual
        printf("\nValor:%d", ponteiroEncadeada->valorNumerio);

        //Cursor recebe a posicao de memoria do proximo valor
        ponteiroEncadeada = ponteiroEncadeada->proximo;

    }

    return 0;

}