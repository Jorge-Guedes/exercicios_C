// 5. Faça um Programa que converta metros para centímetros.

#include <iostream>
using namespace std;

int main() {
    double metros, centimetros;
    cout << "Valor em metros: ";
    cin >> metros;
    centimetros = metros * 100;
    cout << "\n" << metros << " metros equivale a " << centimetros << " centimetros" << endl;
    return 0;
}
