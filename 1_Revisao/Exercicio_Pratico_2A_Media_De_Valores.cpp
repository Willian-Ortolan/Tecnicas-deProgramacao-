/*
1) Escreva  um  programa  que  use  uma  instrução  for  para  calcular  a  média
inteira de  vários  números  inteiros.  Suponha  que  o último  valor lido seja o
sentinela 9999. Por exemplo, a sequência 10, 8, 11, 7, 9, 9999 indica que o
programa deve calcular a média de todos os valores anteriores a 9999.
*/

#include <iostream>
using namespace std;

int main()
{
    int valorInformado = 0;
    int soma = 0;
    int qtd = 0;
    int sentinela = 9999;

    for (int i = 0; i >= 0; i++)
    {
        cout << "Informe um numero: ";
        cin >> valorInformado;

        if (valorInformado < sentinela)
        {
            soma += valorInformado;
            qtd += 1;
        }
        else
        {
            cout << "Voce informou " << qtd << " numeros." << endl;
            cout << "A media foi de: " << soma / qtd;
            return 0;
        }
    }
    return 0;
}