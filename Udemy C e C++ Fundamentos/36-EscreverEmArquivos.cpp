#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main() {

    // cria o objeto e arquivo
    ofstream arquivoDeSaida;

    //abri o arquivo ou cria caso nao exista
    arquivoDeSaida.open("Texto.txt", std::ios_base::app);

    //escreva algo
    arquivoDeSaida << "\nmamaezinha";

    //fechar arquivo
    arquivoDeSaida.close();

    return 0;
}