// Sequencia de fibonacci
/*
f=[0,1,1,2,3,5,8,13,21,34..........]
i=[0,1,2,3,4,5,6, 7, 8, 9]

f(n) =|f[0] = 0 => constante -> caso base
      |f[1] = 1 => Constante -> caso base
      |f[n] = f[n-1] + f[n-2]


*/
#include <iostream>
#include <chrono>
using namespace std;

const int max_elements = 10000;

long long FibRecursivo(int n) // implementação naive
{
    if (n <= 1)
    { // ou if(n<=1)
        return n;
    }
    return FibRecursivo(n - 1) + FibRecursivo(n - 2); // Chamada recursiva e a união dos resultados dos sub-problemas;
}

long long FibIterativo(int n)
{
    long long penultimo = 0;
    long long ultimo = 1;
    long long atual = n;

    for (int i = 2; i <= n; i++)
    {
        atual = ultimo + penultimo;

        penultimo = ultimo;
        ultimo = atual;
    }
    return atual;
}

long long FibRecursivoTabela(int n, long long result[])
{
    // implementação com tabela

    if (result[n] < 0) // verifica no vetor se ja foi calcula | numero negativo nao foi calculado se for positivo ja foi calculado
    {
        if (n <= 1)
        { // ou if(n<=1)
            result[n] = n;
        }
        else
            result[n] = FibRecursivoTabela(n - 1, result) + FibRecursivoTabela(n - 2, result); // Chamada recursiva e a união dos resultados dos sub-problemas;
    }
    return result[n];
}

int main()
{
    int n; // indice da sequencia fibonacci que será calculado

    cout << "informe o indice da sequencia fibonacci: ";
    cin >> n;

    // vetor que guarda os resultados
    long long result[max_elements];

    chrono::time_point<chrono::steady_clock> inicio;
    chrono::time_point<chrono::steady_clock> fim;
    chrono::duration<double> duracao_s;
    long long resultado;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < max_elements; j++)
        {
            result[j] = -1;
        }
        inicio = chrono::steady_clock::now();
        resultado = FibRecursivoTabela(i, result);
        // resultado FibRecursivo(i);
        // resultado = FibIterativo(i);
        fim = chrono::steady_clock::now();
        duracao_s = fim - inicio;

        cout << i << " .o termo da sequencia:" << resultado << " calculado em " << duracao_s.count() << " segundos" << endl;
    }
    return 0;
}
