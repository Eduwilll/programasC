#include<stdio.h>
#include<stdlib.h>
#include<string>
#include <iostream>

using namespace std;

//função principal do programa
int main(){
    //criando uma matriz
    int matriz[2][2],i,j;
    //pasando valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    

    //imprimindo valores na tela
    for(i=0; i < 2; i++){
        for(j= 0 ; j < 2; j ++){
            //cout << "\ni="<< i << ",j =" << j; //imprimir indices
            cout << matriz[i][j] << " ";//imprimindo matriz
        }
        cout << "\n";
    }
    //Lendo valores para a matriz.
    for(i=0; i < 2; i++){
        for(j= 0 ; j < 2; j ++){
            //scanf("%d", & matriz[i][j]); //usado no C
            cin >> matriz [i][j] ; //usado no c++
        }
        cout << "\n";
    }
    //imprimendo valores lido
    for(i=0; i < 2; i++){
        for(j= 0 ; j < 2; j ++){
            //cout << "\ni="<< i << ",j =" << j; //imprimir indices
            cout << matriz[i][j] << " ";//imprimindo matriz
        }
        cout << "\n";
    }
    //p
    //pausa o programa apos executar
    system("pause");
}
