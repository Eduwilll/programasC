#include <stdio.h>
#include <iostream>
#include <new>
#include <stdlib.h>
#include <string>
#define  TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM]){

    int cont;
    //imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
}

int busca_simples(int vetor[TAM],int valorProcurado, int *posicao){

    //auxiliar contador
    int cont;
    bool valorFoiEncontado;
    //percorre a lista em busca do valor
    for(cont = 0; cont < TAM; cont++){

        if(vetor[cont] == valorProcurado){
            valorFoiEncontado = true;
            *posicao = cont;
        }
        
    }

    if (valorFoiEncontado){
        return 1;
    } else {
        return -1;
    }
}

int main(){

    int vetor[10] = {0,1,23,44,56,63,72,84,90,98};
    int valorProcurado;
    int posicao;
    int cont;
    bool valorFoiEncontado;

    imprime_vetor(vetor);

    printf("Qual numero deseja encontrar");
    scanf("%d", &valorProcurado);

    if(busca_simples(vetor, valorProcurado, &posicao) == 1){
        cout << "O valor foi encontado na posicao:" << posicao;

    } else{
        cout << "nao foi encontado";
    }
    return 0;
}