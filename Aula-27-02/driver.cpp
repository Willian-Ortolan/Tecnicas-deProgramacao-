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
{ // definindo struct produto
    int codigo;
    string descricao;
    float preco;
    Endereco Origem;
};
typedef struct Produto Produto;

int main()
{
    int n = 55;
    cout << "Tamanho (em bytes) o tipo primitivo int: " << sizeof(int) << endl;
    cout << "Tamanho (em bytes) o tipo primitivo int: " << sizeof(n) << endl;
    cout << "Tamanho (em bytes) o TAD Endereco: " << sizeof(Endereco) << endl;
    cout << "Tamanho (em bytes) o tipo TAD Produto: " << sizeof(Produto) << endl;

    Produto estoque[5];
    estoque[0].codigo = 100;
    estoque[0].descricao = "pistao";
    estoque[0].Origem.cidade = "Afflterbach";
    estoque[0].preco = 100.00;
    estoque[0].Origem.estado = "Baden-Wur?";

    return 0;
}