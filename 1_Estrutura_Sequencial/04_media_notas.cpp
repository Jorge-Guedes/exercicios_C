// 4. Faça um Programa que peça as 4 notas bimestrais e mostre a média.

#include <iostream>
#include <iomanip> // biblioteca para setprecision()
using namespace std;

int main() {

    float nota1, nota2, nota3, nota4, media;
    cout << "Digite a 1 nota: ";
    cin >> nota1;
    cout << "Digite a 2 nota: ";
    cin >> nota2;
    cout << "Digite a 3 nota: ";
    cin >> nota3;
    cout << "Digite a 4 nota: ";
    cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    cout << "\nA media foi de " << fixed << setprecision(1) << media << endl;
    return 0;
}
