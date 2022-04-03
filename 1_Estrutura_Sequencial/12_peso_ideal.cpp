/*
12. Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo
que calcule seu peso ideal,
usando a seguinte fórmula: (72.7*altura) - 58
*/

#include <iostream>
#include <iomanip> // importar setprecision()
using namespace std;

int main() {
    float altura, peso_ideal;
    cout << "Digite sua altura: ";
    cin >> altura;
    peso_ideal = (72.7*altura) - 58;
    cout << "\nSeu peso ideal eh de " << setprecision(2) << peso_ideal << " Kg" << endl;
    return 0;
}
