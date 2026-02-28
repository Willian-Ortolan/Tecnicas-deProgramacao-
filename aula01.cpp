#include <iostream>
using namespace std;

int main()
{

    
    srand(time(0));

    // rand() % 2 gera 0 ou 1
    bool aleatorio = (rand() % 2 == 0);

    cout << (aleatorio ? "true" : "false") << endl;
    return 0;
}