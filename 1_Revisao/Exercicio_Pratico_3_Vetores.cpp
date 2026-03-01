/*
Objetivo: Criar um programa em C++ para gerenciar as 15 vagas de um estacionamento
privativo, utilizando um vetor de inteiros para representar o estado de ocupação.
Requisitos do Desafio:
1. Representação dos Dados: Utilize um vetor de inteiros onde o valor 0 indica que
a vaga está livre e o valor 1 indica que está ocupada.
2. Menu  Interativo:  O  programa  deve  exibir  um  menu  utilizando  estruturas  de
repetição (while ou do while) que permita ao usuário escolher entre diferentes
operações até que decida encerrar o programa.
3. Funcionalidades:
o Estacionar Veículo: O sistema deve solicitar o número da vaga (índice
do vetor). Se a vaga estiver livre, deve ser marcada como ocupada (valor
1); caso contrário, deve exibir uma mensagem informando que a vaga já
está ocupada.
o Liberar  Vaga:  O  usuário  informa  o  número  da  vaga  que  está  sendo
desocupada, e o sistema deve retornar o valor daquela posição para 0.
o Exibir Mapa de Vagas: Utilize a estrutura for para percorrer o vetor e
mostrar na tela a situação de todas as 15 vagas (ex: "Vaga 1: Livre", "Vaga
2: Ocupada").
o Contagem de Ocupação: O programa deve calcular e mostrar o total de
vagas ocupadas no momento.

*/
#include <iostream>
using namespace std;

int main()
{
    const int n = 15;
    int vagas[n] = {0};
    int numeroDaVaga = 0;
    int opcao = 0;
    int ocupacao = 0;

    while (opcao != 4)
    {
        cout << "===== Estacionamento =====" << endl;
        cout << "1 - Estacionar" << endl;
        cout << "2 - Liberar vaga" << endl;
        cout << "3 - Exibir mapa" << endl;
        cout << "4 - Sair" << endl;
        cout << "Vagas ocupadas: " << ocupacao << endl;
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Escolha a vaga (1 a 15): ";
            cin >> numeroDaVaga;

            if (numeroDaVaga < 0 || numeroDaVaga >= n)
            {
                cout << "Vaga inexistente!" << endl;
                break;
            }

            if (vagas[numeroDaVaga - 1] == 0)
            {
                vagas[numeroDaVaga - 1] = 1;
                ocupacao++;
                cout << "Vaga ocupada com sucesso!" << endl;
            }
            else
            {
                cout << "Essa vaga já está ocupada!" << endl;
            }
            break;

        case 2:
            cout << "Informe a vaga a liberar (1 a 15): ";
            cin >> numeroDaVaga;

            if (numeroDaVaga < 0 || numeroDaVaga >= n)
            {
                cout << "Vaga inexistente!" << endl;
                break;
            }

            if (vagas[numeroDaVaga - 1] == 1)
            {
                vagas[numeroDaVaga - 1] = 0;
                ocupacao--;
                cout << "Vaga liberada!" << endl;
            }
            else
            {
                cout << "Essa vaga já está livre!" << endl;
            }
            break;

        case 3:
            cout << "===== Mapa das vagas =====" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "Vaga " << i + 1 << ": " << (vagas[i] == 0 ? "LIVRE" : "OCUPADA") << endl;
            }
            break;

        case 4:
            cout << "Saindo..." << endl;
            break;

        default:
            cout << "Opcao invalida!" << endl;
        }
    }

    return 0;
}
