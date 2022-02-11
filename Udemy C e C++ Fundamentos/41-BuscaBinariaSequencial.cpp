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

int busca_binaria(int vetor[TAM],int valorProcurado, int *posicao){

    int esquerda = 0;   //limite da esquerda
    int direita = TAM -1;   //limete da direita
    int meio;           //o meio onde fica o cursor

    while(esquerda <=direita){
        
        //calculando o meio
        meio = (direita + esquerda) /2;

        //quando o valor do meio é encontrado
        if(valorProcurado == vetor[meio]){
            *posicao = meio;
            return 1;
        }

        //ajustando os limites leterais
        if(vetor[meio] < valorProcurado){
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }
    return -1;
}

int main(){

    int vetor[10] = {0,1,23,44,56,63,72,84,90,98};
    int valorProcurado;
    int posicao;
    bool valorFoiEncontado;

    //auxiliar contador
    int cont;

    //imprime o vetor na tela
    imprime_vetor(vetor);

    //lendo o numero buscado
    printf("Qual numero deseja encontrar");
    scanf("%d", &valorProcurado);

    if(busca_binaria(vetor, valorProcurado, &posicao) == 1){
        cout << "O valor foi encontado na posicao:" << posicao;
    } else{
        cout << "nao foi encontado";
    }
    return 0;
}