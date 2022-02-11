#include <stdio.h>
#include <stdlib.h>
#include <new>
#define TAM 3


//aloca um vetor do tamanho pedido
int* alocaVetor(int tam){

    //cria um ponteiro auxiliar
    int *v;

    //aloca memoria para o novo vetor do t
    v =(int *) malloc(tam * sizeof(int));

    return v;
}

//imprime lista sequencial
void imprimeSequencial(int *vetor, int tamanhoDaListaSequencial){
    int cont;
    //exibindo valores
    for ( cont = 0; cont < tamanhoDaListaSequencial; cont++)
    {
        printf("\nValor %d: %d", cont,vetor[cont]);
    }
    
}

int main() {

    //variaveis
    int vetor[TAM] = {1,2,3};
    int cont, tamanhoDaLista;

    //exibindo valores
    for ( cont = 0; cont < TAM; cont++)
    {
        printf("\nValor %d: %d", cont,vetor[cont]);
    }

    imprimeSequencial(vetor,3);
    
    //lendo novos valores
    for ( cont = 0; cont < TAM; cont++)
    {
        scanf("%d", &vetor[cont]);
    }

    imprimeSequencial(vetor,3);

    //pedindo o tamanho do vetor
    printf("Digite o tamnho do vetor: ");
    scanf("%d", &tamanhoDaLista);

    //ponteiro para um novo vetor
    int *vetorLidoNaHora;

    vetorLidoNaHora = alocaVetor(tamanhoDaLista);

    //lendo novos valores
    for ( cont = 0; cont < tamanhoDaLista; cont++)
    {
        scanf("%d", &vetorLidoNaHora[cont]);
    }

    imprimeSequencial(vetorLidoNaHora,tamanhoDaLista);

    //criando um c++
    int *vetorEMCPlusPlus = new int[5];

    for ( cont = 0; cont < 5; cont++)
    {
        scanf("%d", &vetorLidoNaHora[cont]);
    }

    imprimeSequencial(vetorEMCPlusPlus,5);

    return 0;
}