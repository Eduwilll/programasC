#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprime_vetor(int vetor(TAM), int topo){

    //Auxiliar Contador
    int cont;

    cout << "\n";

    //imprime o vetor
    for(cont=0; cont< TAM ; cont++){
        cout << vetor[cont]<< " - ";
    }

    cout << "Topo: " << topo;

}

//Caso a pilha esteja vazia.
bool pilha_vazia(int topo){
    if(topo == -1){
        return true;
    }else{
        return false;
    }
}