#include <iostream>
using namespace std;

const int n = 5;

int main()
{
    srand(time(0)); // inicia a seed da sequencia aleatoria
    int matrizA[n][n];
    int matrizB[n][n];
    int matrizC[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrizA[i][j] = rand() % 100;
            matrizB[i][j] = rand() % 100;
        }
    }

    // Parte 1 para a matrixA
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
                ;
                colunaMaior = i;
            }

            if (matrizA[i][j] < menor)
            {
                menor = matrizA[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    cout << "maior elemento da coluna A: " << maior << endl;
    cout << "Linha do maior elemento da coluna A: " << linhaMaior << endl;
    cout << "Coluna do maior elemento da coluna A: " << colunaMaior << endl;

    cout << "Menor elemento da coluna A: " << menor << endl;
    cout << "Linha do menor elemento da coluna A: " << linhaMenor << endl;
    cout << "Coluna do menor elemento da coluna A: " << colunaMenor << endl;

    // Parte 1 para a matrixB
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
                ;
                colunaMaior = i;
            }

            if (matrizB[i][j] < menor)
            {
                menor = matrizB[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    cout << "maior elemento da coluna A: " << maior << endl;
    cout << "Linha do maior elemento da coluna B: " << linhaMaior << endl;
    cout << "Coluna do maior elemento da coluna B: " << colunaMaior << endl;

    cout << "Menor elemento da coluna A: " << menor << endl;
    cout << "Linha do menor elemento da coluna B: " << linhaMenor << endl;
    cout << "Coluna do menor elemento da coluna B: " << colunaMenor << endl;

    // PArte 2
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        }
    }

    return 0;
}

/// g++ NomeDoArquivo.cpp -o nomeDoArquivo.exe