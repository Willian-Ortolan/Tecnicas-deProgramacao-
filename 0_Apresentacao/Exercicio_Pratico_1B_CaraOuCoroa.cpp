#include <iostream>
#include <time.h>
using namespace std;
// fazer a função flip
bool flip()
{
    return rand() % 2; // vai assumir apenas  [0,1];
    // rand() gera um numero aleatório
}

int main(int argc, char *argv[])
{
    srand(time(0)); // gera a seed para a sequencia pseudoaleatoria
    char op = 's';
    int cara = 0, coroa = 0;

    if (argc == 2)
    {
        for (int i = 0; i < atoi(argv[1]); i++)
        {
            if (flip())
                cara++;
            else
                coroa++;
        }
    }
    else
    { // argc diferente de 2
        cout << "Deseja jogar a moeda?(s/n): ";
        cin >> op;

        while (op == 's')
        {
            // jogar a moeda
            // verificar o resultado
            // contar o resultado
            if (flip())
            {
                // executa este bloco se o if == true
                cara++; // cara = cara + 1;
                cout << "Resultado: >>>CARA<<<" << endl;
            }
            else
            {
                coroa++;
                cout << "Resultado: >>>COROA<<<" << endl;
                // executa este bloco se o if == false
            }
            // perguntar se quer jogar novamente
            cout << "Deseja jogar novamente a moeda?(s/n): ";
            cin >> op;
        }
    }

    // imprimir os contadores
    cout << "Total de vezes jogadas: " << cara + coroa << endl;
    cout << "Total de caras: " << cara << endl;
    cout << "Total de coroas: " << coroa << endl;

    return 0;
}