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


//junta os dois subarrays criados ao dividir o vetor principal
void merge(int vetor[TAM], int indiceEsquerdo, int meio,int indiceDireito){

    
    int i,j,k;                          //auxiliares contadores
    int n1 = meio - indiceEsquerdo + 1; //tamanho do primeiro vetor auxiliar
    int n2 = indiceDireito - meio ;     //tamanho do segundo vetor auxiliar

    //cria dois arrays temporarios
    int vetorEsquerdo[n1], vetorDireito[n2];

    //passa os elementos do vetor principal para o primeiro vetor auxiliar (esquerda)
    for(i = 0; i < n1; i++){
        vetorEsquerdo[i] = vetor[indiceEsquerdo +1];
    }
    //passa os elementos do vetor principal para o segundo vetor auxiliar (direito)
    for(j = 0; j < n2; j++){
        vetorDireito[j] = vetor[meio + 1 + j];
    }

    //reseta as variaveis
    i = 0;
    j = 0;
    k = indiceEsquerdo;

    while(i < n1  && j < n2){

        //caso o valor da esquerda seja menor
        if(vetorEsquerdo[i] <= vetorDireito[j]){

            //Passo para o meu vetor principal o valor menor
            vetor[k] = vetorEsquerdo[i];

            //incrementa o auxiliar para passar a analise para os proximos valores auxiliares
            i++;
        }else{

            //Passo para o meu vetor principal o valor menor
            vetor[k] = vetorDireito[j];

            //incrementa o auxiliar para passar a analise para os proximos valores auxiliares
            j++;
        }

        //aumenta o indice de posicionamento do vetor
        k++;
    }

    //se faltarem alguns elementos do array esquerdo passa eles para o array principal
    while(i < n1){
        vetor[k] = vetorEsquerdo[i];
        i++;
        k++;
    }

    //se faltarem alguns elementos do array esquerdo passa eles para o array principal
    while(i < n2){
        vetor[k] = vetorDireito[j];
        j++;
        k++;
    }
}

void merge_sort(int vetor[TAM], int indiceEsquerdo, int indiceDireito){

    if(indiceEsquerdo < indiceDireito){

        //encontra o meio
        int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo) / 2;

        //da metada para tras
        merge_sort(vetor, indiceEsquerdo, meio);

        //da metade para frente
        merge_sort(vetor,meio +1 , indiceDireito);

        //visualizando o processo.
        imprimeVetor(vetor);

        //une os dois subarrays que foram criados
        merge(vetor,indiceEsquerdo,meio,indiceDireito);
    }
}

int main() {

    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    merge_sort(vetor,0,TAM - 1);

    imprimeVetor(vetor);

    return 0;
}