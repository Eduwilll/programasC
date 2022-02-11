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

void shell_sort(int vetor[TAM]){

    int i,j,atual;
    int h = 1;

    //de quantos em quanto sera o pulo entre as analises
    while ( h < TAM){
        h = 3 * h + 1;
    }

    while (h > 1) {

        h= h/3;

        for(i = 1; i < TAM; i++){

            //elemento atual em analise
            atual = vetor[i];

            //elemento anterior ao analisado
            j = i -h;

            //analisando os elementos uma posicao para frente
            while((j >= 0 ) && (atual < vetor[j])){

                //possiciona os elementos uma posicao para frente
                vetor[j + h] = vetor[j];

                //faz o j andar para tras
                j = j - h;
            }

            //agora que o espaco foi aberto colocamos o atual (menor numero na posicao correta)
            vetor[j + h]= atual;

            //mostra a lista atualizada
            imprimeVetor(vetor);

        }
    }

}

int main() {

    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    shell_sort(vetor);

    imprimeVetor(vetor);

    return 0;
}