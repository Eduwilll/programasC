/*4. (2,5 pontos) Considere o tipo Cell definido abaixo.

typedef struct {
char car;
int peso;

} Cell;

Dado um vetor vet de nm > 0 elementos do tipo Cell, uma sequéncia de dois ou mais elementos consecutivos no
vetor tais que o valor em seus campos car sao iguais é chamada faiza. Por exemplo, se os valores dos campos
car de vet formam a sequéncia “yyzzzya”, existem duas faixas no vetor: “yy” e “zzz”.

Escreva uma fung&o que receba, como entrada, um vetor de n > 0 elementos do tipo Cell e devolva, como saida, a
soma, dos pesos de todos os elementos do vetor que pertencem a faixas. Por exemplo, para a sequéncia “yyzzzya”,
se os pesos destes elementos sao 10,2,5,4,5,4,3, a sua funcgdo deve devolver o valor 26.
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char car;
    int peso;
} Cell;

int SomaDosPesos (Cell vet[],int tam);

int main(){
    int i,tam,peso;

   do
   {
        printf("\nDigite a quantidades de elementos que ira inserir, tem de ser maior que Zero! :"); 
        scanf("%d", &tam);     
   } while (tam < 0);
   
    Cell  vet[tam];

    for(i = 0 ; i < tam; i++){
        
        printf("\nDigite um caractere:");
        scanf("%s",&vet[i].car);
        

        printf("\nDigite o peso deste caracter:");
        scanf("%d", & vet[i].peso);

    }
    peso = SomaDosPesos(vet,tam);
    printf("\npeso total:%d",peso);
    
}

int SomaDosPesos (Cell vet[],int tam){
    int i,aux = 0;
   
    for(i= 0; i < tam ; i++){
        printf("\nFuncao:%c,%d",vet[i].car,vet[i].peso);
    }
    
    for(i= 0; i < tam ; i++){
        if(vet[i].car  ==  vet[i+1].car){
            aux += vet[i].peso;
            
        }else if (vet[i].car  ==  vet[i-1].car){
            aux += vet[i].peso;
        }
    }
    
    return aux;
}