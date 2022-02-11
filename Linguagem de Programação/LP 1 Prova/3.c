/*3. (2,5 pontos) Escreva uma funcéo chamada media que recebe um vetor de double, um inteiro n que indica o
tamanho do vetor, e um ponteiro para inteiro i. A funcg&éo deve retornar a média dos n elementos no vetor e no
endereco apontado por i deve retornar a posicaéo do elemento que tem o valor mais préximo da média, ou seja o
elemento da posic&o i é tal que |vet|é] — média| é minimo.

O protétipo da fungio deve ser este abaixo.

double media{double vet[], int n, int *i);*/

//Eduardo Fabricio Goza
//Samuel Alves Silva
#include <stdio.h>
#include <stdlib.h>

double media(double vet[], int n, int *i);
int main()
{
    int n,f;
    int *i;
    printf("tamanho do vetor: ");
    scanf("%d", &n);
    double vetor[n];

    for(f=0;f<n;f++){
        printf("valor %d: ", f);
        scanf("%lf",&vetor[f]);
    }

    printf("\nmedia: %.1lf",media(vetor,n,i));
    //printf("\nposicao: %d",i);
    return 0;
}

double media(double vet[], int n, int *i){
    double cont = 0;
    double valMedia;
    double vetAux[n];
    int j;
    for(j=0;j<n;j++){
        cont += vet[j];
    }
    valMedia = cont / n;
    // retornar posi��o do indice mais proximo
    for(j=0;j<n;j++){
      vetAux[j] = vet[j] - valMedia;
      printf("\n%d: %.1lf",j,vetAux[j]);
    }
    double posicaoMenor = vetAux[0];
    for(j=0;j<n;j++){
      if(vetAux[j] < posicaoMenor ){
        posicaoMenor = vetAux[j];
         i = j;
      }

    }
    printf("\n\nposicao mais proxima %d",i);
    return valMedia;
}