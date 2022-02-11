#include<stdio.h>
#include<stdlib.h>
#include <string>
#include <iostream>

using namespace std;
//função principal do programa
int main(){
    //definindo uma String
    std::string palavra;
    //imprindo na tela
    cout << "digite uma palavra";
    //lendo uma string
    cin >> palavra;
    //imprundo uma variavel
    cout << "\n Palavra eh:"<<palavra;

    //pausa o programa apos executar
    system("pause");
}