#include <string.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <new>

using namespace std;

//struct para frutas
struct fruta{
    string cor;
    string nome;
};

int main () {

    //criando um ponteiro para o struct cirado
    fruta *primeiraFruta = new fruta;

    //modificando valores
    primeiraFruta->cor = "Amarela";
    primeiraFruta->nome = "Banana";

    //Exibindo valores
    cout << "Fruta:" << primeiraFruta->nome << ", Cor:" << primeiraFruta->cor << endl;

    //criando uma lista de frutas
    fruta *ponteiroListaDeFrutas = new fruta[2];

    //modificando valores
    ponteiroListaDeFrutas[0].cor = "Vermelho";
    ponteiroListaDeFrutas[0].nome = "Morango";
    ponteiroListaDeFrutas[1].cor = "Verde";
    ponteiroListaDeFrutas[1].nome = "Kiwi";

    //percorrendo e exibindo
    int cont;
    for (cont = 0; cont < 2; cont++){
        cout <<"Fruta: " << ponteiroListaDeFrutas[cont].nome <<", cor:" <<ponteiroListaDeFrutas[cont].cor << endl;
    }

    return 0;
}