/*
3. Faça um Programa que verifique se uma letra digitada é "F" ou "M".
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.
*/

#include <iostream>
#include <ctype.h> // Biblioteca p/ toupper()
using namespace std;

int main() {
    char sexo;

    cout << "Digite seu sexo [F - Feminino | M - Masculino]: ";
    cin >> sexo;

    sexo = toupper(sexo);

    if (sexo == 'F') {
        cout << "Voce eh mulher" << endl;
    } else if (sexo == 'M') {
        cout << "Voce eh homem" << endl;
    } else {
        cout << "Sexo invalido" << endl;
    }

    return 0;
}
