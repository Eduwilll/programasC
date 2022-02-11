#include<stdio.h>

typedef struct Numeros {
    int num1[3];
    int num2;
}Numeros;

Numeros LerNumeros();

int main() {
    Numeros exercicio;
    int i;

    exercicio = LerNumeros();

    exercicio.num2=0;
    for(i=0; i<3; i++){
        exercicio.num2 += exercicio.num1[i];
        printf("\nSoma = %d", exercicio.num2);
    }

    

    return 0;
}
Numeros LerNumeros(){
    Numeros aux;
    int i;
    for( i=0; i<3; i++){
        scanf("%d", &aux.num1[i]);
      
    }
    return aux;
}