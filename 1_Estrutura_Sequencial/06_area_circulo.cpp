// 6. Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <iostream>
#include <iomanip> // biblioteca para setprecison()
using namespace std;

int main() {
    const float PI = 3.1415;
    float raio, area;
    cout << "Valor do raio: ";
    cin >> raio;
    area = PI * (raio * raio);
    cout << "\nA sua area eh de " << fixed << setprecision(1) << area << endl;
    return 0;
}
