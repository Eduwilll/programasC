/*Escreva uma função que calcule o máximo divisor comum de dois números m e n passados
por parâmetro. Você deve utilizar a seguinte regra do cálculo do mdc onde m ≥ n
mdc(m, n) = m se n = 0
mdc(m, n) = mdc(n, m%n) se n > 0
O protótipo da função deve ser:
int mdc(int m, int n);*/
#include <stdio.h>
#include <stdlib.h>

int mdc(int m,int n);

int main(){
    int m,n;
    int i;

    printf("Digite primeiro valor");
    scanf("%d",&m);
    
    printf("Digite segundo valor");
    scanf("%d",&n);

   
    printf("%d", mdc(m,n));
}

int mdc(int m, int n){
    int i;
    if (n==0) 
        return m;
    else
        return mdc (n, m % n);
}


