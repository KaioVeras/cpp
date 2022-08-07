#include <iostream>
using namespace std;

//Validade de uma senha

int main() 
{
    double senha;
    cout << "Digite a senha: ";
    cin >> senha;

    if (senha == 140307)
    {
        cout << "ACESSO PERMITIDO";
    }

    else 
    {
        cout << "ACESSO NEGADO";
    }
    return 0;
}