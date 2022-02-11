#include <iostream>
#include <stdlib.h>
#include <string>
#define  TAM 10

using namespace std;

void imprimeVetor(int vetor[]){

    int i;
    cout << "\n";
    for ( i = 0; i < TAM; i++)
    {
        cout << " |" << vetor[i] << "| ";
    }
    
}

void bubble_sort(int vetor[TAM]){
    //auxiliares
    int x,y,aux;

    //Valor da esqueda sendo analisado
    for ( x = 0; x < TAM; x++ ){

        //valor da direita sendo analizado
        for ( y = x + 1; y < TAM; y++ ){

            imprimeVetor(vetor);
            //confere se precisa fazer a troca
            if(vetor[x] > vetor[y]){
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }

        }
    }
}

int main() {



    int vetor[TAM] = {};

    for(int i = 0; i < TAM ; i++ ){

        scanf("%d", &vetor[i]);
    }

    bubble_sort(vetor);

    imprimeVetor(vetor);

    return 0;
}
