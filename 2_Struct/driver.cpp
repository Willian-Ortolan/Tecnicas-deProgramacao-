#include <iostream>
#include <string>
using namespace std;

// Tipos de dados abstratos (personalizados)
//  tipos de dados disponilveis na STL:
/*
inteiros =int
numeros flutuantes =float, double
caracteres =char
*/

// tipos de dados abstratos (personalizados): structs;
struct Endereco
{ // definindo a struct Endereco

    string cidade;
    string estado;
};
typedef struct Endereco Endereco; // Substitui Endereco por struct Endereco na hora de realizar a compilacao (Boa pratica utilizar apelidos )

struct Produto
{                     // definindo struct produto
    int codigo;       // uso de 4 bytes
    string descricao; // classe string nasce com um valor padrão mais pode variar conforme a demanda
    float preco;
    Endereco Origem;
};
typedef struct Produto Produto;

// Cadastrar peça
void cadastraPeca(Produto &peca)
{ // receber o parametro por referencia.
    cout << "informe o codigo da peca: ";
    cin >> peca.codigo;
    cin.ignore();

    cout << "informe a descricao da peca: ";
    getline(cin, peca.descricao); // usado para guardar espaços

    cout << "informe o preco da peca: ";
    cin >> peca.preco;
    cin.ignore();

    cout << "informe a cidade de origem da peca:";
    getline(cin, peca.Origem.cidade);

    cout << "informe o estado da origem da peca:";
    getline(cin, peca.Origem.estado);
}

void printPeca(Produto peca)
{
    cout << "Codigo: " << peca.codigo << endl;
    cout << "descricao: " << peca.descricao << endl;
    cout << "Preco: " << peca.preco << endl;
    cout << "Cidade de origem:   " << peca.Origem.cidade << endl;
    cout << "Estado de origem: " << peca.Origem.estado << endl;
}

int main()
{
    const int n = 5;
    cout << "Tamanho (em bytes) o tipo primitivo int: " << sizeof(int) << endl;
    cout << "Tamanho (em bytes) o tipo primitivo int: " << sizeof(n) << endl;
    cout << "Tamanho (em bytes) o TAD Endereco: " << sizeof(Endereco) << endl;
    cout << "Tamanho (em bytes) o tipo TAD Produto: " << sizeof(Produto) << endl;

    Produto backuo;     // unico
    Produto estoque[n]; // vetor

    // acessar direta cada campo da struct
    estoque[0].codigo = 100;
    estoque[0].descricao = "pistao";
    estoque[0].Origem.cidade = "Afflterbach";
    estoque[0].preco = 100.00;
    estoque[0].Origem.estado = "Baden-Wur?";

    /*
    operações permitidas com structs
    atribuição (=); uma copia campo a campo
    */
    /*
    operações nao permitidas com struct:
    soma mutiplicação divisão
    backup / estoque[0]
    backup + estoque[0]
    */

    /*
    os campos seguem as operações permitidas de acordo com o tipo:
    total = estoque[0].preco + estoque[1].preco.....
    */

    for (int i = 0; i < n; i++)
    {
        // criar um procedimento para lervalores de uma peça e guardar
        cout << "cadastrando estoque [" << i << "]" << endl;
        cadastraPeca(estoque[i]);
    }

    cout << "Relatorio de estoque" << endl;
    for (int i = 0; i < n; i++)
    {
        // criar um procedimento para lervalores de uma peça e guardar
        cout << "cadastrando estoque [" << i << "]" << endl;
        printPeca(estoque[i]);
    }

    return 0;
}

// agrupamento de variaveisque resolve o meu problema