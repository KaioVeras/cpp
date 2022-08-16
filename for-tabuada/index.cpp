#include <iostream>
using namespace std;

int main() 
{
    int num, mul;

    cout << "Me informe um numero entre 1 e 10: ";
    cin >> num;

    if (num<=10) 
    {
        for (mul=1; mul<=10;mul++)
        {
           cout << num << "*" << mul << "=" <<  num*mul << endl;
        }
    }

    else 
    {
        cout << "ERRO!";
    }

    return 0;
}