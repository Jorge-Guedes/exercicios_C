/*
17. Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe
se este ano é ou não bissexto.
*/

#include <iostream>
using namespace std;

int main() {

    int ano;

    cout << "Digite um ano para analisar: ";
    cin >> ano;

    if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "\nO ano " << ano << " EH BISSEXTO" << endl;
    } else {
        cout << "\nO ano " << ano << " NAO EH BISSEXTO" << endl;
    }

    return 0;
}
