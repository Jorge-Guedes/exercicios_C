/*
16. Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c.
O programa deverá pedir os valores de a, b e c e fazer as consistências,
informando ao usuário nas seguintes situações:

    a) Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o programa não deve fazer
    pedir os demais valores, sendo encerrado;
    b) Se o delta calculado for negativo, a equação não possui raizes reais. Informe ao usuário e encerre o programa;
    c) Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe-a ao usuário;
    d) Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário;
*/

#include <iostream>
#include <math.h> // import pow()
using namespace std;

int main() {

    int a, b, c, delta;
    float raiz1, raiz2;

    cout << "------ Equaçao do Segundo grau ------" << endl;

    cout << "\nDigite o valor de a: ";
    cin >> a;
    if (a == 0) {
        cout << "A equacao nao eh do segundo grau. Encerrando..." << endl;
    } else {
        cout << "Digite o valor de b: ";
        cin >> b;
        cout << "Digite o valor de c: ";
        cin >> c;
        delta = pow(b, 2) - 4 * a * c;
        cout << "\nValor de delta: " << delta << "\n\n";

        cout.precision(3); // 2 casas decimais

        if (delta < 0) {
            cout << "A equacao nao possui raizes reais" << endl;
        } else if (delta == 0) {
            raiz1 = a / -c;
            cout << "A equacao possui apenas uma raiz real" << endl;
            cout << "x1: " << raiz1 << endl;
        } else if (delta > 0) {
            raiz1 = (-b + sqrt(delta)) / (2 * a);
            raiz2 = (-b - sqrt(delta)) / (2 * a);
            cout << "A equacao possui duas raizes reais" << endl;
            cout << "x1: " << raiz1 << "\nx2: " << raiz2 << endl;
        }
        cout.precision(-1); // volta a precisao ao normal
    }

    return 0;
}
