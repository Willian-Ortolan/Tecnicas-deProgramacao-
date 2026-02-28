#include <iostream>
using namespace std;

void trocaValor(int &a, int &b)
{
    a = a + b; // a = 12 | b = 7
    b = a - b; // a = 12 | b = 5
    a = a - b; // a = 7 | b = 5
}

int main()
{
    int a, b;
    cout << "Informe o valor de a: ";
    cin >> a; // 5

    cout << "Informe o valor de b: ";
    cin >> b; // 7

    trocaValor(a, b);

    cout << "Novo valor de a: " << a << endl;
    cout << "Novo valor de b: " << b << endl;

    return 0;
}