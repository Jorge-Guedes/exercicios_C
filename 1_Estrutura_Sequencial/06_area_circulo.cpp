// 6. Fa�a um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea.

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
