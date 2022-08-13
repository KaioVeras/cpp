#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int quantidade;
    int soma = 0;
    int entrada;

    cout << "Numero de termos: ";
    cin >> quantidade;

    for (i=1;i<=quantidade;i++) {
        cout << "Me informe um valor para o calculo: ";
        cin >> entrada;
        soma = soma + entrada;
    }

    double media = (soma/quantidade);
    cout << "A media dos valores e " << media;
    return 0;
}