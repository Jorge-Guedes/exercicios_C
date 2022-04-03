/*
9. Faça um Programa que peça a temperatura em graus Fahrenheit, transforme
e mostre a temperatura em graus Celsius.
	C = 5 * ((F-32) / 9).
*/

#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;
    cout << "Temperatura em Fahrenheit: ";
    cin >> fahrenheit;
    celsius = 5 * ((fahrenheit - 32) / 9);
    cout << "\n" << fahrenheit << "ºF equivale a " << celsius << "ºC" << endl;
    return 0;
}
