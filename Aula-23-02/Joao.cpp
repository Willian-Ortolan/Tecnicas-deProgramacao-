#include <iostream>
using namespace std;

const int n = 5;
// sempre indicar a dimensão da matriz aqui, caso eu queira mudar o tamanho dela de:
//(5x5 para 10x10), é só alterar o 5 aqui, sem precisar caçar no código para fazer a alteração

int main()
{
    cout << n;
    srand(time(0)); // inicia a seed de sequência aleatória
    int matrizA[n][n];
    int matrizB[n][n];
    int matrizC[n][n];

    for (int i = 0; i < n; i++)
    { // i = linha
        cout << i << endl
             << endl
             << endl;
        for (int j = 0; j < n; j++)
        {                                 // j = coluna
            matrizA[i][j] = rand() % 100; // resto da divisão inteira
            cout << matrizA[i][j];
            matrizB[i][j] = rand() % 100;
        }
    }

    int maior = matrizA[0][0], menor = matrizA[0][0];
    int linhaMaior = 0, colunaMaior = 0, linhaMenor = 0, colunaMenor = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrizA[i][j] > maior)
            {
                maior = matrizA[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
            if (matrizA[i][j] < menor)
            {
                menor = matrizA[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    cout << "Maior elemento da Matriz A: " << maior << endl;
    cout << "Linha do maior elemento da Matriz A: " << linhaMaior << endl;
    cout << "Coluna do maior elemento da Matriz A: " << colunaMaior << endl;

    cout << "Menor elemento da Matriz A: " << menor << endl;
    cout << "Linha do menor elemento da Matriz A: " << linhaMenor << endl;
    cout << "Coluna do menor elemento da Matriz A: " << colunaMenor << endl;

    maior = matrizB[0][0], menor = matrizB[0][0];
    linhaMaior = 0, colunaMaior = 0, linhaMenor = 0, colunaMenor = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrizB[i][j] > maior)
            {
                maior = matrizB[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
            if (matrizB[i][j] < menor)
            {
                menor = matrizB[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    cout << "Maior elemento da Matriz B: " << maior << endl;
    cout << "Linha do maior elemento da Matriz B: " << linhaMaior << endl;
    cout << "Coluna do maior elemento da Matriz B: " << colunaMaior << endl;

    cout << "Menor elemento da Matriz B: " << menor << endl;
    cout << "Linha do menor elemento da Matriz B: " << linhaMenor << endl;
    cout << "Coluna do menor elemento da Matriz B: " << colunaMenor << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrizC[i][j] = (matrizA[i][j] > matrizB[i][j]) ? matrizA[i][j] : matrizB[i][j];
        }
    }

    return 0;
}