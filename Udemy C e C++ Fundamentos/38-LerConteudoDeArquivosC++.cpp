#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main () {

    //Cursor que ira percorrer cada letra
    int c;
    char conteudoTexto[255];

    //abre o arquivo no dieretoria escolhido
    ifstream input ("Texto.txt");

    //String que recebe o texto lido
    string textoLido;

    //Passa o texto do arquivo para a string
    for(string line; getline(input, line);){
        textoLido += line;
    }

    //mostrar conteudo
    cout << textoLido << endl;    
    return 0;
}