// 7. Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio.

#include <iostream>
using namespace std;

int main() {
    float lado, area, dobroArea;
    cout << "Lado do quadrado: ";
    cin >> lado;
    area = lado * lado;
    dobroArea = area * 2;
    cout << "\nA area do quadrado eh " << area << endl;
    cout << "E seu dobro equivale a " << dobroArea << endl;
    return 0;
}
