/*
10. Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino
ou V-Vespertino ou N- Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!"
ou "Valor Inválido!", conforme o caso.
*/

#include <iostream>
#include <ctype.h> // Biblioteca p/ toupper()
using namespace std;

int main() {
    char turno;

    cout << "Seu turno [M - matutino | V - Vespertino | N - Noturno]: ";
    cin >> turno;

    turno = toupper(turno);

    if (turno == 'M') {
        cout << "Tenha um Bom dia! :)" << endl;
    } else if (turno == 'V') {
        cout << "Tenha uma Boa tarde! :)" << endl;
    } else if (turno == 'N') {
        cout << "Tenha uma Boa noite! :)" << endl;
    } else {
        cout << "Valor invalido!" << endl;
    }

    return 0;
}
