#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main() {

    //Cria o objeto do arquivo
    ofstream meuArquivo;

    //abre o arquivo
    meuArquivo.open("texto.txt");

    //Esvazia o arquivo
    meuArquivo << "";

    //fechar o arquivo
    meuArquivo.close();
    return 0;
}