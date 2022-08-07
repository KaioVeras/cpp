#include <iostream>
using namespace std;

//Idade para votar 

int main()
{
    int ano_de_nascimento, pode_votar;

    cout << "===== Sistema Eleitoral =====\n" ;

    cout << "Digite o seu ano de nascimento: ";
    cin >> ano_de_nascimento;
    pode_votar = 2022 - ano_de_nascimento;

    if (pode_votar >= 16)
    {
        cout << "Você já tem idade para votar!";
    }

    else 
    {
        cout << "Você ainda não tem idade para votar!";
    }

    return 0;
}