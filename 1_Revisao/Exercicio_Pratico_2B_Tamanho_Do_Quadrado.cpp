/*
2) Escreva  um  programa  que  leia  o  tamanho  do  lado  de  um  quadrado  e
imprima  um  quadrado  vazio  desse  tamanho  com  asteriscos  e  espaços  em
branco. Seu programa deve funcionar para quadrados de todos os tamanhos
de lado entre 1 e 20. Por exemplo, se seu programa lê um tamanho de 5, ele
deve imprimir:
* * * * * *
*         *
*         *
* * * * * *
*/

#include <iostream>
using namespace std;

int main()
{
    int tamanho = 0;

    cout << "informe o tamanho do quadrado: ";
    cin >> tamanho;

    for (int i = 0; i < tamanho; i++)
    { // Linha
        for (int j = 0; j < tamanho; j++)
        { // Coluna
            if (i == 0 || i == (tamanho - 1) || j == 0 || j == (tamanho - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}