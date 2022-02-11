#include <stdio.h>
#include <iostream>
#include <new>
#include <stdlib.h>
#include <string>
#define  TAM 10

using namespace std;

bool pilha_vazia(int topo){

    if(topo == -1){
        return true;
    } else {
        return false;
    }

}

bool pilha_cheia(int topo){
    if(topo ==  TAM -1){
        return true;
    } else {
        return false;
    }
}

int pilha_Tamanho (int topo) {
    return topo + 1;
    
}
int pilha_get(int pilha[TAM],int *topo){
    if(pilha_vazia(*topo)){
        cout << " A pilha ta vazia";
        return 0;
    } else {
        return pilha[*topo];
    }
}

void imprime_vetor(int vetor[TAM]){

    int cont;
    //imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
}

void pilha_push(int pilha[TAM],int valor, int *topo) {
    
    //caso nao possa colocar mais valores
    if(pilha_cheia(*topo == TAM -1)) {
        cout << "Pilha cheia";
    } else {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }
}

void pilha_pop(int pilha[TAM],int *topo){

    if(pilha_vazia(*topo)){
        cout << " A piçha ja esta vazia";
    }else{
        cout << "Valor Removido:" << pilha[*topo];
        pilha[*topo] = 0;
        *topo -= 1;
    }
    cout << "\n";
}

void pilha_construtor(int pilha[TAM], int *topo){
    *topo = -1;

    int cont;
    //imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        pilha[cont] =0;
    }
}

int main() {

    int pilha[TAM]= {0,0,0,0,0,0,0,0,0,0};
    int topo = -1;      //topo da pilha

    pilha_construtor(pilha, &topo);

    imprime_vetor(pilha);

    pilha_push(pilha, 5, &topo);

    cout << "ultimo valor da pilha" << pilha_get(pilha,&topo);
    cout << "TAmanho da pilha" << pilha_Tamanho(topo);

    pilha_push(pilha, 8, &topo);
    pilha_push(pilha, 3, &topo);
    pilha_push(pilha, 1, &topo);
    pilha_push(pilha, 8, &topo);
    pilha_push(pilha, 5, &topo);
    pilha_push(pilha, 10, &topo);
    pilha_push(pilha, 19, &topo);
    pilha_push(pilha, 18, &topo);
    pilha_push(pilha, 17, &topo);
    cout << "Tamanho da pilha:" << pilha_Tamanho(topo);

    imprime_vetor(pilha);
    pilha_pop(pilha, &topo);
    imprime_vetor(pilha);

    return 0;
}