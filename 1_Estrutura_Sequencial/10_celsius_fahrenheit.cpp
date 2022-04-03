// 10. Faça um Programa que peça a temperatura em graus Celsius,
// transforme e mostre em graus Fahrenheit.

#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;
    cout << "Temperatura em Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << "\n" << celsius << "ºC equivale a " << fahrenheit << "ºF" << endl;
    return 0;
}
