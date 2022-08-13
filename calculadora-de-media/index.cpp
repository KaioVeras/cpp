#include <iostream>
using namespace std;

int main() {
    double p1, p2, id, form, pic, m;

    cout << "Qual o valor da sua P1: ";
    cin >> p1;

    cout << "Qual o valor da sua P2: ";
    cin >> p2;

    cout << "Qual o valor do ID: ";
    cin >> id;

    cout << "Qual o valor da sua formativa: ";
    cin >> form;

    cout << "Qual o valor do seu PIC: ";
    cin >> pic;
    m = ((p1 + p2 + id + form + pic) / 3);

    cout << "A sua média é: " << m;
    return 0;
}