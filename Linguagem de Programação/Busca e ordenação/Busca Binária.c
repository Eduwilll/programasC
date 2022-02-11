#include <stdio.h>
#include <stdlib.h>

int BuscaBinaria(int vet[], int tam , int chave){
    int ini = 0, fim = tam-1, meio;

    while (ini<=fim) //enquanto o vetor tiver pelo menos 1 elemento
    {
        meio = (ini+fim)/2; //para encontrar o meio
        if (vet[meio]==chave){
            return meio;
        }else if (vet[meio]> chave){
            fim = meio - 1;
        }else {
            ini = meio + 1;
        }
    }
     return -1;
}