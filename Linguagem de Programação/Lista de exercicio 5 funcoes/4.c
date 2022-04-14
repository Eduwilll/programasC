/*4. Escreva uma função que recebe um valor inteiro positivo n como parâmetro e devolve um
valor inteiro b tal que b
k = n para algum inteiro k, e b seja o menor possível. Por ebemplo,
se n = 27 então o valor devolvido deve ser 3, já se n = 12 então o valor devolvido deve ser
12. Não use funções de bibliotecas na sua solução. O protótipo da função deve ser:
int menor_base_log(int n);*/
#include<stdio.h>
#include<stdlib.h>

int menor_base_log(int n);

int main(){
    int n;

    scanf("%d", &n);

    menor_base_log(n);

    return 0;
}

int menor_base_log(int n){
    int b,k,i=0;
    int aub=0;
    for(b=1; b <= n ;b++){
        for(k=1; k <= n ; k++){
            printf("\nB:%d K:%d", b,k);
        }
    }
}
