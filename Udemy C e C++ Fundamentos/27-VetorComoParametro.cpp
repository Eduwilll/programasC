#include<stdio.h>
#include<stdlib.h>

void ImprimeVetor(int *vetor, int tamanho){
    //variavel contadora
    int i;
    //percorrendo o vetor
    for ( i = 0; i < tamanho; i++)
    {
        printf("%d",vetor[i]);
    }  
}

void modificaVetor(int *vetor, int tamanho){
    //variavel contadora
    int i;
    //percorrendo o vetor
    for ( i = 0; i < tamanho; i++)
    {
        printf("%d",vetor[i]+1);
    }  
}


int main(){
    //definindo variaveis
    int v[3] = {1,2,3};
    //mostrando vetor
    ImprimeVetor(v,3);
    //modifica o vetor
    modificaVetor(v,3);
    //retorno da funcao
    return 0 ;
}