#include <stdio.h>
#include <stdlib.h>

void main (){
    int a = 6, b = 3;
    //soma
    printf("\n A soma de %d e %d = %d",a, b, a+b);
    //subtação
    printf("\n A subtação de %d e %d = %d",a, b, a-b);
    //Divisão
    printf("\n A Divisão de %d e %d = %d",a, b, a/b);
    //Multiplicação
    printf("\n A Multiplicação de %d e %d = %d",a, b, a*b);
    //Resto da divisão
    printf("\n o Resto da divisão de %d e %d = %d",a, b, a%b);
    //Valor absoluto
    printf("\n O valor absoluto de -3 = %d", abs (-3));
    system("pause");
}