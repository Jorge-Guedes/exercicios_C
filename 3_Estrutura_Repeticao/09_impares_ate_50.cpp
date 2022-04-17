
// 9. Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.

#include <iostream>
using namespace std;

int main() {

    cout << "Impares entre 1 a 50:" << endl;
    for (int i=1; i<=50; i+=2) {
        cout << i << ", ";
    }
    cout << "\n";

    return 0;
}
