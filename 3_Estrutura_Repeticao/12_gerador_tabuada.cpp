/*
12. Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro
entre 1 a 10. O usuário deve informar de qual numero ele deseja ver a tabuada.
A saída deve ser conforme o exemplo abaixo:

    Tabuada de 5:
    5 X 1 = 5
    5 X 2 = 10
    ...
    5 X 10 = 50
*/

#include <iostream>
using namespace std;

int main() {

    int numero;

    cout << "======== TABUADA ========" << endl;

    cout << "\nDigite um numero para ver na tabuada: ";
    cin >> numero;

    for (int i=1; i <= 10; i++) {
        cout << numero << " X " << i << " = " << numero * i << endl;
    }

    return 0;
}
