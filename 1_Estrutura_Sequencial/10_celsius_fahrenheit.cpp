// 10. Fa�a um Programa que pe�a a temperatura em graus Celsius,
// transforme e mostre em graus Fahrenheit.

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    cout << "Temperatura em Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << "\n" << celsius << "�C equivale a " << fahrenheit << "�F" << endl;
    return 0;
}
