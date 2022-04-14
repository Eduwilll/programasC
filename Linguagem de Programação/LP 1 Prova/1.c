/*(2,5 pontos) Suponha a existéncia da estrutura para armazenar datas abaixo.

typedef struct {
int dia;
int mes;
int ano;

} Data;

Implemente uma função que receba um vetor de Data como parAmetro e que imprima na tela as data em ordem
crescente utilizando uma das 3 estratégias de ordenacao estudadas em aula. O protótipo da função é:

void ordena(struct Data vet[], int tam);*/

//Eduardo Fabricio Goza
//Samuel Alves Silva
#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;

void ordena( Data vet[], int tam);
int ValidaMes(Data mes[], int tam);

int main(){
    int tam;
    int i;

    printf("\ndigite a quantidade de datas quer vc quer inserir: ");
    scanf("%d", &tam);

    Data vet[tam];

    
    for(i = 0 ; i < tam; i++){
        
        printf("\nDigite o dia:");
        scanf("%d", &vet[i].dia); 

        printf("\nDigite o mes:");
        scanf("%d", & vet[i].mes);

        printf("\nDigite o ano:");
        scanf("\n%d", &vet[i].ano); 
    }
    
    ValidaMes(vet, tam);
    
    ordena(vet, tam);
    

    return 0;
}

void ordena(Data vet[], int tam){
    int i,j,x,z;
    
    Data aux;

    for (i = 1; i < tam; i++){
        aux = vet[i];
        for(j=i; (j>0) && (aux.dia < vet[j-1].dia);j--)
            vet[j] = vet[j-1];
        vet[j] = aux;
    }
    for (i = 1; i < tam; i++){
        aux = vet[i];
        for(j=i; (j>0) && (aux.mes < vet[j-1].mes);j--)
            vet[j] = vet[j-1];
        vet[j] = aux;
    }
    for (i = 1; i < tam; i++){
        aux = vet[i];
        for(j=i; (j>0) && (aux.ano < vet[j-1].ano )  ;j--)
            vet[j] = vet[j-1];
        vet[j] = aux;
    }
    
    

    for (i = 0; i < tam ; i++){
        printf("\nData em ordem crescente  %d - %d/%d/%d", i + 1 ,vet[i].dia, vet[i].mes, vet[i].ano);
    }
}

int ValidaMes(Data mes[],int tam){
    int i;
    int dias = 31;
    for(i=0; i < tam; i++ ){
        if( mes[i].mes > 12 || mes[i].mes <1){
            printf("Mes invalido");
        }
        else if(mes[i].mes == 2){
            dias -=2;
        }
        else if(mes[i].mes == 4 || mes[i].mes == 6 || mes[i].mes == 9 || mes[i].mes == 11 ){
            dias --;
        }
        
        for(i = 0; i < tam; i++){
            if(mes[i].dia > dias || mes[i].dia < 1){
                printf ("\nNao existe esse dia neste mes");
            }
        }    
    }
}


