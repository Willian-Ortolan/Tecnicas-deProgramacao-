#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int sentinela = 9999;
    int valor = 0;
    int count = 0;
    int total = 0;

    cout << "Informe o primeiro valor: ";
    cin >> valor;

    // laço while - executado enquanto valor for diferente de 9999 (sentinela)
    while (valor != sentinela)
    {

        // acumular o valor
        total += valor;

        // Atualiza o contador
        count++;

        // ler novo valor
        cout << "Informe o novo valor: ";
        cin >> valor;
    }

    if (count != 0)
    {

        // calcula media e exibe na tela
        cout << "quantidade de valores armazenados: " << endl;
        cout << "Medidos valores: " << total / count << endl;
    }
    else
    {
        cout << "O valor digitado foi 0";
    }

    return 0;
}