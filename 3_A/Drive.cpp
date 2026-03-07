#include <iostream>
using namespace std;

// solução interativa
void printIterativo(int n)
{
    for (int i = n; i >= 0; i--)
    {
        cout << i << endl;
    }
}

// solução com recursão (recursiva)
/*
1-> o problema é resolvido chamando a si proprio (mesma função)
    a chamada para p sub problema deve ser para um problema do mesmo tipo so que menor

2->Precisa ter pelomenos uma condição de parada (caso base)
*/
void printRecursivo(int n)
{
    if (n > 0)
        printRecursivo(n - 1);
    cout << n << endl;
}

int main()
{
    int n = 0;

    cout << "informe o valor" << endl;
    cin >> n;

    // Problema: printar todos os numeros inteiros de forma decrescente de n(inclusive atpé 0(inclusive ))
    // Solução iterativa
    // printIterativo(n);
    printRecursivo(n);
    return 0;
}