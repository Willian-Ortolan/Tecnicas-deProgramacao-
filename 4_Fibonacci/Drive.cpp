// Sequencia de fibonacci
/*
f=[0,1,1,2,3,5,8,13,21,34..........]
i=[0,1,2,3,4,5,6, 7, 8, 9]

f(n) =|f[0] = 0 => constante -> caso base
      |f[1] = 1 => Constante -> caso base
      |f[n] = f[n-1] + f[n-2]


*/
#include <iostream>
using namespace std;

long long FibRecursivo(int n)
{
    if (n<=1)
    { // ou if(n<=1)
        return n;
    }
    return FibRecursivo(n - 1) + FibRecursivo(n - 2); // Chamada recursiva e a união dos resultados dos sub-problemas;
}

int main()
{
    int n; // indice da sequencia fibonacci que será calculado

    cout << "informe o indice da sequencia fibonacci: ";
    cin >> n;

    cout << "o resultado para o indice [" << n << "] eh: ";
    cout << FibRecursivo(n);

    return 0;
}
