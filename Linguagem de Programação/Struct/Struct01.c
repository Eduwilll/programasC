#include <stdio.h>

typedef struct {
    float x;
    float y;
} Coordenada;
//typedef struct Coordenada Coordenada;

void imprimeCoordenada(Coordenada);
Coordenada leCoordenada();
Coordenada somaCoordenada(Coordenada, Coordenada);
Coordenada multiCoordenada(Coordenada, float);

int main() {
    Coordenada c1, c2, c_somada, c_multi;

    printf("Coordenada 1 \n");
    c1 = leCoordenada();
    printf("Coordenada 2 \n");
    c2 = leCoordenada();

    printf("Coordenada 1: ");
    imprimeCoordenada(c1);
    printf("Coordenada 2: ");
    imprimeCoordenada(c2);

    c_somada = somaCoordenada(c1, c2);
    printf("Coordenada somada: ");
    imprimeCoordenada(c_somada);

    c_multi = multiCoordenada(c1, 100);
    printf("Coordenada multiplicada por escalar: ");
    imprimeCoordenada(c_multi);

    return 0;
}

void imprimeCoordenada(Coordenada coord) {
    printf("(%.1f, %.1f)\n", coord.x, coord.y);
}

Coordenada leCoordenada() {
    Coordenada aux;

    printf("Digite o valor de X: ");
    scanf("%f", &aux.x);
    printf("Digite o valor de Y: ");
    scanf("%f", &aux.y);

    return aux;
}

Coordenada somaCoordenada(Coordenada coord1, Coordenada coord2) {
    Coordenada aux;

    aux.x = coord1.x + coord2.x;
    aux.y = coord1.y + coord2.y;

    return aux;
}

Coordenada multiCoordenada(Coordenada coord, float numero) {
    Coordenada aux;

    aux.x = coord.x * numero;
    aux.y = coord.y * numero;

    return aux;
}